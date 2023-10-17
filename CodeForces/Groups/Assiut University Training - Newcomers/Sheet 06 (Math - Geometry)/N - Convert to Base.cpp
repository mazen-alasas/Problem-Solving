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

ll toDec(string s, ll b) {
	ll ans = 0, l = 0, c = 0;
	for(ll i = s.size() - 1; i >= 0; i--) {
		if(isalpha(s[i]))
			c = 10 + s[i] - 'A';
		else
			c = s[i] - '0';
		ans += c * pow(b, l);
		l++;
	}
	return ans;
}

string toBase(ll n, ll b) {
	string ans;
	while(n > 0) {
		if(n % b > 9)
			ans += (char)(n % b + 'A' - 10);
		else
			ans += (char)(n % b + '0');
		n /= b;
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

int main() {
	IOS
	//Online();
	ll t, n, b; cin >> t;
	string s;
	if(t == 1) {
		cin >> s >> b;
		cout << toDec(s, b);
	} else {
		cin >> n >> b;
		cout << toBase(n, b);
	}
	return 0;
}

