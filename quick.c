#include<stdio.h>

void quick(int[],int,int);
int part(int[],int,int);
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
quick(a,0,n-1);
printf("The Sorted array is:\n");
for(i=0;i<n;i++)
  printf("%d ",a[i]);
return 0;
}

void quick(int *a,int l,int u)
{
  int p;
if(u>l)
{
  p=part(a,l,u);
  quick(a,l,p-1);
  quick(a,p+1,u);
}
}

int part(int *a,int l,int u)
{
  int pivot,i,min,p;
  pivot=a[u];
  min=l-1;
  for(i=l;i<u;i++)
  {
    if(a[i]<=pivot)
    {
      min++;
      swap(&a[i],&a[min]);
    }
  }
    swap(&a[min+1],&a[u]);
    return (min+1);
}
