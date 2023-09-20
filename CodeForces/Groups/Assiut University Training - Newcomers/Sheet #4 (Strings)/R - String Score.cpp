/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
	IOS;
    ll n, score = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++) {
        switch (s[i])
        {
        case 'V':
            score += 5;
            break;
        case 'W':
            score += 2;
            break;
        case 'X':
            if (i != s.size() - 1)
                i++;
            break;
        case 'Y':
            if (i != s.size() - 1) {
                s.push_back(s[i + 1]);
                i++;
            }
            break;
        case 'Z':
            if (i != s.size() - 1) {
                if(s[i + 1] == 'V') {
                    score /= 5;
                    i++;
                }
                else if (s[i + 1] == 'W') {
                    score /= 2;
                    i++;
                }
            }
            break;
        }
    }
    cout << score;
	return 0;
}
