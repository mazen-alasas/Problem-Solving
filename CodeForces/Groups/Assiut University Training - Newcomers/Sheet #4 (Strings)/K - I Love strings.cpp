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
		string s, t, x = "";
        cin >> s >> t;
        for(int i = 0; i < max(s.size(), t.size()); i++){
            if(i < s.size())
                x += s[i];
            if(i < t.size())
                x += t[i];
        }
        cout << x << endl;
	}
	return 0;
}
