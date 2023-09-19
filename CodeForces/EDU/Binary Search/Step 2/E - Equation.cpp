///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7, N = 2e5 + 5, INF = 0x3f3f3f3f;
using namespace std;
void Online() {
    #ifdef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif
}

double equ(double m) {
	return m * m + sqrt(m);
}

int main() {
	IOS
	//Online();
	double c; cin >> c;
	double l = 0, r = 1e6;
	ll i = 50;
	while(i--) {
		double mid = (r + l) / 2;
		double ans = equ(mid);
		if(ans > c) {
			r = mid;
		} else {
			l = mid;
		}
	}
	cout << fix(7) << r;
	return 0;
}
