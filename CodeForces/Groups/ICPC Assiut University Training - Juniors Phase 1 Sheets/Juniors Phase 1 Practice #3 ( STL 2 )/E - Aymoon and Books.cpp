///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios_base::sync_with_stdio(0); cin.tie(0);
const int mod = 1e9 + 7, N = 1e5 + 9, INF = 0x3f3f3f3f;
const double eps = 1e-9;
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
	ll n; cin >> n;
	deque<ll> dq(n);
	for(ll i = 0; i < n; cin >> dq[i++]);
	priority_queue<ll> p;
	T	{
		char c;	cin >> c;
		if(c == 'L') {
			if(!dq.empty()) {
				p.push(dq.front());
				dq.pop_front();
			}
		} else if(c == 'R') {
			if(!dq.empty()) {
				p.push(dq.back());
				dq.pop_back();
			}
		} else {
			if(!p.empty()) {
				cout << p.top() << endl;
				p.pop();
			} else {
				cout << -1 << endl;
			}
		}
	}
	return 0;
}
