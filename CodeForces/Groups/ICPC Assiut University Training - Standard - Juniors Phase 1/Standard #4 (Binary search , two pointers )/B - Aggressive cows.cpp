///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 5, INF = 0x3f3f3f3f;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

ll n, c, a[N];
bool can(ll mid) {
	ll cur = 1, left = 0;
	for(ll i = 1; i < n; i++) {
		if(a[i] - a[left] >= mid) {
			left = i;
			cur++;
			if(cur == c) {
				return 1;
			}
		}
	} return 0;
}

int main() {
	IOS
	//Online();
  cin >> n >> c;
	for(ll i = 0; i < n; cin >> a[i++]);
	sort(a, a + n);
	ll l = 0, r = a[n - 1] - a[0] + 1;
	ll ans = r;
	while(r > l + 1) {
		ll mid = (l + r) / 2;
		if(can(mid)) {
			l = mid;
			ans = l;
		} else {
			r = mid;
		}
	}
	cout << ans;
	return 0;
}

