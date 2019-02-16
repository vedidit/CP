t=int(input())
for i in range(t):
	[n, m, k] = [int(i) for i in raw_input().split()]
	
	if(abs(n-m)==k):
		print(0)
		
	if(abs(n-m)>k):
		r=min(n,m)
		if(r==m):
			r=r+k
			print(abs(r-n))
		else:
			r=r+k
			print(abs(r-m))
			
		
	if(abs(n-m)<k):
		print(0)