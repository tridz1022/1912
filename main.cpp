#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using ll = long long;
using namespace chrono;
int main() {
    
    
    int n; cin >> n;
    

    int ans = 0;
    
    for (int k = 1; k * k <= n * n; k++) {
        int sq = k * k;
        for (int i = 1; i * i <= sq; i++) {
            if (sq % i == 0) {
                int j = sq / i;
                if (i <= n && j <= n) {
                    ans += (i == j ? 1 : 2);
                }
            }
        }
    }
    
    cout << ans;
    return 0;
}
