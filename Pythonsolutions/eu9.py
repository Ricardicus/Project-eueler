if __name__=="__main__":
	for a in range(1,500):
		for b in range(a+1,500):
			for c in range(b+1,500):
				if((a+b+c)==1000 and c**2==a**2+b**2):
					print a
					print b 
					print c
					print 'produkten blir: ' + str(a*b*c)
