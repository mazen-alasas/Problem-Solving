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
        if(s.size() <= 10)
            cout << s << endl;
        else
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
	}
	return 0;
}
