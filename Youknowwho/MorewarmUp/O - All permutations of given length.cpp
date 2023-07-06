#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n,ln=0;
    cin>>n;
    string s;
    char i='1';
    for( ;ln<n;ln++,i++)
        s.push_back(i);

    do{
        cout<<s<<'\n';
    }while(next_permutation(s.begin(),s.end()));

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //cin>>t;while(t--)
    solve();
}

