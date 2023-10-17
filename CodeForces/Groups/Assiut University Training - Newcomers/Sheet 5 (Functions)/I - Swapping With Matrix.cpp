/** إن الله وملائكته يصلون على النبي يا أيها الذين آمنوا صلوا عليه وسلموا تسليما **/
#include <bits/stdc++.h>
#define ll         long long
#define fix(n)     fixed << setprecision(n)
#define T          ll tests; cin >> tests; while(tests--)
#define IOS        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
	IOS;
	int n, x, y;
    cin >> n >> x >> y;
    x--, y--;
    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    // to swap row
    for(int i = 0; i < n; i++)
         swap(arr[x][i], arr[y][i]);
    // to swap columns
    for(int i = 0; i < n; i++)
        swap(arr[i][x], arr[i][y]);
    // print
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j != 0)
                cout << ' ';
            cout << arr[i][j];
        }
        cout << endl;
    }
	return 0;
}