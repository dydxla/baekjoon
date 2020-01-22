#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	vector<int>result(T);
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		vector<int>v(n + 1);
		v[0] = 0;
		v[1] = 1;
		v[2] = 2;
		v[3] = 4;
		for (int j = 4; j <= n; j++) {
			v[j] = v[j - 1];
			v[j] += v[j - 2];
			v[j] += v[j - 3];
		}
		result[i] = v[n];
	}
	for (int i = 0; i < T; i++) {
		cout << result[i] << "\n";
	}
}