f = [1,2]
for i in range(2,100):
f.insert(i,f[i-1]+f[i-2])

ff = [n for n in f if n<4000000]
fres = [n for n in ff if n%2==0]
s = 0
for i in fres:
s+=i

print s