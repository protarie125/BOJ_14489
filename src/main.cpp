#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	auto sum = a + b;
	auto ch = 2 * c;

	if (sum < ch) {
		cout << sum;
	}
	else {
		cout << sum - ch;
	}

	return 0;
}