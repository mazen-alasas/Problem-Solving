///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 9, M = 2e5 + 7, INF = 0x3f3f3f3f;
const double eps = 1e-9;
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
	T {
		ll n; cin >> n;
		ll a[n + 2]{}, mx = 0;
		for(ll i = 0; i < n; cin >> a[i++]);
		stack<ll> st1, st2;
		for(ll i = 0; i <= n; i++) {
			ll mn = INT_MAX;
			while(!st2.empty() && st2.top() > a[i]) {
				mn = st1.top();
				mx = max(mx, st2.top() * (i - st1.top()));
				st1.pop();
				st2.pop();
			}
			if(st2.empty() || st2.top() <= a[i]) {
				st2.push(a[i]);
				st1.push(min(i, mn));
			}
		}
		cout << mx << endl;
	}
	return 0;
}
