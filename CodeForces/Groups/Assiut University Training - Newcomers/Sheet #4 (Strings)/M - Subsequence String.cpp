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
    string h = "hello";
    int i = 0, ctr = 0;
    while(1) {
        if(i == s.size() || ctr == h.size())
            break;
        ctr += (s[i++] == h[ctr]);
    }
    cout << (ctr == 5 ? "YES" : "NO");
	return 0;
}
