/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
bool palind(int n) {
	string s = to_string(n);
	int i = 0, j = s.size() - 1;
	while(i <= j) {
		if(s[i] != s[j])
			return 0;
		i++, j--;
	}
	return 1;
}

bool prime(int n) {
	if(n < 2 || (n % 2 == 0 && n > 2))
		return 0;
	for(ll i = 3; i * i <= n; i += 2) {
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int numDivs(int n) {
    int ctr = 0;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            ctr++;
            if(i * i != n)
            	ctr++;
        }
    }
    return ctr;
}
 
int divisors(int a[], int s) {
    int mxd = 0, mxn = 0;
    for(int i = 0; i < s; i++) {
        int c = numDivs(a[i]);
        if(c == mxd)
            mxn = max(mxn, a[i]);
        if(c > mxd) {
            mxn = a[i];
            mxd = c;
        }
    }
    return mxn;
}

int main() {
	IOS;
	int n; cin >> n;
	int a[n], pr = 0, np = 0;
	for(int i = 0; i < n; cin >> a[i++]);
	sort(a, a + n);
	cout << "The maximum number : " << a[n - 1] << endl;
	cout << "The minimum number : " << a[0] << endl;
	for(int i = 0; i < n; i++) {
		if(palind(a[i]))
			np++;
		if(prime(a[i]))
			pr++;
	}
	cout << "The number of prime numbers : " << pr << endl;
	cout << "The number of palindrome numbers : " << np << endl;
	cout << "The number that has the maximum number of divisors : " << divisors(a, n) << endl;
	return 0;
}