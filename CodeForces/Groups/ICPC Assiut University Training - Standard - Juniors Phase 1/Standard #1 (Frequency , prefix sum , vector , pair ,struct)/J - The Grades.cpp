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
	ll n; cin >> n;
	vector<pair<string, vector<int>>> grades;
	for(ll i = 0; i < n; i++) {
		string s; vector<int> v(5);
		cin >> s >> v[1] >> v[2] >> v[3] >> v[4];
		v[0] = v[1] + v[2] + v[3] + v[4];
		grades.push_back({s, v});
	}
	sort(grades.begin(), grades.end(), [&](pair<string, vector<int>> &a, const pair<string, vector<int>> &b){
		if(a.second[0] == b.second[0])
			return a.first < b.first;
		return a.second[0] > b.second[0];
	});
	for(ll i = 0; i < n; i++) {
		cout << grades[i].first << ' ';
		for (int j = 0; j < 5; j++)
			cout << grades[i].second[j] << ' ';
		cout << endl;
	}
	return 0;
}
