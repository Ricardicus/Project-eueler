from decimal import *

def minimalreoccur(s):

	size = 0

	v = ''
	v += s[size]
	size+=1

	while(True):
		if(v==s[size:2*size]):
			return size
		v+=s[size]
		size+=1

def reoccur(s):

	st = s

	end1 = len(st) / 2
	end2 = len(st)

	start = 0
	s1 = st[start:end1]
	s2 = st[end1:end2]
	while(s1 != s2):
		start += 1
		end2 -= 1
		end1 = (start+end2)/2
		s1 = st[start:end1]
		s2 = st[end1:end2]

	st = st[start:end2]

	if(len(st)>0):
		return minimalreoccur(st)

	return 0

if __name__=="__main__":
	getcontext().prec = 10000
	i = 2
	max = 0
	maxindex = 0

	p = reoccur(str(Decimal(1)/Decimal(2)))
	print p

	while(i<1000):
		p = reoccur(str(Decimal(1)/Decimal(i)))
		if(p > max):
			max = p
			maxindex = i
		i+=1
		print i

	print 'Maximal cycle length is 1 /',maxindex
