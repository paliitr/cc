for a in range(999,100,-1):
	for b in range(999,100,-1):
		n = a * b
		if str(n) == ''.join(reversed(str(n))):
			print n
