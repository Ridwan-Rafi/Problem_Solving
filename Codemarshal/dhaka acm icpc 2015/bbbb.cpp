#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    mp["JAN"]=31;
    mp["FEB"]=28;
    mp["MAR"]=31;
    mp["APR"]=30;
    mp["MAY"]=31;
    mp["JUN"]=30;
    mp["JUL"]=31;
    mp["AUG"]=31;
    mp["SEP"]=30;
    mp["OCT"]=31;
    mp["NOV"]=30;
    mp["DEC"]=31;


    mp["SUN"]=1;
    mp["MON"]=2;
    mp["TUE"]=3;
    mp["WED"]=4;
    mp["THU"]=5;
    mp["FRI"]=6;
    mp["SAT"]=7;


    int ar[36]={0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,1};

   int t;
   cin>>t;
   while(t--)
   {
       string s,s2;
       cin>>s>>s2;
       int p=mp[s];
       int q=mp[s2];
       int cnt=0;
       for(int i=q-1;p>0;i++,p--)
       {
           if(ar[i]==1)
           {
               cnt++;
           }

       }
       cout<<cnt<<endl;

   }




}
