#include<stdio.h>

void select(int[],int);
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
select(a,n);
printf("The Sorted array is:\n");
for(i=0;i<n;i++)
  printf("%d ",a[i]);
return 0;
}

void select(int *a,int n)
{
int i,j,min,pos;
  for(i=0;i<n-1;i++){
    min=a[i];
    for(j=i+1;j<n;j++)
      {
        if(min>a[j])
        {
          min=a[j];
          pos=j;
        }
      }
      a[pos]=a[i];
      a[i]=min;
  }
}
