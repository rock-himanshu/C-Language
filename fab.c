#include<stdio.h>
int fab(int);

int main()
{
int a,i;
printf("Enter length");
scanf("%d",&a);
for(i=0;i<a;i++)
printf("%d ",fab(i));
}

int fab(int n)
{
if(n<=0)
return 0;
if(n==1)
return n;
return (fab(n-1)+fab(n-2));
}
