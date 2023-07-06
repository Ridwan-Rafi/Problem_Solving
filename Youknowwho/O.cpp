#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ln;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        ln=s.size();
        stack<char>st;
        bool f=0;
        for(int i=0; i<ln; i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i] == '[')
                st.push(s[i]);
            else if(!st.empty() && st.top() == '(' && s[i] == ')')
                st.pop();
            else if(!st.empty() && st.top() == '{' && s[i] == '}')
                st.pop();
            else if(!st.empty() && st.top() == '[' && s[i] == ']')
                st.pop();
            else
            {
                f=1;
                break;
            }
        }

        (st.empty() && f==0) ? cout<<"YES\n" : cout<<"NO\n";
    }
}
