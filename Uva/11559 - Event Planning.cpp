#include<bits/stdc++.h>
using namespace std;
/*struct hotel{
    int price;
    int week[20];
};*/
int main()
{
    /*struct hotel ho[20];*/
    int n,b,h,w,allprice=50010,fflag=0;
    while(cin>>n>>b>>h>>w)
    {
        int price,week;
        for(int i=0; i<h; i++)
        {
            cin>>price;
            if((price*n)>b)
            {
                continue;
                //cout<<"stay home\n";
            }
            else
            {
                int flag=0;
                for(int j=0; j<w; j++)
                {
                    cin>>week;
                    if(week<n)
                        flag=1;
                }
                if(flag=0)
                {
                    if((n*price)<=allprice)
                    {
                        allprice=(n*price);
                    }
                    fflag=1;
                }

                else
                {
                    continue;
                }
            }
            /*cout<<"H="<<i<<"\n"<<"price="<<ho[i].price<<"\n"<<"bed per week=";
            for(int j=0;j<w;j++)
            cout<<" "<<ho[i].week[j];*/

        }
        if(fflag==1)
            cout<<allprice<<"\n";
        else
        {
            cout<<"stay home\n";
        }
    }
    return 0;
}
