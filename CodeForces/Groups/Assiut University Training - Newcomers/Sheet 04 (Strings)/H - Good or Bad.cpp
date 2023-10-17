/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
	IOS;
	T {
		string s; cin >> s;
        if(s.find("101") != string::npos || s.find("010") != string::npos)
            cout << "Good\n";
        else
            cout << "Bad\n";
	}
	return 0;
}