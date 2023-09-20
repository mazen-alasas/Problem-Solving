/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void shiftZeros() {
    int n, j = 0; cin >> n;
    int a[n];
    for(int i = 0; i < n; cin >> a[i++]);
    for(int i = 0; i < n; i++) {
        if(a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
}
int main() {
	IOS;
	shiftZeros();
	return 0;
}