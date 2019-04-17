#include<stdio.h>

void insert(int[],int);
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
insert(a,n);
printf("The Sorted array is:\n");
for(i=0;i<n;i++)
  printf("%d ",a[i]);
return 0;
}

void insert(int *a,int n)
{
int i,j,min;
  for(i=1;i<n;i++)
  {
    min=a[i];
    j=i-1;
    while(j>=0 && min<a[j])
      {
      a[j+1]=a[j];
      j--;
      }
      a[j+1]=min;
  }
}
