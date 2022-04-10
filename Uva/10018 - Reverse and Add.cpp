#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    long long int n,pal,sum,nt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        while(1)
        {
            nt=n;
            pal=0;
            while(n!=0)
            {
                pal=(pal*10)+(n%10);
                n=n/10;
            }
            if(nt==pal)
                break;
            else
            {
              n=nt+pal;
            }

            cnt++;
        }
            cout<<cnt<<" "<<pal<<endl;
    }
    return 0;
}
