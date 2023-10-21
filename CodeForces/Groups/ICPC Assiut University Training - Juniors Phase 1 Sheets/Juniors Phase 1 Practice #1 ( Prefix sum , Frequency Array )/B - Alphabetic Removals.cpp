///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7, N = 2e5 + 5, INF = 0x3f3f3f3f;
using namespace std;
void Online() {
    #ifdef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif
}

int main() {
	IOS
	//Online();
	ll n, k; cin >> n >> k;
	bool vis[n]{};
	string s; cin >> s;
	for(ll i = 0; i < 26; i++) {
		for(ll j = 0; j < n; j++) {
			if(k && s[j] == char(i + 'a')) {
				k--;
				vis[j] = 1;
			}
		}
	}
	for(ll i = 0; i < n; i++) {
		if(!vis[i]) {
			cout << s[i];
		}
	}
	return 0;
}