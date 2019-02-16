t=int(raw_input())
i=0
while(i>=0 and i<t):
	
	n=raw_input()
	string=str(n)
	m=len(string)
	if(m==1):
		print int(string)
		i=i+1
	else:
		ans=int(string[0])+int(string[m-1])
		i=i+1
		print ans  	
	
