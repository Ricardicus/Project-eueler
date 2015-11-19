import math
import itertools

def is_pandigital(x):
# not used in this solution.. but the method was very efficient and I figured I should just save it for the future..
	if(len(x)>9):
		return False
	numbers = []
	for nbr in range(1,len(x)+1):
		numbers.append(str(nbr))
	for i in range(0,len(x)):
		if(x[i] not in numbers):
			return False
		numbers.pop(numbers.index(x[i]))
	return True

def is_prime(x):
	for i in xrange(2,x):
		if(x%i==0):
			return False
	return True

def eu41():
	max = -1
	entry = 0
	for i in itertools.permutations('1234567',7):
		entry = int(''.join(i))
		if(is_prime(entry)):
			if(entry>max):
				max = entry
		print entry
	print 'result is: ', max

if __name__ == "__main__":
	print "hej!"
	eu41()