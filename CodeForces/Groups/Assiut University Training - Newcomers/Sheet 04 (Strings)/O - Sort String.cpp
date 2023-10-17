/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
	IOS;
	int n; cin >> n;
    char c;
    int freq[26]{};
    for(int i = 0; i < n; i++) {
        cin >> c;
        freq[c - 'a']++;
    }
    for(int i = 0; i < 26; i++) {
        if(freq[i]) {
            for(int j = 0; j < freq[i]; j++)
                cout << (char)(i + 'a');
        }
    }
	return 0;
}