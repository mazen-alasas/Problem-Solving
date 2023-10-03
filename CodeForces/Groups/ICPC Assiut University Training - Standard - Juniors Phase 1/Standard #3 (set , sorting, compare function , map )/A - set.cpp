///                بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
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
	ll n, x; cin >> n;
	set<ll> st; string s;
	while(n--) {
		cin >> s >> x;
		if(s == "insert")
			st.insert(x);
		else if(s == "find")
			cout << (st.find(x) != st.end() ? "found\n" : "not found\n");
		else if(s == "lower_bound") {
			auto h = st.lower_bound(x);
			cout << (h == st.end() ? -1 : *h) << endl;
		}
		else {
			auto h = st.upper_bound(x);
			cout << (h == st.end() ? -1 : *h) << endl;
		}
	}
	return 0;
}
