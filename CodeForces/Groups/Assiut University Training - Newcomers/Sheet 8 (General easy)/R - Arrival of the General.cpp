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
	ll n; cin>>n;
    ll a[n], ctr = 0, k, m;
    for(ll i = 0; i < n; cin >> a[i++]);
    ll x = *max_element(a, a + n);
    ll y = *min_element(a, a + n);
    for(ll i = 0; i < n; i++) {
        if(a[i] == x) {
            k = i;
            break;
        }
    }
    for(ll i = k; i >= 1; i--) {
        swap(a[i], a[i - 1]);
        ctr++;
    }
    for(ll i = 0; i < n; i++) {
        if(a[i] == y) {
            m = i;
        }
    }
    for(ll i = m; i < n - 1; i++) {
        swap(a[i], a[i + 1]);
        ctr++;
    }
    cout << ctr;
	return 0;
}
