#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 10;
ll par[N], dpt[N], cmpnt;
ll khojo(ll x) {
    if(par[x] == x) return x;
    return par[x] = khojo(par[x]);
}
void lagao(ll a, ll b) {
    ll A = khojo(a), B = khojo(b);
    if(A != B) {
        cmpnt--;
        if(dpt[A] > dpt[B]) {
            par[B] = A;
            dpt[A]++;
        }
        else {
            par[A] = B;
            dpt[B]++;
        }
    }
}
int main() {
    for(ll i = 0; i < N; i++) {
        par[i] = i;
        dpt[i] = 1;
    }

    ll n, m; cin >> n >> m;
    cmpnt = n;
    vector <ll> v;
    while(m--) {

        ll a, b; cin >> a >> b;
        v.push_back((cmpnt * (cmpnt - 1) / 2));
        lagao(a , b);
    }
    reverse(v.begin() , v.end());
    for(auto it : v) cout << it << endl;

return 0;
}
