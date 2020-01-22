#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	int result[301];
	int v[301];
	for (int i = 1; i <= T; i++) {
		cin >> v[i];
	}
	result[0] = 0;
	result[1] = v[1];
	result[2] = v[2]+v[1];
	result[3] = v[3] + max(v[2], v[1]);
	for (int i = 4; i <= T; i++) {
		result[i] = max(result[i - 2] + v[i], result[i - 3] + v[i - 1] + v[i]);
	}
	cout << result[T];
}