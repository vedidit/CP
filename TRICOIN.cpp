#include<stdio.h>
int main()

{
int t,n;
scanf("%d",&t);

while(t--)
{
	scanf("%d",&n);
int count=0,i=1;
while(n>0 && i<=n)
{
n=n-i;
count++;
i++;
}
printf("\n%d",count);
count=0;
}


}
