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

void leftMax(ll a[], ll n){
    if(n == 1)
    	return;
    leftMax(a, n - 1);
    a[n - 1] = max(a[n - 1], a[n - 2]);
}

int main() {
    IOS
	//Online();
	ll n; cin >> n;
	ll arr[n];
	for(ll i = 0; i < n; cin >> arr[i++]);
	leftMax(arr, n);
	for(ll i = 0; i < n; cout << arr[i++] << ' ');
	return 0;
}
