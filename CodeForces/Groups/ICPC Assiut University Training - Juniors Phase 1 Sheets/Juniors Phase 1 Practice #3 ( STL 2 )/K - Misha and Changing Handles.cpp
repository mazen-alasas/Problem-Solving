///                     بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          int test; cin >> test; while (test--)
const int MOD = 1e9 + 7, N = 2e3 + 9, M = 2e6 + 7, INF = 0x3f3f3f3f;
const double EPS = 1e-9;
using namespace std;
void Online() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}


int main(int argc, char *argv[]) {
    Online();
	map<string, string> mp;
	T {
		string old, nw; cin >> old >> nw;
		if (mp.count(old)) {
				mp[nw] = mp[old];
				mp.erase(old);
		} else {
			mp[nw] = old;
		}
	}
	cout << mp.size() << endl;
	for (auto it : mp) {
		cout << it.second << ' ' << it.first << endl;
	}
    return 0;
}