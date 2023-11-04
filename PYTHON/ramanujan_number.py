# Python program for the above approach
import time

# Function to find Ramanujan numbers
# made up of cubes of numbers up to L
def ramanujan_On4(limit):
	dictionary = dict()

	# Generate all quadruples a, b, c, d
	# of integers from the range [1, L]
	for a in range(0, limit):
		for b in range(0, limit):
			for c in range(0, limit):
				for d in range(0, limit):

					# Condition # 2:
					# a, b, c, d are not equal
					if ((a != b) and (a != c) and (a != d)
						and (b != c) and (b != d)
							and (c != d)):

						x = a ** 3 + b ** 3
						y = c ** 3 + d ** 3
						if (x) == (y):
							number = a ** 3 + b ** 3
							dictionary[number] = a, b, c, d

	# Return all the possible number
	return dictionary


# Driver Code

# Given range L
L = 30
ra1_dict = ramanujan_On4(L)

# Print all the generated numbers
for i in sorted(ra1_dict):
	print(f'{i}: {ra1_dict[i]}', end ='\n')
