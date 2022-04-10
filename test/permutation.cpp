#include<bits/stdc++.h>
using namespace std;
void per(string s,int l,int r)
{
    if(l==r)
    cout<<s<<endl;
    else{
    for(int i=l;i<r;i++)
    {
        swap(s[l],s[i]);
        per(s,l+1,r);
        swap(s[l],s[i]);
    }
    }
    return ;
}
int main()
{
    string s="abc";
    int ln=s.size();
    per(s,0,ln);
}
