t=input()
i=1
j=0
for i in range(1,t+1):
	n=raw_input()
 
	string=str(n)
	m=len(n)
	reverse=""
	for j in range(0,m):
		reverse=reverse+string[m-j-1]
		
	print int(reverse)
		
		