#include <iostream>

using namespace std;

int n, x;
long long sum = 0;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		sum += x;
	}
		
	cout << sum;
	return 0;
}
