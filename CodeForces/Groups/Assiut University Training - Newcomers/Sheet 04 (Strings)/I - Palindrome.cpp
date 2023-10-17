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
    int i = 0, j = s.size() - 1;
    while(i < j) {
        if(s[i++] != s[j--]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
	return 0;
}