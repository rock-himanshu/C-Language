//Job Scheduling algorithm.
//To find max no. of unweighted process can be achived in given time(start time and end time).
#include <bits/stdc++.h>
using namespace std;
    bool compare(const pair<int, int>&i, const pair<int, int>&j)
    {
    return i.second < j.second;
    }

int main()
{
    vector< pair<int,int> >  a;
    int t,i,j,x,y;
    int n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>x>>y;
            a.push_back(make_pair(x,y));
        }
        sort(a.begin(),a.end(),compare);
     int c=1;
     int first,end;
     end=a[0].second;
     for(j=1;j<n;j++)
     {
      if(end<=a[j].first)
      {
          end=a[j].second;
        //   cout<<"("<<a[j].second<<") ";
          c++;
      }
     }
     cout<<c;
    }

    return 0;
}
