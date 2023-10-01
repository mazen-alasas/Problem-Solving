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

bool comp(pair<string, int> &p1,  pair<string, int> &p2) {
	if (p1.second == p2.second)
		return p1.first > p2.first;
	return p1.second < p2.second;
}
int main() {
	IOS
	// Online();
	ll n; cin >> n;
	vector<pair<string, int>> pairs(n);
	for(ll i = 0; i < n; i++)
		cin >> pairs[i].first >> pairs[i].second;
	sort(pairs.rbegin(), pairs.rend(), comp);
	for(ll i = 0; i < n; i++)
		cout << pairs[i].first << ' ' << pairs[i].second << endl;
}