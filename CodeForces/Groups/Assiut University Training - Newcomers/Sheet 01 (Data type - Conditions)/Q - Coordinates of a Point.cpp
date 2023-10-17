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
	float x, y; cin >> x >> y;
	if(x > 0 && y > 0)
        cout << "Q1";
	else if(x < 0 && y>0)
        cout << "Q2";
	else if(x < 0 && y < 0)
        cout << "Q3";
	else if(x > 0 && y < 0)
        cout << "Q4";
	else if(x == 0 && y == 0)
        cout << "Origem";
	else if(x == 0 && y != 0)
        cout << "Eixo Y";
	else if(x != 0 && y == 0)
        cout << "Eixo X";
	return 0;
}








