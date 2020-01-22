#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
const int MAX = 50;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, m, result=0;
	string temp;
	cin >> n >> m;
	vector<vector<int> >a(n, vector<int>(m));
	vector<vector<int> >b(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		cin >> temp;
		for (int j = 0; j < temp.length(); j++) {
			if (temp[j] == '0') a[i][j] = 0;
			else a[i][j] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> temp;
		for (int j = 0; j < temp.length(); j++) {
			if (temp[j] == '0') b[i][j] = 0;
			else b[i][j] = 1;
		}
	}
	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < m - 2; j++) {
			if (a[i][j] != b[i][j]) {
				result++;
				for (int k = 0; k < 3; k++) {
					a[i][j + k] = !a[i][j + k];
					a[i + 1][j + k] = !a[i + 1][j + k];
					a[i + 2][j + k] = !a[i + 2][j + k];
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != b[i][j]) {
				result = -1;
				i = n;
				break;
			}
		}
	}
	cout << result;
	return 0;
}