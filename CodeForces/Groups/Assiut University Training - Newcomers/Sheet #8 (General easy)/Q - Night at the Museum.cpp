///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 5, INF = 0x3f3f3f3f;
const double eps = 1e-7;
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
	ll st = 0, mov = 0, ind, ctr = 0;
    string s; cin >> s;
    for(ll i = 0; s[i] != 0; i++) {
        ind = s[i] - 97;
        mov = abs(ind - st);
        if(abs(ind - st) < 13) {
            ctr += mov;
        } else {
            ctr += 26 - mov;
        }   st = ind;
    }
    cout << ctr;
	return 0;
}
