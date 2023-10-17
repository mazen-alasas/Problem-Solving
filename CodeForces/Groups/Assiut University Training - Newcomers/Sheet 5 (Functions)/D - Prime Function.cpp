/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
bool isPrime(int n) {
    if(n <= 1 || (n % 2 == 0 && n != 2))
        return 0;
    for(int i = 3; i * i <= n; i += 2)
        if(n % i == 0 && n != 2)
            return 0;
    return 1;
}
int main() {
	IOS;
	int x; 
    cin >> x;
    while(x--) {
        int s; 
        cin >> s;
        cout << (isPrime(s) ? "YES\n" : "NO\n");
    }
	return 0;
}