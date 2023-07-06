#include <bits/stdc++.h>
using namespace std;

int main() {
    int tst; cin >> tst;
    for(int t = 1; t <= tst; t++) {
        int n; cin >> n;
        long long a[n + 10], cnt = 0, sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] > 0) cnt++;
            sum += abs(a[i]);

        }
        cout << "Case " << t << ": ";
        if(cnt == 0) cout << "inf" << endl;
        else cout << sum << "/" << cnt << endl;
    }
}
