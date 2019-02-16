#include<stdio.h>
#include<math.h>
typedef unsigned long long int ll;

int main()
{
ll t,n,a,count,c;
scanf("%llu",&t);
while (t--)
{
scanf("%llu",&n);
c=0;
a=1;
count=0;


while( n>=pow(5,a) )
{
c=n/pow(5,a);
a++;
count=count+c;
}
printf("%d\n",count);
}












}