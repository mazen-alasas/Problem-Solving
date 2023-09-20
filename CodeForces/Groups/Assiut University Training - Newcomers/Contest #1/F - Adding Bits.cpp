/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
	ll a, b; cin >> a >> b;
	//a ^= b;
	cout << (a ^ b);
	return 0;
}