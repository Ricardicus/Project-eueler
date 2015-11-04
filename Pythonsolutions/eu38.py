def is_pandigital(x):
	s = str(x)
	l = ['1','2','3','4','5','6','7','8','9']
	while(len(l)>0 and l.pop(0) in s):
		pass
	if(len(l)!=0):
		return False
	return True

if __name__=="__main__":
	nbrs = [1,2,3,4,5,6,7,8,9]
	n = 1
	max = 0
	while(n<1000000):
		index = 3
		count = 0
		nbr = 0
		while(count < 9):
			i = 0
			p = ''
			while(i<=index):
				p += str(n*nbrs[i])
				i += 1
			if(len(p)<9 and index<9):
				index+=1
			elif(len(p)>9 and index>0):
				index-=1
			elif(len(p)==9):
				if(is_pandigital(p) and p>max):
					max = p
					count = 9
			count+=1
		n+=1
	print 'the result would be: ',max