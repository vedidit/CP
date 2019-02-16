def fact(x):
    if(x==1):
        return(1)
    else:return(x*fact(x-1))
t=int(input())
for i in range(t):
    n=int(input())
    print(fact(n))
    