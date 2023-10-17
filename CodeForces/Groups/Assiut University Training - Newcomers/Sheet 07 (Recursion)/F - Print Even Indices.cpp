///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
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
		freopen("equal.in", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

void print(ll a[],ll n) {
    if(!n) {
        cout << a[n];
        return;
    }
    if(!(n % 2))
        cout << a[n] << ' ';
    print(a, n - 1);
}

int main() {
    IOS
	//Online();
	ll n; cin >> n;
	ll a[n], x = n - 1;
	for(ll i = 0; i < n; cin >> a[i++]);
	print(a, x);
	return 0;
}
