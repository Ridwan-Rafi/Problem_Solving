#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,num,cnt=0,f,s;
    map<int,int>m;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num);
        m[num]++;
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        f=i->first;s=i->second;

        if(f>s){
            cnt+=s;
        }
        else if(f<s){
            cnt=s-f;
        }
    }
    printf("%lld\n",cnt);
}
