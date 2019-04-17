#include<stdio.h>

void count(int[],int,int,int);
int max(int[],int,int);
void swap(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}

int main()
{
int n,i,k;
printf("Enter The range of number\n");
scanf("%d",&n);
int a[n];
printf("Enter Values:");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
k=max(a,0,n);
count(a,0,n,k);
printf("The Sorted array is:\n");
for(i=0;i<n;i++)
  printf("%d ",a[i]);
return 0;
}

int max(int *a,int l,int u)
{
  int i,max=a[l];
  for(i=l+1;i<u;i++)
  {
  if(max<a[i])
    max=a[i];
  }
  return max;
}
void count(int *a,int l,int u,int k)
{
int c[k+1],i,j,b[u];
for(i=1;i<=k;i++)
{
  c[i]=0;
}
for(j=l;j<u;j++)
  c[a[j]]=c[a[j]]+1;
for(i=2;j<=k;j++)
  c[i]=c[i]+c[i-1];
for(j=u-1;j>=0;j--)
{
  b[c[a[j]]]=a[j];
  c[a[j]]=c[a[j]]-1;
}
for(i=l;i<u;i++)
{
  a[i]=b[i];
}
}
