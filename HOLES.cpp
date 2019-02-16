t=int(input())
i=0
hole=0
k=0
for i in range(0,t):
    n=str(input())
    l=len(n)
    for k in range(0,l):
        if(n[k]=="A" or n[k]=="D" or n[k]=="O" or n[k]=="P" or n[k]=="R" or n[k]=="Q"):
            hole=hole+1
        if(n[k]=="B"):
            hole=hole+2
        else:continue
        
    print(hole)
    hole=0
            
        
    
