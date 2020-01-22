#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int v[1001];
	v[1] = 1;
	v[2] = 3;
	for (int i = 3; i <= n; i++) {
		v[i] = (v[i - 1] + 2 * v[i - 2])%10007;
	}
	cout << v[n];
	return 0;
}