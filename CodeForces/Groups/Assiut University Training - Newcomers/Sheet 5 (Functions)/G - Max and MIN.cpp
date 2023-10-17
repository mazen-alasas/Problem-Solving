/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void max_min(int arr[], int len, int *maxi, int *mini) {
    for(int i = 0; i < len; i++) {
        if(arr[i] < *mini)
            *mini = arr[i];
        if(arr[i] > *maxi)
            *maxi = arr[i];
    }
}
int main() {
	IOS;
	int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int mx = 0, mn = INT_MAX;
    max_min(arr, n, &mx, &mn);
    cout << mn << ' ' << mx;
	return 0;
}