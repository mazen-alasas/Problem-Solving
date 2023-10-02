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
	int n, q, x; cin >> n >> q;
	vector<int> v(n);
	string s;
	for(ll i = 0; i < n; cin >> v[i++]);
	sort(v.begin(), v.end());
	while(q--) {
		cin >> s >> x;
		if(s == "binary_search") {
			if(binary_search(v.begin(), v.end(), x))
				cout << "found";
			else
				cout << "not found";
		}
		else if(s == "lower_bound") {
			auto ans = lower_bound(v.begin(), v.end(), x);
			cout << (ans == v.end() ? -1 : *ans);
		}
		else {
			auto ans = upper_bound(v.begin(), v.end(), x);
			cout << (ans == v.end() ? -1 : *ans);
		}
		cout << endl;
	}
	return 0;
}
