t=int(input())
for i in range(t):
    l=int(input())
    k=raw_input()
    s=str(k)
    if(s[0]=="N"):
        
        for j in range(0,l):
            if(s[j]=="N"):
                if(j==l-1):
                    print("NOT SURE")
                else:continue    
                
            if(s[j]=="I"):
                print("INDIAN")
                break
            if(s[j]=="Y"):
                print("NOT INDIAN")
                break
            
    if(s[0]=="I"):
        for c in range(0,l):
            if(s[c]=="N"):
                print("INDIAN")
                break
            if(s[c]=="I"):
                if(c==l-1):
                    print("INDIAN")
                   
                else:continue   
                
            
            
        
    if(s[0]=="Y"):
        for m in range(0,l):
            if(s[m]=="Y"):
                if(m==l-1):
                    print("NOT INDIAN")
                else:continue
               
            if(s[m]=="N"):
                print("NOT INDIAN")
                break
            
