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

int i, n;
void count(string s) {
	if(i == (int)s.size()) {
		cout << n;
		return;
	}
	n += (s[i] == 'a' || s[i] == 'A' ||
		  s[i] == 'e' || s[i] == 'E' ||
		  s[i] == 'i' || s[i] == 'I' || 
		  s[i] == 'o' || s[i] == 'O' || 
		  s[i] == 'u' || s[i] == 'U');
	i++;
	count(s);
}

int main() {
    IOS
	//Online();
	string s; getline(cin, s);
	count(s);
	return 0;
}
