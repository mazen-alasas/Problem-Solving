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
	ll a, b, c;  cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		cout << "Valid" << endl;
		double f = (a + b + c) / 2;
		double area = sqrt(f * (f - a) * (f - b) * (f - c));
		return cout << fix(6) << area, 0;
	}
	cout << "Invalid" << endl;
	return 0;
}
