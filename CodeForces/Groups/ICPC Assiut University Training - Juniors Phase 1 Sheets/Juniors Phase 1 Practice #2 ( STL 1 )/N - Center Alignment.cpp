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
	string s;
	vector<string> v;
	ll mx = 0;
	while(getline(cin, s)) {
		v.push_back(s);
		mx = max(mx, (ll)s.size());
	}
	cout << string(mx + 2, '*') << endl;
	bool odd = 0;
	for(ll i = 0; i < v.size(); i++) {
		cout << '*';
		ll t = mx - v[i].size();
		if(t & 1) {
			odd = !odd;
		}
		for(ll i = 0; i < (odd ? t / 2 : (t + 1) / 2); i++) cout << ' ';
		cout << v[i];
		for(ll i = 0; i < (odd ? (t + 1) / 2 : t / 2); i++) cout << ' ';
		cout << "*\n";
	}
	cout << string(mx + 2, '*') << endl;
	return 0;
}
