#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,qv,low,mid,high,key;
    cin>>n;
    int h[n+5];
    for(int i=0; i<n; i++)
        cin>>h[i];
    cin>>qv;
    //int q[qv+5];
    for(int i=0; i<qv; i++)
    {
        cin>>key; //query input
        if(key>h[n-1])
        {
            cout<<h[n-1]<<" X"<<endl;
        }
        else
        {
            low=0;
            high=n-1;

            int flag=0;

            while(low<=high)
            {
                mid=(low+high)/2;
                //  cout<<"Aici ami while loop e"<<endl;
                if(h[mid]>key)
                {
                    high=mid-1;
                }
                else if(h[mid]<key)
                {
                    low=mid+1;
                }
                else if(h[mid]==key)
                {
                    flag=1;
                    break;
                }
             //  cout<<"low="<<low<<" high="<<high<<" mid="<<mid<<endl;
            }
           // cout<<"While loop theke ber hoisi key="<<key<<"high="<<high<<" low="<<low<<" mid="<<mid<<" flag="<<flag<<endl;
            if(flag==1)
            {
                if(low==0 && high==0 && mid==0)
                {
                    cout<<"X";
                }
                else
                {
                    int flag1=0;
                    for(int i=mid-1; i>=0; i--)
                    {

                        if(h[i]<key)
                        {
                            flag1=1;
                            cout<<h[i];
                            break;
                        }
                    }
                    if(flag1==0)
                        cout<<"X";
                }
                if(low==n-1 && high==n-1 && mid==n-1)
                {
                    cout<<" X"<<endl;
                }
                else
                {
                    int flag1=0;
                    for(int i=mid+1; i<n; i++)
                    {
                        if(h[i]>key)
                        {
                            cout<<" "<<h[i]<<endl;
                            flag1=1;
                            break;
                        }
                    }
                    if(flag1==0)
                        cout<<" X"<<endl;
                }
            }
            else
            {
                cout<<h[high]<<" "<<h[low]<<endl;
            }
        }

    }

    return 0;
}
