///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 9, INF = 0x3f3f3f3f;
const double eps = 1e-9;
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
	T {
		ll n; cin >> n;
		vector<ll> v(n);
		for(ll i = 0; i < n; v[i++] = i + 1);
		deque<ll>d;
		while(!v.empty()) {
			d.push_front(v.back());
			v.pop_back();
			if(v.size() == 0) {
				break;
			}
			d.push_front(d.back());
			d.pop_back();
		}
		for(ll i = 0; i < n; i++) {
			if(i == n - 1) {
				cout << d[i];
			} else {
				cout << d[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
