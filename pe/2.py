def fib(n):
	if n == 0:
		return 0
	elif n == 1:
		return 1
	else:
		return fib(n-1) + fib(n-2)

i = 0
ans = 0

while(i<34):
	a=fib(i)
	if a and ((a % 2) == 0):
		ans += a
	i+=1
	print ans
print ans
