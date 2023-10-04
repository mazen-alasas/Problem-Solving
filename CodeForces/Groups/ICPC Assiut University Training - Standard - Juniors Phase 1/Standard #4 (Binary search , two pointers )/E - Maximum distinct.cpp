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
	string s; cin >> s;
	unordered_map<char, ll> mp;
	for(ll x = 0; x < k; x++) {
		mp[s[x]]++;
	}
	ll i = 0, j = k, ans = mp.size();
	while(j < n) {
		mp[s[j]]++;
		while(j - i + 1 > k) {
			mp[s[i]]--;
			if(mp[s[i]] == 0) {
				mp.erase(s[i]);
			} i++;
		}
		if(j - i + 1 == k) {
			ans = max(ans, (ll)mp.size());
		} j++;
	}
	cout << ans;
	return 0;
}
