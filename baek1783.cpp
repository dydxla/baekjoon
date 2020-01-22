#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, m,result=1,sw=0;
	cin >> n >> m;
	int x = 1, y = 1;
	if (n == 1) {
		result = 1;
	}
	else if (n < 3) {
		while (sw != 1) {
			if (y + 1 <= n && x + 2 <= m) {
				y = y + 1;
				x = x + 2;
				result++;
			}
			else if (y + 1 > n&&x + 2 <= m) {
				y = y - 1;
				x = x + 2;
				result++;
			}
			if (result > 4) result = 4;
			if (x + 2 > m) sw = 1;
		}
	}
	else if (m < 7) {
		while (sw != 1) {
			if (y + 2 <= n && x + 1 <= m) {
				y = y + 2;
				x = x + 1;
				result++;
			}
			else if (y + 2 > n&&x + 1 <= m) {
				y = y - 2;
				x = x + 1;
				result++;
			}
			if (result > 4) result = 4;
			if (x + 1 > m) sw = 1;
		}
	}
	else {
		result = 5;
		x = 7;
		while (sw != 1) {
			if (y + 2 <= n && x + 1 <= m) {
				y = y + 2;
				x = x + 1;
				result++;
			}
			else if (y + 2 > n&&x + 1 <= m) {
				y = y - 2;
				x = x + 1;
				result++;
			}
			if (x + 1 > m) sw = 1;
		}
	}
	cout << result;
	return 0;
}