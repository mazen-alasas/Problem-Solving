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
	string s, c; cin >> s >> c;
    ll i = s.find('|');
    string s1 = s.substr(0, i), s2 = s.substr(i + 1);
    for(ll j = 0; j < c.size(); j++) {
        if(s1.size() <= s2.size()) {
            s1 += c[j];
        } else {
            s2 += c[j];
        }
    }
    cout << (s1.size() == s2.size() ? s1 + '|' + s2 : "Impossible");
	return 0;
}
