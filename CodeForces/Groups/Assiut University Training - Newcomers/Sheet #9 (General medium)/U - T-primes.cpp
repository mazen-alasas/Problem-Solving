///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 5;
using namespace std;
void Online() {
    #ifdef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif
}

bool isPrime(ll n){
    if(n == 2)
    	return 1;
    if(n % 2 == 0)
    	return 0;
    for(ll i = 3; i * i <= n; i += 2)
        if(n % i == 0)
        	return 0;
    return 1;
}

int main() {
	IOS
	//Online();
	T{
		ll n; cin >> n;
		bool p = isPrime(sqrt(n));
		if(p && sqrt(n) == (int)sqrt(n) && n > 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
