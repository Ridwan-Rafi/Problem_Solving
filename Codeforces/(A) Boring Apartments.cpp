#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,num,cnt=0;
    cin>>t;
    while(t--)
    {
        int bor=0,n=1,cycle=0,afcle;
        cin>>num;
        while(bor!=num)
        {
            bor=0;
            afcle=0;
            for(int i=0; i<4; i++)
            {

                bor=(bor*10)+n;
            //    cout<<bor<<" ";
                if(i==3)
                    cycle++;

                afcle++;

                if(bor==num)break;
            }

            n++;
          //  cout<<endl;
        }
        //cout<<"cycle="<<cycle<<" after="<<afcle<<endl;
        if(afcle==4)
        {
            cout<<cycle*10<<endl;
        }
        else
        {
            if(afcle==1)
                cout<<(cycle*10)+1<<endl;
            else if(afcle==2)
                cout<<(cycle*10)+3<<endl;
            else if(afcle==3)
                cout<<(cycle*10)+6<<endl;
        }
    }
    return 0;
}
