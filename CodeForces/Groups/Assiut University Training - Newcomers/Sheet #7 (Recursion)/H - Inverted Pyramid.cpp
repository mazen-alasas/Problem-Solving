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

void printPyramid(ll n, ll t) {
    if(n == 0)
        return;
    ll s = 2 * n - 1;
    for(ll j = 1; j <= t; j++)
    	cout << ' ';
    for(ll j = 1; j <= s; j++)
    	cout << '*';
    cout << endl;
    printPyramid(n - 1, t + 1);
}

int main() {
    IOS
	//Online();
	ll n, s = 0; cin >> n;
    printPyramid(n, s);
	return 0;
}
