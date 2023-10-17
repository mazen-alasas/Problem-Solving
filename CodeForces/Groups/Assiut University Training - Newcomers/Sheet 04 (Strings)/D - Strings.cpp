/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
	IOS;
	string a, b; cin >> a >> b;
    cout << a.size() << ' ' << b.size() << endl;
    cout << a << b << endl;
    swap(a[0], b[0]);
    cout << a << ' ' << b;
	return 0;
}