/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
	IOS;
	string s; getline(cin, s);
    int i = 0, ctr = s[i] >= 'A' && s[i] <= 'z' ? 1 : 0, flag = 0;
    while(s[i] != 0) {
        if(!(s[i] >= 'A' && s[i] <= 'z') && (s[i + 1] >= 'A' && s[i + 1] <= 'z'))
            ctr++;
        i++;
    }
    cout << ctr;

	// or 

	int i = 0, ctr = 0;
    while(s[i] != NULL){
        if(isalpha(s[i]) && !isalpha(s[i + 1]))
            ctr++;
        i++;
    }
    cout << ctr;
	
	// or
	
    int i = 0, ctr = 0, flag = 0;
    while(s[i] != 0){
        if(s[i] != ' ' && s[i] != '?' && s[i] != '!' && s[i] != '.' && s[i] != ',')
            flag = 1;
        if(flag && (s[i] == ' ' || s[i] == '?' || s[i] == '!' || s[i] == '.' || s[i] == ','))
            ctr++,flag = 0;
        if(flag && i == s.size() - 1)
            ctr++;
        i++;
    }
    cout << ctr;

	return 0;
}
