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
    ll n, m; cin >> n >> m;
    vector<ll> v(n);
    for(int i = 0; i < n; cin >> v[i++]);
    sort(v.begin(), v.end());
    ll s = -m;
    for(int i = 0; i < n; i++) {
    	if(v[i] != s) {
    		if(v[i] == v[i - 1])
    			continue;
    		cout << s;
    		return 0;
    	}
    	s++;
    }

    /*  another solution
    
        ll n, m, x; cin >> n >> m;
        for(int i = 0; i < n; i++) {
            cin >> x;
            freq[x + 100001]++;
        }
        for(int i = -m + 100001; i < m + 100002; i++) {
            if(!freq[i])
                return cout << i - 100001, 0;
        }
    */

	return 0;
}