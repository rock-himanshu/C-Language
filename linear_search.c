#include<stdio.h>

void linear_search(int *a,int n, int k)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			k=i;
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("found");
	}
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
	linear_search(a,n,k);
	printf("\nThe Position is :",k);
	return 0;
}
