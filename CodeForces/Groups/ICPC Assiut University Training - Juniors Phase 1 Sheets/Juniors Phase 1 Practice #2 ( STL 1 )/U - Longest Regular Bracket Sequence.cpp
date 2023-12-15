///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 110, M = 1e5 + 6, INF = 0x3f3f3f3f;
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
	string s; cin >> s;
	ll ans = 0, i = 0, ctr = 0;
	stack<pair<char, ll>> st;
	ll a[(ll)s.size() + 7]{};
	while(s[i]) {
		if(!st.empty() && ((st.top().first == '(' && s[i] == ')') || (st.top().first == '[' && s[i] == ']') || (st.top().first == '{' && s[i] == '}') || (st.top().first == '<' && s[i] == '>'))) {
				a[i] = i - st.top().second + 1;
				st.pop();
		} else {
			st.push({s[i], i});
		}
		i++;
	}
	for(i = 0; i ^ s.size(); i++) {
		if(a[i] && i - a[i] >= 0 && a[i - a[i]] > 0) {
			a[i] += a[i - a[i]];
		}
	}
	for(i = 0; i ^ s.size(); i++) {
		if(ans < a[i]) {
			ans = a[i];
			ctr = 1;
		} else if(ans == a[i]){
			ctr++;
		}
	}
	if(ans) {
		cout << ans << ' ' << ctr;
	} else {
		cout << 0 << ' ' << 1;
	}
	return 0;
}
