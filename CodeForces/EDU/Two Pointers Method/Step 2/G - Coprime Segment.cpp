///              بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define  ll         long long
#define  fix(n)     setprecision(n)
#define  T          ll tests; cin >> tests; while(tests--)
#define  IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
using namespace std;
inline void Online() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

struct myStack {
	vector<ll> st = {}, GCD = {0};
	void push(ll x) {
		st.push_back(x);
		GCD.emplace_back(__gcd(GCD.back(), x));
	}
	ll pop() {
		ll res = st.back();
		st.pop_back();
		GCD.pop_back();
		return res;
	}
	bool isEmpty() {
		return st.empty();
	}
	ll value() {
		return GCD.back();
	}
};

myStack s1, s2;
void add(ll x) {
	s2.push(x);
}

void remove() {
	if(s1.isEmpty()) {
		while(!s2.isEmpty()) {
			s1.push(s2.pop());
		}
	}
	s1.pop();
}

bool isGood() {
	return __gcd(s1.value(), s2.value()) == 1;
}

int main() {
	IOS
	//Online();
	ll n; cin >> n;
	ll a[n];
	for(ll i = 0; i < n; cin >> a[i++]);
	ll l = 0, r = 0, ans = LLONG_MAX;
	while(r < n) {
		add(a[r]);
		while(isGood()) {
			ans = min(ans, r - l + 1);
			remove();
			l++;
		}
		r++;
	}
	cout << (ans == LLONG_MAX ? -1 : ans);
  return 0;
}
