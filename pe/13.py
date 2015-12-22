file = open('13.txt')
sum = 0
for line in file.readlines():
	if line:
		sum += int(line)
		
print (sum)
