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
	//Online();
	double x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	double mx1 = (x1 + x2) / 2;
	double my1 = (y1 + y2) / 2;
	double mx2 = (x3 + x4) / 2;
	double my2 = (y3 + y4) / 2;
	double r1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) / 2;
	double r2 = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2)) / 2;
	double line = sqrt(pow(mx1- mx2, 2) + pow(my1 - my2, 2));
	double rr = r1 + r2;
	cout << (line > rr ? "NO" : "YES");
	return 0;
}
