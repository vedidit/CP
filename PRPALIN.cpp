#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isprime(int n)
    {
    if(n==1)
        {return false;}
    else if((n==2)||(n==3))
        {return true;}
    else if((((n+1)%6)==0)&&(((n-1)%6)==0))
        {return false;}
    else{
        int x= floor (sqrt(n));
        bool flag=true;
        for(int i=2;i<x;i++)
            {
            if((n%i)==0)
                {//return false;
                flag=false;
                break;}
        }
        if(flag) {return true;}
        else {return false;}
    }
        
}

bool ispalindrome(int m)
    {
    int n=m;
    int arr[25]={};
    int end=-1;
    int i=0;
    
    while(1)
        {
        arr[i]=(n%10);
        end++;
        if((n/10)==0)
            {break;}
        else
            {
            n=(n/10);
            i++;
        }
    }
    int k=end;
    int rev=0;
    
    for(int j=0;j<=end;j++)
        {
        rev=rev+arr[j]*pow(10,k);
        k--;
    }
    if(m==rev)
        {return true;}
    else {return false;}
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    while(1)
        {
        if(isprime(n))
            {
            if(ispalindrome(n))
                {cout<<n;
                break;}
        }
        n++;
    }
    return 0;
}
