#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

    ll n; cin >> n;
    ll arr[n + 10], cnt = 0, mn = INT_MAX;
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
        mn = min(mn , abs(arr[i]));
        if(arr[i] < 0) {
            cnt++;
        }
    }
    ll sum = 0;
    for(ll i = 0; i < n; i++) {
        sum += abs(arr[i]);
    }
    if(cnt % 2 == 1) {
        cout << sum - mn - mn << endl;
    }
    else cout << sum << endl;
return 0;
}
