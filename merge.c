#include<stdio.h>

void merge(int[],int,int,int);
void mergesort(int[],int,int);
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
mergesort(a,0,n-1);
printf("The Sorted array is:\n");
for(i=0;i<n;i++)
  printf("%d ",a[i]);
return 0;
}

void mergesort(int *a,int l,int u)
{
    int mid,i;
if(u>l)
{
  mid=(l+u)/2;
  mergesort(a,l,mid);
  mergesort(a,mid+1,u);
  merge(a,l,mid,u);
}
}

void merge(int *a,int l,int mid,int u)
{
  int i;
int n1,n2,j,k;
n1=mid-l+1;
n2=u-mid;
int r1[n1+1],r2[n2+1];
for (i=0;i<n1;i++)
  r1[i]=a[l+i];
for (i=0;i<n2;i++)
  r2[i]=a[mid+i+1];
i=0;
j=0;
for(k=l;k<=u;k++)
{
  if(r1[i]<=r2[j] || j==n2)
  {
  a[k]=r1[i];
  i++;
  }
  else
  {
  a[k]=r2[j];
  j++;
  }
}
}
