def nameworth(s):
	sum = 0
	for l in s:
		sum+=ord(l)-ord('A')+1
	return sum

if __name__=="__main__":
		with open("p022_names.txt",'r') as f:
			read_data = f.read()
		f.close()
		names = read_data.split('","')
		names[0] = 'MARY'
		names[len(names)-1]='ALONSO'
		names.sort()
		sum = 0
		for i in range(1,len(names)+1):
			sum += i*nameworth(names[i-1])
		print sum

