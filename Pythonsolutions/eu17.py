words={}
words[0]=''
words[1]='one'
words[2]='two'
words[3]='three'
words[4]='four'
words[5]='five'
words[6]='six'
words[7]='seven'
words[8]='eight'
words[9]='nine'
words[10]='ten'
words[11]='eleven'
words[12]='twelve'
words[13]='thirteen'
words[14]='fourteen'
words[15]='fifteen'
words[16]='sixteen'
words[17]='seventeen'
words[18]='eighteen'
words[19]='nineteen'
words[20]='twenty'
words[30]='thirty'
words[40]='forty'
words[50]='fifty'
words[60]='sixty'
words[70]='seventy'
words[80]='eighty'
words[90]='ninety'
words[100] ='hundred'

if __name__=="__main__":
	s=''
	for i in range(1,21):
		s+=words[i]
		print words[i]
	for i in range(21,100):
		s+=words[i/10 * 10]+words[i%10]
		print words[i/10 * 10]+words[i%10]
	for i in range(1,10):
		s+=words[i]+words[100]
		print words[i]+words[100]
		for n in range(1,21):
			s+=words[i]+words[100]+'and'+words[n]
			print words[i]+words[100]+'and'+words[n]
		for n in range(21,100):
			s+=words[i]+words[100]+'and'+words[n/10 * 10]+words[n%10]
			print words[i]+words[100]+'and'+words[n/10 * 10]+words[n%10]
	s+='onethousand'
	print 'onethousand'
	print len(s)

