/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
	IOS;
	string s,username = "", pwd = "", profile = "", role = "", key = "";
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s.substr(i,8) == "username"){
            i+=9;
            while(s[i] != '&')
                username += s[i++];
        }
        if(s.substr(i,3) == "pwd"){
            i+=4;
            while(s[i] != '&')
                pwd += s[i++];
        }
        if(s.substr(i,7) == "profile"){
            i+=8;
            while(s[i] != '&')
                profile += s[i++];
        }
        if(s.substr(i,4) == "role"){
            i+=5;
            while(s[i] != '&')
                role += s[i++];
        }
        if(s.substr(i,3) == "key"){
            i+=4;
            while(s[i] != '&' && s[i] != 0)
                key += s[i++];
        }
    }
    cout << "username: " << username << '\n';
    cout << "pwd: " << pwd << '\n';
    cout << "profile: " << profile << '\n';
    cout << "role: " << role << '\n';
    cout << "key: " << key;
	
	// or
	
	string s; cin >> s;
    bool exist = 0;
    for(int i = 0; s[i] != 0; i++) {
        if(s[i] == '?') {
            i++;
            exist = 1;
        }
        if(exist) {
            if(s[i] == '=') {
                cout << ": ";
                continue;
            }
            if(s[i] == '&') {
                cout << endl;
                continue;
            }
            cout << s[i];
        }
    } 
	return 0;
}