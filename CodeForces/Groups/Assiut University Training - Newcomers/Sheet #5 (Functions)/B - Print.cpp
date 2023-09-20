/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void print(int n) {
    for(int i = 1; i <= n; i++) {
        if(i == n)
            cout << i;
        else
            cout << i << ' ';
    }
}
int main() {
	IOS;
	int x; cin >> x;
    print(x);
	return 0;
}