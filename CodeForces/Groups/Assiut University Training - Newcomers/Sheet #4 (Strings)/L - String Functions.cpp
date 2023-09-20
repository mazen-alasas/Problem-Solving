/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
	IOS;
	int n, q, l, r, pos;
    cin >> n >> q;
    string s; cin >> s;
    char x;
    while(q--) {
        string t;
        cin >> t;
        if(t == "pop_back")
            s.pop_back();
        else if(t == "front")
            cout << s.front() << endl;
        else if(t == "back")
            cout << s.back() << endl;
        else if(t == "sort") {
            cin >> l >> r;
            int s = min(l, r) - 1, e = max(l, r);
            sort(s.begin() + s, s.begin() + e);
        }
        else if(t == "substr") {
            cin >> l >> r;
            int s = min(l, r) - 1, e = max(l, r);
            for(int i = s; i < e; i++)
                cout << s[i];
            cout << endl;
        }
        else if(t == "reverse") {
            cin >> l >> r;
            int s = min(l, r) - 1, e = max(l, r);
            reverse(s.begin() + s, s.begin() + e);
        }
        else if(t == "print") {
            cin >> pos;
            cout << s[pos - 1] << endl;
        }
        else if(t == "push_back") {
            cin >> x;
            s.push_back(x);
        }
    }
	return 0;
}