from itertools import permutations

i = 1
for n in permutations(range(10),10):
	if i == 1000000:
		print n
		break
	i+=1
