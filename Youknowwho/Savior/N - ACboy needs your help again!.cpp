#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,val;
    string s;
    cin>>t;
    while(t--)
    {
        queue<int>q;
        stack<int>st;
        cin>>n>>s;
        if(s=="FIFO")
        {
            for(int i=0;i<n;i++)
            {
                cin>>s;
                if(s=="IN"){
                    cin>>val;
                    q.push(val);
                }
                else{
                    if(q.empty())
                        cout<<"None\n";
                    else{
                        cout<<q.front()<<'\n';
                        q.pop();
                    }
                }
            }
        }
        else{
            for(int i=0;i<n;i++)
            {
                cin>>s;
                if(s=="IN"){
                    cin>>val;
                    st.push(val);
                }
                else{
                    if(st.empty())
                        cout<<"None\n";
                    else{
                        cout<<st.top()<<'\n';
                        st.pop();
                    }
                }
            }
        }
    }
}
