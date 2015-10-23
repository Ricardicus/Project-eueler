from sets import Set

if __name__=="__main__":
	lst = []
	for a in range(2,101):
		for b in range(2,101):
			lst.append(a**b)
	st = Set(lst)
	print len(st)