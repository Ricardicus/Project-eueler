def primesof(x):
	primes = {}	
	for n in range(0,x+1):
		primes[n] = 0	
	i=2		
	while(i<=x):
		if(x%i==0):
			primes[i] += 1
			x/=i
			while(x%i==0):
				primes[i] += 1
				x/=i
		i+=1	
	p = {}	
	for k in primes:
		if(primes[k]!=0):
			p[k]=primes[k]		
	return p
	
if __name__=="__main__":
	numberparts = {}
	for i in range(2,21):
		numberparts[i]=0
	for n in range(2,21):
		primes = primesof(n)
		for k in primes:
			if numberparts[k]<primes[k]:
				numberparts[k]=primes[k]
	number = 1
	for k in numberparts:
		if(numberparts[k]!=0):
			number*=k**numberparts[k]
	print number