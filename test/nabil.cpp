#include<iostream>
using namespace std;

void rev(int ar[],int ln,int it)
{
    int f,cnt=0;
    while(ar[it-1]!=it)
    {
        f=ar[0];
        for(int i=0;i<ln-1;i++)
        {
            ar[i]=ar[i+1];
        }

        ar[ln-1]=f;
        for(int i=0;i<ln;i++)
        {
            cout<<ar[i]<<' ';
        }
        cout<<endl;
        cnt++;
    }

    cout<<cnt<<endl;
}

int main()
{

    int ar[]={3,4,5,6,1,2};
    rev(ar,6,6);
}
