#include<bits/stdc++.h>
using namespace std;

struct pp{
    int burst,priority,no;
    int wt,ct,tat;
};

bool cmp(pp left,pp right)
{
    if(left.priority<right.priority)
        return true;
    else return false;
}
int main()
{
    int n,b,p,wait=0,tt=0,total_wait=0,total_tat=0;
    pp process[10000];

    cout<<"How many process?\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Burst time of P"<<i<<" =";
        cin>>b;
         cout<<"Priority of P"<<i<<" =";
        cin>>p;

    process[i].no=i;
    process[i].burst=b;
    process[i].priority=p;
    }

    sort(process+1,process+n+1,cmp);


    for(int i=1;i<=n;i++)
    {
        process[i].wt=wait;
        total_wait+=wait;
        process[i].tat=wait+process[i].burst;
        total_tat+=process[i].tat;
        wait+=process[i].burst;
        process[i].ct=wait;
    }

    for(int i=1;i<=n;i++)
    {
        cout<<"Process No:"<<process[i].no<<endl;
        cout<<"Burst = "<<process[i].burst<<endl;
        cout<<"Priority = "<<process[i].priority<<endl;
        cout<<"Waiting time = "<<process[i].wt<<endl;
        cout<<"Completion time = "<<process[i].ct<<endl;
        cout<<"Turn around time = "<<process[i].tat<<endl<<endl;
    }
cout<<"Average waiting time = "<<(float)total_wait/(float)n<<endl;
cout<<"Average Turn around time = "<<(float)total_tat/(float)n<<endl;
}
