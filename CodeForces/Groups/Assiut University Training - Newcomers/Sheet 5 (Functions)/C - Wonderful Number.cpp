/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
string wonderful(int n) {
    string binary = "";
    while(n) {
        n % 2 ? binary += "1" : binary += "0";
        n /= 2;
    }
    return binary;
}
bool palindrome(string s) {
    for(int i = 0, j = s.size() - 1; i <= j; i++, j--)
        if(s[i] != s[j])
            return 0;
    return 1;
}
int main() {
	IOS;
	int x; cin >> x;
    if(x % 2 == 0)
        cout << "NO";
    else {
        string is = wonderful(x);
        cout << (palindrome(is) ? "YES" : "NO");
    }
	return 0;
}