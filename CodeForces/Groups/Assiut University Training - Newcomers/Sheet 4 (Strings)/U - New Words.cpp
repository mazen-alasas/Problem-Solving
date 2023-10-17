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
    int i = 0, e = 0, g = 0, y = 0, p = 0, t = 0;
    while(s[i] != 0) {
        e += ((char)tolower(s[i]) == 'e');
        g += ((char)tolower(s[i]) == 'g');
        y += ((char)tolower(s[i]) == 'y');
        p += ((char)tolower(s[i]) == 'p');
        t += ((char)tolower(s[i]) == 't');
        i++;
    }
    cout << min({e, g, y, p ,t});
	return 0;
}
