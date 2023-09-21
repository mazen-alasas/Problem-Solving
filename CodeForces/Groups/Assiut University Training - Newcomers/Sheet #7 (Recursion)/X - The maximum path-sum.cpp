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
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int a[12][12], n, m;

int solve(int i, int j) {
	if(i == n || j == m)
		return INT_MIN;
	if(i == n - 1 && j == m - 1)
		return a[i][j];
	return max(solve(i + 1, j), solve(i, j + 1)) + a[i][j];
}

int main() {
	IOS
	//Online();
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	cout << solve(0, 0);

	return 0;
}
