#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int v[10001];
	int result[10001];
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}
	result[1] = v[1];
	result[2] = v[1] + v[2];
	result[3] = max(v[1], v[2]) + v[3];
	for (int i = 4; i <= n; i++) {
		result[i] = max(result[i - 3] + v[i - 1] + v[i], result[i - 2] + v[i]);
		if (i == n) {
			result[i] = max(result[i - 1], result[i]);
		}
	}
	cout << result[n];
	return 0;
}