#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int t,n,m,sz;
    cin>>t;
    while(t--)
    {
        s.clear();
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>m;
            s.insert(m);
        }
        sz=n-s.size();
        //printf("sz %d\n",sz);
        if(sz%2==1)
        {
            cout<<s.size()-1<<endl;
        }
        else
            cout<<s.size()<<endl;

    }
}
