/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
	IOS;
	string s; cin >> s;
    string s1 = "", s2 = "", mer = "";
    string t = s, small = s;
    for(int i = 0; i < s.size() - 1; i++) {
        s1 += s[i];
        t.erase(0, 1);
        s2 = t;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        mer = s1 + s2;
        small = min(small, mer);
    }
    cout << small;
	return 0;
}
