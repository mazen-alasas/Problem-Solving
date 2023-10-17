///                بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
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

int main() {
	IOS
	// Online();
	ll n; cin>>n;
    ll a[n], numOfRooms = 0;
    for(ll i = 0; i < n; i++) {
        ll p, q; cin >> p >> q;
        a[i] = q - p;
    }
    for(ll i = 0; i < n; i++) {
        numOfRooms += (a[i] > 1);
    }
    cout << numOfRooms;
	return 0;
}