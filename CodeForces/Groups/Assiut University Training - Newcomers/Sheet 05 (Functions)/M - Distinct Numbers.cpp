/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void distinct() {
    int a, b; cin >> a;
    set<int> s;
    for(int i = 0; i < a; i++) {
        cin >> b;
        s.insert(b);
    }
    cout << s.size();
}

// or

int dist() {
    int a, b; cin >> a;
    int freq[1000000]{};
    for(int i = 0; i < a; i++) {
        cin >> b;
        freq[b + 1000]++;
    }
    int ctr = 0;
    for(int i = 0; i < 1000000; i++)
        ctr += !!freq[i];
    return ctr;
}
int main() {
	IOS;
	distinct();
	cout << dist();
	return 0;
}