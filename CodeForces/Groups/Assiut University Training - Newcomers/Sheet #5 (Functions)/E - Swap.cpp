/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void swapping (int* x, int* y) {
    int s;
    s = *x;
    *x = *y;
    *y = s;
}
int main() {
	IOS;
	int x, y;
    cin >> x >> y;
    swapping(&x, &y);
    cout << x << ' ' << y;
	return 0;
}