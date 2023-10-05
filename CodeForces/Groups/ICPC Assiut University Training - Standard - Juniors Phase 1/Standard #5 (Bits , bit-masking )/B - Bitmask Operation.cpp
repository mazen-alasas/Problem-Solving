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

int main() {
	IOS
	//Online();
	int q, n, y, bit;
	cin >> q >> n;
	while(q--) {
        cin >> y >> bit;
        if(y == 1) {
            int ans = n & (1 << bit);
            cout << (ans == (1 << bit));
        } else if(y == 2) {
            n |= (1 << bit);
            cout << n;
        } else if(y == 3) {
            n &= (~(1 << bit));
            cout << n;
        } else if(y == 4) {
            n ^= (1 << bit);
            cout << n;
        }
        cout << endl;
	}
	return 0;
}
