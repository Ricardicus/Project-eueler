def get_nbr_of_divisors(x):
	nbrs_of_divisors = 0
	for i in range(1,x+1):
		if(x%i==0):
			nbrs_of_divisors += 1
	return nbrs_of_divisors

if __name__=="__main__":
#	trianglenbrs = []
#	nbrs_of_divisors = {}
	overtop = 500
	top = 2000
	max = 0
	for i in range(1,top):
		potentialnbr = sum(range(1,i))
		nbrs_of_divisors = get_nbr_of_divisors(potentialnbr)
		if(nbrs_of_divisors>max):
			max = nbrs_of_divisors 
		elif(nbrs_of_divisors>500):
			print "We have a winner: ", potentialnbr
			break
		else:
			print "->",potentialnbr,"was not big enough its",nbrs_of_divisors,"divisors. Current maximal number of divisors found is",max




#	biggesttrianglenbrs = max(trianglenbrs)
#	for n in trianglenbrs:
#		print "get nbr of divisors for",n
#		nbrs_of_divisors[n] = get_nbr_of_divisors(n)
#		print "they were: ",nbrs_of_divisors[n]
#		print "the biggest trianglenbrs is: ",biggesttrianglenbrs
#	for k in nbrs_of_divisors:
#		if(nbrs_of_divisors[k]>overtop):
#			print "nbrs: ",k,", divisors: ",nbrs_of_divisors[k]