#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, ncount = 0;
	cin >> n;
	vector<int>v(n + 1);
	vector<int>result(n + 1);
	for (int i = 1; i <= n; i++) {
		ncount = 0;
		cin >> v[i];
		for (int j = 1; j <= n; j++) {
			if (result[j] == NULL) ncount++;
			if (ncount == 1 + v[i]) {
				result[j] = i;
				break;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << result[i] << " ";
	}
	return 0;
}