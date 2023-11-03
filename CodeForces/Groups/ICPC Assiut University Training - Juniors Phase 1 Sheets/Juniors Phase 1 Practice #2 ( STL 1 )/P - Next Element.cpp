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
	ll a[n], mins[n], x;
	stack<ll> st;
	for(ll j = 0; j < n; j++) {
		cin >> a[j];
		while(!st.empty() && a[j] > a[st.top()]) {
			mins[st.top()] = j + 1;
			st.pop();
		}
		st.push(j);
	}
	while(!st.empty()) {
		mins[st.top()] = -1;
		st.pop();
	}
	T {
		cin >> x;
		cout << mins[x - 1] << '\n';
	}
	return 0;
}
