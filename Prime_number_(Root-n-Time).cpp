// Print n prime number using root n time complexity.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    int i,j,t;
    int flag;
    for(i=2;i<=n;i++)
    {
    t=sqrt(i);
    flag=0;
    for(j=2;j<=t;j++)
    {

        if(i%j==0)
        {
            flag=1;
            break;
        }
    }
      if(flag==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
