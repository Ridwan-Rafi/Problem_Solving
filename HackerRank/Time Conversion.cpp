#include<bits/stdc++.h>
using namespace std;
int main()
{
    string _12;
    char _24[9];
    int ln,j=0;


    cin>>_12;
    ln=_12.size();
    if(_12[8]=='A')
    {
        if(_12[0]=='1' && _12[1]=='2')
        {
            _12[0]='0';
            _12[1]='0';
           for(int i=0; i<ln-2; i++)
            {
                cout<<_12[i];
            }
            cout<<endl;
        }
        else
        {
            for(int i=0; i<ln-2; i++)
            {
                cout<<_12[i];
            }
            cout<<endl;
        }
    }
    else
    {
        if(_12[0]=='1' && _12[1]=='2')
        {
            for(int i=0; i<ln-2; i++)
            {
                cout<<_12[i];
            }
            cout<<endl;

        }
        else
        {
            int digi,time;
            digi=((_12[0]-48)*10)+(_12[1]-48);
            time=digi+12;

            for(int i=2; i<ln-2; i++)
            {
                _24[j]=_12[i];
                j++;
            }
            _24[j]='\0';
            cout<<time<<_24<<endl;
        }
    }

    return 0;
}
