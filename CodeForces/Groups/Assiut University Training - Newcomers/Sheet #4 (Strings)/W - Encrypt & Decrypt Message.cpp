/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
	IOS;
	int n, i = 0; cin >> n;
    string s; cin >> s;
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string orig = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    while(s[i] != 0) {
        int j = 0;
        if(n == 1) {
            while(orig[j] != 0) {
                if(s[i] == orig[j]) {
                    cout << key[j];
                    break;
                }
                j++;
            }
        }
        if(n == 2) {
            while(key[j] != 0) {
                if(s[i] == key[j]) {
                    cout << orig[j];
                    break;
                }
                j++;
            }
        }
        i++;
    }
	return 0;
}
