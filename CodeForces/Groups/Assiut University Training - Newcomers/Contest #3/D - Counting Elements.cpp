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
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}
bool isVowel(char c) {
	return c == 'a' || c == 'i' || c == 'u' || c == 'y' || c == 'e' || c == 'o';
}

int main() {
	IOS
	//Online();
	ll n; cin >> n;
	ll a[n], ctr = 0;
	bool freq[1003]{};
	for(ll i = 0; i < n; i++) {
		cin >> a[i];
		freq[a[i]] = true;
	}
	for(ll i = 0; i < n; i++)
		ctr += (freq[a[i] + 1]);
	cout << ctr;

  return 0;
}
