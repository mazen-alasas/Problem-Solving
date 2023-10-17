///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e6 + 7, INF = 0x3f3f3f3f;
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
	int i = 0, j = s.size() - 1;
	while(i <= j) {
		if(s[i] != s[j]) {
			if(s[i] == '?')
				s[i] = s[j];
			else if(s[j] == '?')
				s[j] = s[i];
			else {
				cout << -1;
				return 0;
			}
		}
		if(s[i] == s[j] && s[i] == '?')
			s[i] = s[j] = 'a';
		i++, j--;
	}
	cout << s;
	return 0;
}
