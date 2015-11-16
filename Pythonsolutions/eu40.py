def eu40():
	number_string = ''
	for i in range(0,1000000):
		number_string += str(i)
	return number_string

if __name__=="__main__":
	s = eu40()		
	index = 1
	result = 1
	while(index<=1000000):
		result *= int(s[index])
		index *= 10
	print result