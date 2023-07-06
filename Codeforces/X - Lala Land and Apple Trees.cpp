    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        int val,suum=0,point;
        vector<pair<int ,int>>neg,pos;

        for(int i=0; i<n; i++)
        {
            cin>>point>>val;
            if(point<0)neg.push_back({-point,val});
            else pos.push_back({point,val});
        }

        if(n==1)
        {
            if(neg.empty())cout<<(*pos.begin()).second<<'\n';
            else cout<<(*neg.begin()).second<<'\n';
            return 0;
        }

        sort(neg.begin(),neg.end());
        sort(pos.begin(),pos.end());


        if(neg.size()>pos.size())
        {
            bool f=0;
            while(!neg.empty() || !pos.empty())
            {
                if(f==0)
                {
                    if(neg.empty())break;
                    suum+=(*neg.begin()).second;
                    neg.erase(neg.begin());
                    f=1;
                }
                else
                {
                    if(pos.empty())break;
                    suum+=(*pos.begin()).second;
                    pos.erase(pos.begin());
                    f=0;
                }
            }
        }
        else
        {
            bool f=0;
            while(!neg.empty() || !pos.empty())
            {
                if(f==1)
                {
                     if(neg.empty())break;
                    suum+=(*neg.begin()).second;
                    neg.erase(neg.begin());
                    f=0;
                }
                else
                {
                     if(pos.empty())break;
                    suum+=(*pos.begin()).second;
                    pos.erase(pos.begin());
                    f=1;
                }
            }
        }
        cout<<suum<<'\n';
        return 0;
    }
