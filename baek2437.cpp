#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int sum = v[0];
	int result;
	if (n == 1) {
		result = 2;
	}
	for (int i = 1; i < n; i++) {
		if (sum + 1 >= v[i]) {
			sum += v[i];
			if (i == n - 1) {
				result = sum + 1;
			}
		}
		else {
			result = sum + 1;
			break;
		}
	}
	if (v[0] != 1) result = 1;
	cout << result;
	return 0;
}