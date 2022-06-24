#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,burst[10000],wait=0,Tat[10000],Total_Wait=0,Total_tat=0;
    cout<<"How many process?\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter burst time of P"<<i<<" =";
        cin>>burst[i];
    }

    for(int i=1;i<=n;i++)
    {
         cout<<"Waiting time of P"<<i<<" ="<<wait<<endl;
         Total_Wait=Total_Wait+wait;
         Tat[i]=wait+burst[i];
         Total_tat=Total_tat+Tat[i];
         wait=wait+burst[i];
    }

    for(int i=1;i<=n;i++)
    {
        cout<<"Turn Around Time of P"<<i<<" ="<<Tat[i]<<endl;
    }

    for(int i=1;i<=n;i++)
    {
        cout<<"Completion Time of P"<<i<<" ="<<Tat[i]<<endl;
    }

    cout<<"Average waiting time = "<<(float)Total_Wait/(float)n<<endl;
    cout<<"Average Turn around time = "<<(float)Total_tat/(float)n<<endl;
}
