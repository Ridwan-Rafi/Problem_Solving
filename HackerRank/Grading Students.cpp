#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,mark;
    cin>>t;
    while(t--)
    {
        cin>>mark;
        if((mark+1)>=40 && ((mark+1)%5==0))
        {
            cout<<mark+1<<endl;
        }
        else if((mark+2)>=40 && ((mark+2)%5==0))
        {
            cout<<mark+2<<endl;
        }
        else
        {
            cout<<mark<<endl;
        }
    }
    return 0;
}
