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
	ll len, noTasks, l, r, pos;
	cin >> len >> noTasks;
	string text;
	cin >> text;
	char x;
	while(noTasks--) {
		string task;
		cin >> task;
		if(task == "pop_back")
			text.pop_back();
		else if(task == "front")
			cout << text.front() << endl;
		else if(task == "back")
			cout << text.back() << endl;
		else if(task == "sort") {
			cin >> l >> r;
			int s = min(l, r) - 1, e = max(l, r);
			sort(text.begin() + s, text.begin() + e);
		}
		else if(task == "substr") {
			cin >> l >> r;
			int s = min(l, r) - 1, e = max(l, r);
			for(int i = s; i < e; i++)
				cout << text[i];
			cout << endl;
		}
		else if(task == "reverse") {
			cin >> l >> r;
			int s = min(l, r) - 1, e = max(l, r);
			reverse(text.begin() + s, text.begin() + e);
		}
		else if(task == "print") {
			cin >> pos;
			cout << text[pos - 1] << endl;
		}
		else if(task == "push_back") {
			cin >> x;
			text.push_back(x);
		}
	}
	return 0;
}
