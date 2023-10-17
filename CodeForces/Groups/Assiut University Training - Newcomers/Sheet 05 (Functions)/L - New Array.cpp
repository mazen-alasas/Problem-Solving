/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void newArray() {
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; cin >> a[i++]);
    for(int i = 0; i < n; cin >> b[i++]);
    for(int i = 0; i < n; i++)
        cout << b[i] << ' ';
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
}
int main() {
	IOS;
	newArray();
	return 0;
}