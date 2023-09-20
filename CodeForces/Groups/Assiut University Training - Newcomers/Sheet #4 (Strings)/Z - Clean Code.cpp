/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
	IOS;
	string s;
    bool multiComment = 0;
    while(getline(cin, s)) {
        bool Notcomment = 0;
        if(!s.size() || s == " ")
            continue;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '/' && s[i + 1] == '/' && !multiComment)
                break;
            else if(s[i] == '/' && s[i + 1] == '*'){
                i++;
                multiComment = 1;
            }
            else if(s[i] == '*' && s[i + 1] == '/' && multiComment){
                i++;
                multiComment = 0;
            }
            else if(!multiComment){
                cout << s[i];
                Notcomment = 1;
            }
        }
        if(!multiComment && Notcomment)
            cout << endl;
    }
	return 0;
}