///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 5, INF = 0x3f3f3f3f;
const double eps = 1e-7;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	IOS
	//Online();
	ll n, k; cin >> n >> k;
    ll x, y, ctr = 0;
    for(ll i = 0; i < n; i++) {
        int a[10]{}, flag = 1;
        cin >> x;
        while(x != 0) {
            y = x % 10;
            x = x / 10;
            a[y] = 1;
        }
        for(ll i = 0; i < k + 1; i++) {
            if(a[i] == 0) { 
                flag = 0;
                break;
            }
        }
        if(flag) {
            ctr++;
        }
    }   cout << ctr;
	return 0;
}
