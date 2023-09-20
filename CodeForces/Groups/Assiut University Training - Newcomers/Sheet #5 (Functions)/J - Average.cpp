/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void average() {
    int n; cin >> n; 
    double t = n, a, x;
    while(n--) {
        cin >> a;
        x += a;
    }
    cout << fix(6) << x / t;
}
int main() {
	IOS;
	average();
	return 0;
}