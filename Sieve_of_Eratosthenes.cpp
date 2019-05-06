// Sieve Of Eratosthenes
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    bool a[n+1];
    memset(a,true,sizeof(a));
    for(i=2;i*i<=n;i++)
    {
        if(a[i]==true)
        {
        for(j=i*i;j<=n;j+=i)
        a[j]=false;
        cout<<i<<" ";
        }
    }
    for(;i<=n;i++)
    if(a[i]==true)
    cout<<i<<" ";
    return 0;
}
