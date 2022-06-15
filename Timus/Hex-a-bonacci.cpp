#include<bits/stdc++.h>
using namespace std;

long long int a, b, c, d, e, f;
long long int ar[11111];

void zer()
{
    for(int i=0;i<10011;i++)ar[i]=-1;
}

long long int fn(int n) {
    if (n == 0) return a;
    else if (n == 1) return b;
    else if (n == 2) return c;
    else if (n == 3) return d;
    else if (n == 4) return e;
    else if (n == 5) return f;
    else if(ar[n]>-1) return ar[n]%10000007;

    ar[n]= ((fn(n-1)%10000007) + (fn(n-2)%10000007) + (fn(n-3)%10000007) + (fn(n-4)%10000007) + (fn(n-5)%10000007) + (fn(n-6)%10000007))%10000007;

    return ar[n]%10000007;
}
int main() {
    int n, cases;

    zer();

    scanf("%d",&cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %lld\n", caseno, fn(n) % 10000007);
    }
    return 0;
}
