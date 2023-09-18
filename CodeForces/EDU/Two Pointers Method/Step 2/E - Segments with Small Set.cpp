///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
using namespace std;
inline void Online() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

ll freq[(ll)1e5 + 5]{};

void add(ll x, ll *u) {
	freq[x]++;
	if(freq[x] == 1)
		(*u)++;
}
void remove(ll x, ll *u) {
	freq[x]--;
	if(freq[x] == 0)
		(*u)--;
}

int main() {
	IOS
	//Online();
	ll n, k; cin >> n >> k;
	ll a[n];
	for(ll i = 0; i < n; cin >> a[i++]);

	ll l = 0, r = 0, unq = 0, ans = 0;
	while(r < n) {
		add(a[r], &unq);
		while(unq > k) {
			remove(a[l], &unq);
			l++;
		}
		ans += (r - l + 1);
		r++;
	}
	cout << ans;
  return 0;
}
