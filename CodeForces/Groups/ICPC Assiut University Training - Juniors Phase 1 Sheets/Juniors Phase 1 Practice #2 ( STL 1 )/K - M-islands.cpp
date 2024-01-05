///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 9, M = 2e5 + 7, INF = 0x3f3f3f3f;
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
	ll n, m; cin >> n >> m;
	vector<pair<ll, ll>> v(n), mrg;
	for(ll i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end());
	for(ll i = 0; i < n; i++) {
		ll fst = v[i].first, snd = v[i].second;
		while(i < n && v[i].first <= snd) {
            snd = max(v[i].second, snd);
            i++;
		}
		i--;
		mrg.push_back({fst, snd});
	}
	T {
		ll a, b; cin >> a >> b;
		if(a > b) {
			swap(a, b);
		}
		bool can = 0;
		ll l = 0, r = mrg.size() - 1;
		while(l <= r) {
			ll mid = l + (r - l) / 2;
			if(mrg[mid].first <= a && mrg[mid].second >= b) {
				can = 1;
				break;
			} else if(mrg[mid].first < a) {
				l = mid + 1;
			} else {
				r = mid - 1;
			}
		}
		cout << (can ? "YES" : "NO") << endl;
	}
    return 0;
}
