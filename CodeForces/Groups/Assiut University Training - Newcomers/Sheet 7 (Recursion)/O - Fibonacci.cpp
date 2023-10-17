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

ll fib(ll n) {
	if(n == 1)
		return 0;
	else if(n == 2)
		return 1;
	return fib(n - 1) + fib(n - 2);
}
// 1 2 3 4 5 6 7 8
// 0 1 1 2 3 5 8 13
int main() {
    IOS
	//Online();
	ll a; cin >>a;
	cout << fib(a);
	return 0;
}
