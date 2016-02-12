def kombi(x):
	if(len(x) == 2):
		return [x[:],x[::-1]]
	q = []
	for i in range(len(x)):
		b = kombi(x[1:])
		for n in b:
			q.append([x[0]] + n)
		x = x[1:] + [x[0]]
	return q

def get_pandigitals():
	return kombi([1,2,3,4,5,6,7,8,9,0])

def examine_substring(x):
	s = str(x)
	if(int(s[1:4])%2 != 0):
		return False
	if(int(s[2:5])%3 != 0):
		return False
	if(int(s[3:6])%5 != 0):
		return False
	if(int(s[4:7])%7 != 0):
		return False
	if(int(s[5:8])%11 != 0):
		return False
	if(int(s[6:9])%13 != 0):
		return False
	if(int(s[7:10])%17 != 0):
		return False
	return True

def to_int(x):
	nbr = 0
	pot = 1
	exp = 0
	for i in x[::-1]:
		q = i
		n = 0
		while(n<exp):
			q*=10
			n+=1
		nbr += q
		exp+=1
	return nbr

#print to_int([1,4,5,2,3])
sum=0
ps = get_pandigitals()
print 'get_pandigitals() call finished!'
for n in ps:
	nbr = to_int(n)
	if(examine_substring(nbr)):
		sum+=nbr
		print nbr, " passes the examination"
print 'the long waited for result is ',sum
