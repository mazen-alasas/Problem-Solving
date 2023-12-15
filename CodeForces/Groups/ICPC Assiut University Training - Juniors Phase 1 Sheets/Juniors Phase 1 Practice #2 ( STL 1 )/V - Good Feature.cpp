///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
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
	T {
		string s; cin >> s;
		stack<ll> st;
		ll c[256]{};
		for(ll i = 0; s[i]; i++) {
			if(s[i] == '{') {
				st.push(1);
			} else if(s[i] == ',') {
				st.top()++;
			} else if(s[i] == '}') {
				c[st.size()] = max(c[st.size()], st.top());
				st.pop();
			}
		}
		for(ll i = 0; i < 256; i++) {
			if(c[i]) {
				cout << '[' << c[i] << ']';
			}
		}
		cout << endl;
	}
	return 0;
}
