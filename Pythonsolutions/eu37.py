if __name__=="__main__":
	maxnbr = 1000000
	sum = 0
	primes = []
	i = 0
	while(i<maxnbr):
		primes.append(True)
		i+=1
	primes[0] = False
	primes[1] = False
	i = 2
	while(i<maxnbr):
		n = i+i
		while(n<maxnbr):
			primes[n] = False
			n += i
		i+=1	
	for q in range(8,maxnbr):
		if(primes[q]):
			s1 = str(q)
			s2 = s1
			a = True
			while(s1!=''):
				if(not primes[int(s1)]):
					a = False
					break
				s1 = s1[1:]
			b = True
			while(s2!=''):
				if(not primes[int(s2)]):
					b = False
					break
				s2 = s2[:len(s2)-1]
			if(a and b):
				sum += q
	print 'resulting sum is: ',sum




