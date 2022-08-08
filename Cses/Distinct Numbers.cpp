#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    set<int>s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        s.insert(t);
    }
    cout<<s.size()<<endl;
}
