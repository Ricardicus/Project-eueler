
import math
import time

start = time.clock()

def sieve(upper_bound):
  primes = range(0, upper_bound + 1)
  primes[0] = 0
  primes[1] = 0
  step = 2
  while step <= math.sqrt(upper_bound):
    for x in xrange(step + step, upper_bound + 1, step):
      primes[x] = 0
    step += 1
  return primes

total = sum(sieve(2000000))

print total
print "Time elapsed: " + str(time.clock() - start)
