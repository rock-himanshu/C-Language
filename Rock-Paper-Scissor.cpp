// Google CodeJAm 2019(Round 1C):Rock-Paper-Scissor
#include<bits/stdc++.h>

int main()
{
map<char,char> no;
no['R']='S';
no['P']='R';
no['S']='P';
int t,a,i;

cin>>t;

for(i=1;i<=t;i++)
{
cin>>a;
int c;
string s;

vector<string>::iterator st;

map<char,int> status,out;
int max,l[a],k;
    max=0;
    for(j=0;j<a;j++)
    {
    
    cin>>s;
    l[j]=s.length();
    if(m<l[j])
    max=l[j];
    st.push_back(s);
    }

    for(k=0;k<max;k++)
    {
        c=0;
        for(j=0;j<a;j++);
        {
            l=st[j].length();
        out[no[st[j].[k%l]]]=1;
        }
        if(out['R']==1)
        c++;
        if(out['S']==1)
        c++;
        if(out['P']==1)
        c++;
        if(c==3)
        {
        cout<<"CASE #"<<i<<"IMPOSSIBLE";
        break;
        }
        else{
        output.push_back(out['R']==1?'R':(out['S']==1?'S':'P'));
        continue;
        }
    }
    cout<<"CASE #"<<t<<" "<<output;
return 0;
}
