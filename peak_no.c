#include<stdio.h>
int main()
{
    int n,i,peak;
    printf("ENTER ARRAY LENGTH\n");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ARRAY ELEMENTS\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(a[0] > a[1])
        peak=a[0];
    else if(a[n-1] > a[n-2])
        peak=a[n-1];
    else
    {
        for(i=1;i<=n-2;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1] )
            {
                peak=a[i];
                break;
            }
        }
    }
    printf("peak = %d",peak);
}

