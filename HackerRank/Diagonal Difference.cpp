#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
   int a[n+1][n+1];
   int diag1=0,diag2=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
         cin>>a[i][j];
    }
}
t=n-1;
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
       {
           if(i==j)
           {
               diag1=diag1+a[i][j];
           }
       }
       for(int j=0;j<n;j++)
       {
           if(j==t)
           {
            diag2=diag2+a[i][j];
               t--;
           }
       }
   }
   if(diag1>diag2)cout<<diag1-diag2<<endl;
   else
    cout<<diag2-diag1<<endl;
}

