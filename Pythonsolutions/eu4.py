def primesof(x):
	primes = {}
	
	for n in range(0,x):
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
	
def ispalindrome(x):
	strnbr=str(x)
	i = 0
	while(i < len(strnbr)):
		if(strnbr[i]!=strnbr[len(strnbr)-1-i]):
			return 0
		i+=1
	return 1


if __name__=="__main__":
	numbers = []
	for i in range(900,999):
		for n in range(900,999):
			if(ispalindrome(n*i)):
				numbers.append(n*i)
	numbers.sort()
	print(numbers[len(numbers)-1])
