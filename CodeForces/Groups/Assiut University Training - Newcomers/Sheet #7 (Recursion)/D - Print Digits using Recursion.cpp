///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("equal.in", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

ll i;
void print(string s) {
	if(i == s.size()) {
		cout << endl;
		return;
	}
	cout << s[i++] << ' ';
	print(s);
}

int main() {
    IOS
	//Online();
	T {
		ll n;
		cin >> n;
		i = 0;
		string s = to_string(n);
		print(s);
	}
	return 0;
}
