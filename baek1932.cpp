#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<vector<int> >v(n+1, vector<int>(n+1));
	vector<vector<int> >result(n+1, vector<int>(n+1));
	//int v[501][501];
	//int result[501][501];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> v[i][j];
		}
	}
	result[1][1] = v[1][1];
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1) {
				result[i][j] = result[i - 1][j] + v[i][j];
			}
			else if (j == i) {
				result[i][j] = result[i - 1][j - 1] + v[i][j];
			}
			else {
				result[i][j] = max(result[i - 1][j - 1], result[i - 1][j]) + v[i][j];
			}
		}
	}
	int max = result[n][1];
	for (int i = 2; i <= n; i++) {
		if (result[n][i] > max) max = result[n][i];
	}
	cout << max;
	return 0;
}