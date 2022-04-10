#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,row,col;
    cin>>t;
    while(t--)
    {
        int r=0,c=0;
        cin>>row>>col;
        while(1)
        {
            if(row%3==0)
            {
                r=row/3;
                break;
            }
            else{
             row--;
            }
        }
        while(1)
        {
            if(col%3==0)
            {
                c=col/3;
                break;
            }
            else{
             col--;
            }
        }
        cout<<c*r<<endl;
    }
    return 0;
}
