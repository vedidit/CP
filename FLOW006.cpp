t=int(input())
i=0
sum=0
j=0

for i in range(0,t):
    n=input()
    string=str(n)
    length=len(string)
    for j in range(0,length):
        k=int(string[j])
        sum=sum+k
    print(sum)
    sum=0
        
