///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7, N = 2e5 + 5, INF = 0x3f3f3f3f;
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
    ll n, s = 0, d = 0; cin >> n;
    ll a[n];
    for(ll i = 0; i < n; cin >> a[i++]);                /// 4 2 1 10
    ll i = 0, j = n - 1;
    for(ll c = 0; i <= j; c++) {
        if(c % 2 == 0) {
            if(a[i] > a[j]) {
                s += a[i++];
            } else {
                s += a[j--];
            }
        } else {
            if(a[i] > a[j]) {
                d += a[i++];
            } else {
                d += a[j--];
            }
        }
    }
    cout << s << ' ' << d;
    
	return 0;
}
