///                بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.in", "r", stdin);
		freopen("output.out", "w", stdout);
	#endif
}

int main() {
	IOS
	//Online();
	string s; cin >> s;
	ll i = 0, j = s.size() - 1;
	set<char> t(s.begin(), s.end());
	if(t.size() == 1)
		return cout << 0, 0;
	while(i < j) {
		if(s[i] != s[j])
			return cout << s.size(), 0;
		i++, j--;
	}
	cout << s.size() - 1;
	return 0;
}