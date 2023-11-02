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
	while(cin >> s) {
		string ans = "";
		stack<char> st;
		deque<char> dq;
		for(auto c : s) {
			if(c == '[') {
				st.push(c);
				for(auto h : ans) {
					dq.push_front(h);
				}
				ans = "";
				continue;
			}
			else if(c == ']') {
				st.push(c);
				for(auto h : ans) {
					dq.push_front(h);
				}
				ans = "";
				continue;
			}
			if(!st.empty() && st.top() == '[') {
				ans = c + ans;
			} else {
				dq.push_back(c);
			}
		}
		reverse(ans.begin(), ans.end());
		cout << ans;
		for(auto i : dq) {
			cout << i;
		}
		cout << endl;
	}
	return 0;
}
