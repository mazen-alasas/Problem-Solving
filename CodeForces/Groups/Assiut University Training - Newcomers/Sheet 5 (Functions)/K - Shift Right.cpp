/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void shift() {
    int n, x, temp; 
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; cin >> a[i++]);
    while(x--) {
        temp = a[n - 1];
        for(int i = n - 1; i >= 0; i--)
            a[i] = a[i - 1];
        a[0] = temp;
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
}
int main() {
	IOS;
	shift();
	return 0;
}