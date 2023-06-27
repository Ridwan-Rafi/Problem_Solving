#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string s,ans;
    cin>>s;
    int n=s.size();

    for(int i=0;i<n;i++)
    {
        if(s[i]=='_')
        {
            if(ans.empty() || ans.back()=='_'){
                    ans.push_back('^');
                    ans.push_back('_');
            }
            else ans.push_back('_');
        }
        else{
            ans.push_back('^');
        }
    }
     if(ans.empty() || ans.back()=='_' || ans.size()==1){
                    ans.push_back('^');
                    }
    cout<<ans.size()-n<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;while(t--)
    solve();
}

