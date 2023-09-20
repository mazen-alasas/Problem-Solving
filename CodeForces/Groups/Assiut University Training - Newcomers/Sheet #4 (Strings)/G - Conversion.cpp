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
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] == ',')
            s[i] = ' ';
        else if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= ('a' - 'A');
        else
            s[i] += ('a' - 'A');
    }
    cout << s;
	return 0;
}
