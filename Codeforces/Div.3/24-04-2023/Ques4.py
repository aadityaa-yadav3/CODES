for _ in range(int(input())):
	n=int(input())
	if n%2!=0 and n!=1:
		print(-1)
	else:
		s=''
		for i in range(n):
			if i!=0 and i%2==0:
				s+=(str(i) +' ')
			else:
				s+=(str(n-i) +' ')
		print(s)