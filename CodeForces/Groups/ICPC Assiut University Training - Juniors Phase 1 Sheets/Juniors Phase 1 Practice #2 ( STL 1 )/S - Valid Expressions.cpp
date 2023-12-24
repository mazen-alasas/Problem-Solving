///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 9, M = 2e5 + 7, INF = 0x3f3f3f3f;
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
		ll num = 0, oper = 0, fr[256]{};
		string s; cin >> s;
		for(ll i = 0; i < s.size(); i++) {
			fr[(ll)s[i]]++;
			isdigit(s[i]) ? num++ : oper++;
		}
		if(num == oper) {
			if(fr['-'] &&  num - fr['0'] > fr['/']) {
				cout << "Valid\n";
			} else {
				cout << "Invalid\n";
			}
		} else if(oper == num - 1) {
			if(num - fr['0'] >= fr['/']) {
				cout << "Valid\n";
			} else  {
				cout << "Invalid\n";
			}
		} else {
			cout<<"Invalid\n";
		}
	}
	return 0;
}
