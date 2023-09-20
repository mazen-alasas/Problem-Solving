/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
	IOS;
	string s, t = ""; cin >> s;
    int i = 0, ctr = 0, l = 0, r = 0, j = 0;
    string w[1000]{};
    while(s[i] != 0) {
        s[i] == 'R' ? r++ : l++;
        t += s[i];
        if(l == r){
            ctr++;
            w[j] = t;
            j++;
            l = r = 0;
            t = "";
        }
        i++;
    }
    j = 0;
    cout << ctr << endl;
    while(j <= ctr) {
        cout << w[j];
        if(j != ctr)
            cout << endl;
        j++;
    }
	return 0;
}
