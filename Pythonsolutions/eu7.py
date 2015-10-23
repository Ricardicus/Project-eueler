def isprime(x):
	for i in range(2,x):
		if(x%i==0):
			return 0
	return 1
if __name__=="__main__":
	primes = [x for x in range(2,120000) if isprime(x)]
	print len(primes)
	print primes[9998]
	print primes[9999]
	print primes[10000]
	print primes[10001]
	print primes[10002]
