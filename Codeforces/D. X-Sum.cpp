#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a[222][222],mx,sm;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        }
       /* for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cout<<a[i][j]<<' ';
                cout<<endl;
        }*/

        mx=-1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    sm=0;
                    // left up corner
                    for(int x=i,y=j;(x>=0 && y>=0);x--,y--)
                    {
                        sm=sm+a[x][y];
                        //printf("left up sm=%d a=%d x=%d y=%d\n",sm,a[x][y],x,y);
                    }
                    //right up
                    for(int x=i,y=j;(x>=0 && y<m);x--,y++)
                    {
                        sm=sm+a[x][y];
                       // printf("right up sm=%d a=%d x=%d y=%d\n",sm,a[x][y],x,y);
                    }
                    sm=sm-a[i][j];
                    //left down
                    for(int x=i,y=j;(x<n && y>=0);x++,y--)
                    {
                        sm=sm+a[x][y];
                       // printf("left down sm=%d a=%d x=%d y=%d\n",sm,a[x][y],x,y);
                    }
                    sm=sm-a[i][j];
                    //right down
                    for(int x=i,y=j;(x<n && y<m);x++,y++)
                    {
                        sm=sm+a[x][y];
                        //printf("right down sm=%d a=%d x=%d y=%d\n",sm,a[x][y],x,y);
                    }
                    sm=sm-a[i][j];

                    mx=max(mx,sm);

                }
        }
        cout<<mx<<endl;

    }
    return 0;
}
