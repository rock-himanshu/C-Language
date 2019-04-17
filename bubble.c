#include<stdio.h>

void bubble(int[],int);
void swap(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}

int main()
{
int n,i;

printf("Enter The range of number\n");
scanf("%d",&n);

int a[n];
printf("Enter Values:");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
bubble(a,n);
for(i=0;i<n;i++)
  printf("%d ",a[i]);
return 0;
}

void bubble(int *a,int n)
{
int i,j;
for(i=0;i<n;i++)
{
  printf("%d ",a[i]);
}
printf(">>\n");
  for(i=0;i<(n-1);i++)
  {
    for(j=0;j<(n-i-1);j++)
      {
      if(a[j]>a[j+1])
      swap(&a[j],&a[j+1]);
      }
  }
}
