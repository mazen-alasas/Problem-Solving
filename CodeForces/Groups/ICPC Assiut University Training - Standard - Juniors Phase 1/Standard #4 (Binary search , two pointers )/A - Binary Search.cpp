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

int main() {
	IOS
	//Online();
	ll n, q; cin >> n >> q;
	vector<pair<ll, ll>> vp(n);
	for(auto &v : vp)
		cin >> v.first >> v.second;
	pair<ll, ll> p;
	while(q--) {
		string s;
		cin >> s >> p.first >> p.second;
		if(s == "lower") {
			auto it = lower_bound(vp.begin(), vp.end(), p);
			cout << it - vp.begin() - 1;
            /*  or
            ll l = 0, r = n - 1, cur = -1;
			while(l <= r) {
				ll mid = (l + r) / 2;
				if(vp[mid] < p) {
					cur = mid;
					l = mid + 1;
				} else {
					r = mid - 1;
				}
			}
			cout << cur;
            */
		} else if(s == "upper") {
			auto it = upper_bound(vp.begin(), vp.end(), p);
			cout << (it == vp.end() ? -1 : it - vp.begin());
            /*  or
            ll l = 0, r = n - 1, cur = -1;
			while(l <= r) {
				ll mid = (l + r) / 2;
				if(vp[mid] > p) {
					cur = mid;
					r = mid - 1;
				} else {
					l = mid + 1;
				}
			}
			cout << cur;
            */
		} else
			cout << (find(vp.begin(), vp.end(), p) != vp.end() ? "found" : "not found");
		cout << '\n';
	}
	return 0;
}

///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
const int mod = 1e9 + 7;
using namespace std;
void Online() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	/*
	#ifdef ONLINE_JUDGE
		freopen("equal.in", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	*/
}

int main() {
	Online();
	ll n, q; cin >> n >> q;
	vector<pair<ll, ll>> vp(n);
	for(auto &v : vp)
		cin >> v.first >> v.second;
	pair<ll, ll> p;
	while(q--) {
		string s;
		cin >> s >> p.first >> p.second;
		if(s == "lower") {
			ll l = 0, r = n - 1, cur = -1;
			while(l <= r) {
				ll mid = (l + r) / 2;
				if(vp[mid] < p) {
					cur = mid;
					l = mid + 1;
				} else {
					r = mid - 1;
				}
			}
			cout << cur;
		} else if(s == "upper") {
			ll l = 0, r = n - 1, cur = -1;
			while(l <= r) {
				ll mid = (l + r) / 2;
				if(vp[mid] > p) {
					cur = mid;
					r = mid - 1;
				} else {
					l = mid + 1;
				}
			}
			cout << cur;
		} else {
			if(find(vp.begin(), vp.end(), p) != vp.end())
				cout << "found";
			else
				cout << "not found";
		}
		cout << '\n';
	}
	return 0;
}
