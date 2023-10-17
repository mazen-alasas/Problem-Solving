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
    int freq[26]{}, i = 0;
    while(s[i] != 0)
        freq[s[i++] - 'a']++;
    int j = 0;
    while(j < 26) {
        if(freq[j])
            cout << (char)(j + 'a') << " : " << freq[j] << endl;
        j++;
    }
	return 0;
}