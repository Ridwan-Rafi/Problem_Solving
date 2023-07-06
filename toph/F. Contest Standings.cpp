#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,string>mp;
    int val;
    string name;
    while(n--){
    cin>>name>>val;
    mp[val]=name;
    }

    int i=0;
cout<<"Selise Coding Challenge 2023 Winners\n";
    for(auto in:mp)
    {
    if(i==0){cout<<"Winner: "<<in.second<<" => "<<in.first<<'\n';i++;}
    else if(i==1){cout<<"1st Runner Up: "<<in.second<<" => "<<in.first<<'\n';i++;}
    else if(i==2){cout<<"2nd Runner Up: "<<in.second<<" => "<<in.first<<'\n';i++;}
    else break;
    }
}
