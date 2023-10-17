/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
	IOS;
	int n, ctr = 0; 
    string s;
    cin >> n >> s;
    for(int i = 0; s[i] != 0; i++)
        ctr += (s[i] != s[i - 1]);
    cout << ctr;
	return 0;
}
