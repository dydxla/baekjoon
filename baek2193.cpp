#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	long long result[91];
	result[1] = 1;
	result[2] = 1;
	for (int i = 3; i <= N; i++) {
		result[i] = result[i - 1] + result[i - 2];
	}
	cout << result[N];
	return 0;
}