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

ll gcd(ll a, ll b){
    ll t;
    while(b != 0) {
        t = a;
        a = b;
        b = t % a;
    }
    return a;
}

int main() {
	IOS
	// Online();
    ll n, m;  cin >> n >> m;
    cout << gcd(min(n, m) , max(n, m)) << ' ';
    cout << (min(n, m) / gcd(min(n,m) , max(n,m))) * max(n, m);
}
