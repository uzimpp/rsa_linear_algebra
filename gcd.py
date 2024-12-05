def euclid(x,y):
	print(x, y)
	if x % y == 0:
		return y
	else:
		return euclid(y, x % y)
	
print(euclid(93810803, 18037259))

print(pow(65, 1120, 101))

