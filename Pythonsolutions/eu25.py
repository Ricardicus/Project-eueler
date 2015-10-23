from decimal import *

if __name__=="__main__":

	f,s = Decimal(1),Decimal(1)
	i = 2
	while(True):
		f,s = s,s+f
		i+=1
		st = str(s)
		if(st.endswith('+999')):
			break

	print i