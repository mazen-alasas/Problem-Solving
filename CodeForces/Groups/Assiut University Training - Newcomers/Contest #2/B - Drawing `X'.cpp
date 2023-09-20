///                بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
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
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	IOS
	// Online();
	ll n; cin>>n;
	for(ll i = 1; i <= n; i++) {
		for(ll j = 1; j <= n; j++) {
			if(i == n / 2 + 1 && j == n / 2 + 1)
				cout << "X";
			else if(i == j)
				cout << "\\";
			else if(j == n + 1 - i)
				cout << "/";
			else
				cout << "*";
		}
		cout << endl;
	}
	return 0;
}