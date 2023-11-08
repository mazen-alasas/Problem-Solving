///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 9, INF = 0x3f3f3f3f;
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
	ll n; cin >> n;
	stack<ll> st;
	while(n--) {
		ll a; cin >> a;
		if(!st.empty() && ((a & 1 && st.top() & 1) || (!(a & 1) && !(st.top() & 1)))) {
			st.pop();
		} else {
			st.push(a);
		}
	}
	cout << (st.size() <= 1 ? "YES" : "NO");
 	return 0;
}
