n = 2**1000
N = [int(i) for i in str(n)]

sum = 0

for a in range(0,len(N)):
	sum += N[a]

print sum
