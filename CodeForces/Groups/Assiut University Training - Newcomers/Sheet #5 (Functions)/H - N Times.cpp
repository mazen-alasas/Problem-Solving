/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void printNtimes(int n, char ch) {
    while(n--) {
        if(n == 0)
            cout << ch;
        else
            cout << ch << ' ';
    }
    cout << endl;
}
int main() {
	IOS;
	T {
        int n; cin >> n;
        char c; cin >> c;
        printNtimes(n, c);
    }
	return 0;
}