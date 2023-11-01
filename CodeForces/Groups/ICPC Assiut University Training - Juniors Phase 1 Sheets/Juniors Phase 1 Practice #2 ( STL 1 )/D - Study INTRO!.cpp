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
	stack<string> st;
	bool begin = 1;
	ll ctr = 0;
	T {
		string s; cin >> s;
		if(s != "Header" && begin) {
			return !(cout << "WA\n");
		}
		ctr += (s == "Header");
		begin = 0;
		if(ctr != 1) {
			return !(cout << "WA\n");
		}
		if(st.empty()) {
			st.push(s);
		} else {
			if(s == "End" + st.top()) {
				st.pop();
			} else {
				st.push(s);
			}
		}
	}
	cout << (st.empty() ? "ACC\n" : "WA\n");
	return 0;
}
