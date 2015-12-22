def collatz(i):
	if i%2 == 0:
		return i/2
	elif i%2 != 0:
		return (3*i)+1

collno = 0
maxcollno = 0
maxi = 0

for i in range(1000000,0,-1):
	collno = 0
	n = i
	while n>1:
		n = collatz(n)
		collno += 1
	
	if collno > maxcollno:
		maxi = i
		maxcollno = collno
print maxcollno
print maxi
