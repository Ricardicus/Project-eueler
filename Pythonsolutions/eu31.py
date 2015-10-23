def ways(x):
	global coins

if __name__=="__main__":
	coins = [1,2,5,10,20,50,100,200]
	maxcoin = 200
	table = [1] + [0]*maxcoin
	ways = [n for n in table]

	for i in range(0,len(coins)):
		for j in range(coins[i],201):
			ways[j] += ways[j-coins[i]]

	print ways[200]
 