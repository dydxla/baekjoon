#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct RGB {
	int red;
	int green;
	int blue;
};
int min(int a, int b) {
	if (a > b) return b;
	else return a;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	RGB v[1001];
	int result[1001][3];
	for (int i = 1; i <= N; i++) {
		cin >> v[i].red >> v[i].green >> v[i].blue;
	}
	result[1][0] = v[1].red;
	result[1][1] = v[1].green;
	result[1][2] = v[1].blue;
	for (int i = 2; i <= N; i++) {
		result[i][0] = min(result[i - 1][1], result[i - 1][2]) + v[i].red;
		result[i][1] = min(result[i - 1][0], result[i - 1][2]) + v[i].green;
		result[i][2] = min(result[i - 1][0], result[i - 1][1]) + v[i].blue;
	}

	cout << min(min(result[N][0], result[N][1]), result[N][2]);
	return 0;
}