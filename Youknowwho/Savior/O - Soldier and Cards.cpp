#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k1,k2;
    cin>>n;
    cin>>k1;
    int val;
    deque<int>a,b;
    for(int i=0; i<k1; i++)
    {
        cin>>val;
        a.push_back(val);
    }
    cin>>k2;
    for(int i=0; i<k2; i++)
    {
        cin>>val;
        b.push_back(val);
    }

    int c1,c2;
    long long int cnt=0;
    bool f=0;
    while(!a.empty() && !b.empty())
    {
        cnt++;
        c1=a.front();
        a.pop_front();
        c2=b.front();
        b.pop_front();
        if(c1>c2)
        {
            a.push_back(c2);
            a.push_back(c1);
        }
        else
        {
            b.push_back(c1);
            b.push_back(c2);
        }
    if(cnt==3628800){
            f=1;
            break;
    }
    }
    f? cout<<-1<<'\n' : cout<<cnt<<' '<<(a.empty() ? 2 : 1)<<'\n';
}
