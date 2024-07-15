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
	ll n; cin >> n;
    string s[n];
    for (ll i = 0; i < n; cin >> s[i++]);
    sort(s, s + n, [](string &s, string &t) {
        return s.size() < t.size();
    });
    for (ll i = 1; i ^ n; i++) {
        if (s[i].find(s[i - 1]) == string::npos) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    for (ll i = 0; i < n; cout << s[i++] << endl);

    return 0;
}