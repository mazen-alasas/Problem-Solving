///                بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     fixed << setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
using namespace std;
void Online() {
	#ifdef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	IOS
	//Online();
	ll q, x; cin >> q;
	string s;
	deque<ll> dq;
	while(q--) {
		cin >> s;
		if(s == "push_front") {
			cin >> x;
			dq.push_front(x);
		}
		else if(s == "push_back") {
			cin >> x;
			dq.push_back(x);
		}
		else if(s == "pop_front")
			dq.pop_front();
		else if(s == "pop_back")
			dq.pop_back();
		else if(s == "front")
			cout << dq.front() << endl;
		else if(s == "back")
			cout << dq.back() << endl;
		else {
			cin >> x;
			cout << dq[x - 1] << endl;
		}
	}
	return 0;
}
