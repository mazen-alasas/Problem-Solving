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
	// Online();
	ll n, q, x, l, r; cin >> n >> q;
	vector<ll> v(n); string s;
	for(ll i = 0; i < n; cin >> v[i++]);
	while(q--) {
        cin >> s;
        if(s == "pop_back")
            v.pop_back();
        else if(s == "front")
            cout << v.front() << endl;
        else if(s == "back")
            cout << v.back() << endl;
        else if(s == "sort") {
            cin >> l >> r;
            sort(&v[l - 1], &v[r]);
        }
        else if(s == "reverse") {
            cin >> l >> r;
            reverse(&v[l - 1], &v[r]);
        }
        else if(s == "print") {
            cin >> x;
            cout << v[x - 1] << endl;
        }
        else if(s == "push_back") {
            cin >> x;
            v.push_back(x);
        }
    }
}