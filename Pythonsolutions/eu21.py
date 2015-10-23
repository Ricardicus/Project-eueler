def d(n):
	i = 1
	divisors = []
	while(i<n):
		if(n%i==0):
			divisors.append(i)
		i+=1
	return sum(divisors)

if __name__=="__main__":
		print d(220)
		print d(284)
		amicablepairs = {}
		i = 2
		while(i<10000):
			amicablepairs[i] = 0
			i+=1
		i = 2
		while(i<10000):
			n = d(i)
			p = d(n)
			if(p == i and i != n):
				print i," is amicable with ",n
				amicablepairs[i] = n
			else:
				amicablepairs[i] = 0
			i+=1
		sum = 0
		for n in amicablepairs:
			if(amicablepairs[n]>0):
				sum+=amicablepairs[n]
		print "the sum of all the amicable numbers under 10000 is ",sum