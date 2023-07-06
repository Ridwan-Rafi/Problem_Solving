#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isSeries(int n)
{
    // Solve the equation 11 = n * (n + 1) / 2

    // Define the variables
    double a = 0.5;
    double b = 0.5;
    double c = -n;
    double ans;
    int nn;
    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    // Check if the discriminant is non-negative
    if (discriminant >= 0)
    {
        // Calculate the solutions using the quadratic formula
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        if(root1>0)ans=root1;
        else if(root2>=0)ans=root2;
    }
    else
    {
        //cout << "No real solutions exist." <<endl;
    }
    nn=ans;
    if(ans-nn<=0.000000001)return true;
    else return false;
}

ll summ(ll n)
{
    ll sum=n*(n+1);
    sum/=2;
    return sum;
}

void solve()
{
    int n,k,l,r;
    ll lsum,rsum;
    bool fnd=0;
    cin>>n>>k;

    for(int i=n; i>=0; i--)
    {
        l=i;
        r=n-i;


            lsum=summ(l-1);
            rsum=summ(r-1);
            if(lsum+rsum==k)
            {
                fnd=1;
                break;
            }

    }

    if(fnd==0)cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(int i=0; i<l; i++)cout<<1<<' ';
        for(int i=0; i<r; i++)cout<<-1<<' ';
        cout<<endl;
    }
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
}
