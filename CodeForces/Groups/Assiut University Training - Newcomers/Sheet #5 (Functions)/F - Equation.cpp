/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll equation (ll n1, ll n2) {
    ll s = 0;
    for(ll i = 2; i <= n2; i += 2)
        s += pow(n1, i);
    return s;
}
int main() {
	IOS;
	ll a, b; 
    cin >> a >> b;
    cout << equation(a, b);
	return 0;
}