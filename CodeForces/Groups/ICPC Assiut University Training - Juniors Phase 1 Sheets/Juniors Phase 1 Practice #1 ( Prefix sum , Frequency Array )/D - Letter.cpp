///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 5, INF = 0x3f3f3f3f;
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
	string s; getline(cin, s, '\n');
	string t; getline(cin, t, '\n');
	map<char, ll> exist;
	for(auto c : s) {
		exist[c]++;
	}
	for(auto c : t) {
		if(c == ' ') {
			continue;
		}
		if(!exist[c]) {
			return cout << "NO", 0;
		}
		exist[c]--;
	} cout << "YES";
	return 0;
}