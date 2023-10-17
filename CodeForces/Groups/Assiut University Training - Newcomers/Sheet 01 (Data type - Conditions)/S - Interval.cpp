///               بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
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
	float x; cin >> x;
	if(x >= 0 && x <= 25)
        cout << "Interval [0,25]";
	else if(x > 25 && x <= 50)
        cout << "Interval (25,50]";
	else if(x > 50 && x <= 75)
		cout << "Interval (50,75]";
	else if(x > 75 && x <= 100)
		cout << "Interval (75,100]";
	else
        cout << "Out of Intervals";
	return 0;
}








