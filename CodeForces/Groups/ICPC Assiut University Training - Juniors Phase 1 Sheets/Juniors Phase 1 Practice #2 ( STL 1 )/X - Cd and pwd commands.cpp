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
	vector<string> v;
	while(n--) {
		string s; cin >> s;
		if(s == "pwd") {
			cout << '/';
			for(auto it : v) {
				cout << it << '/';
			}
			cout << endl;
		} else {
			string t; cin >> t;
			string sp = "";
			t.push_back('/');
			for(auto it : t) {
				sp += it;
				if(it == '/') {
					if(sp == "../") {
						v.pop_back();
					} else if(sp == "/") {
						v.clear();
					} else {
						sp.pop_back();
						v.push_back(sp);
					}
					sp = "";
				}
			}
		}
	}
	return 0;
}
