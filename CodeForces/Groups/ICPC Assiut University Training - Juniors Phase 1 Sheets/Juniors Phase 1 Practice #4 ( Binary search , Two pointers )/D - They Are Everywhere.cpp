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
	string s; cin >> s;
	set<char> st;
	for(auto &c : s) {
		st.insert(c);
	}
	ll mxDist = st.size();
	unordered_map<char, ll> freq;
	ll l = 0, r = 0, ans = LLONG_MAX, cur = 0;
	while(l < n) {
		while(r < n && cur < mxDist) {
			freq[s[r]]++;
			if(freq[s[r]] == 1) {
				cur++;
			} r++;
		}
		if(cur == mxDist) {
			ans = min(ans, r - l);
		}
		freq[s[l]]--;
		if(!freq[s[l]]) {
			cur--;
		}
		l++;
	}
	cout << ans;
	return 0;
}
