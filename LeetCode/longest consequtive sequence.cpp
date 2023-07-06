#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int longestConsecutive(vector<int>& nums)
{
    int lngst=0,n,mx=-1,ln;
    sort(nums.begin(),nums.end());
    ln=nums.size();

    n=INT_MIN;
    for(int i=0; i<ln; i++)
    {
        if(n+1==nums[i])
        {
            lngst++;
            n++;
        }
        else if(n==nums[i])continue;
        else
        {
            mx=max(mx,lngst);
            lngst=1;
            n=nums[i];
        }
    }
    mx=max(mx,lngst);
    return mx;
}

void solve()
{
    vector<int>vc={0,3,7,2,5,8,4,6,0,1};
    int l;
    l=longestConsecutive(vc);
    cout<<l<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
}

