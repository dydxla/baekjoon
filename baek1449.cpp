#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, L;
	cin >> N >> L;
	vector<int>v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int result = 1;
	int base = v[0];
	for (int i = 1; i < N; i++) {
		if (base - 1 + L >= v[i]) {
			continue;
		}
		else {
			base = v[i];
			result++;
		}
	}
	cout << result;
	return 0;
}