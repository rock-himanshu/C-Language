#include<stdio.h>
void selection_sort(int *a,int n)
{
	int i,j,min_idx,t;
	for (i=0;i<n-1;i++)
	{
		min_idx=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j] < a[min_idx])
				min_idx=j;
		}
		t=a[i];
		a[i]=a[min_idx];
		a[min_idx]=t;
	}
}

void binary_search(int *a,int n,int k)
{
	int beg=0,mid,end=n-1,flag=0;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(a[mid]==k)
		{
			flag=1;
			break;
		}
		else if(k>a[mid])
			beg=mid+1;
		else
			end=mid-1;
}
	if(flag==1)
		printf("found");
	else
		printf("not found");
}

int main()
{
	int k,n,i;
	printf("enter n\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter key\n");
	scanf("%d",&k);
	selection_sort(a,n);
	binary_search(a,n,k);
}
