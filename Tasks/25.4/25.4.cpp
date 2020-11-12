#include <iostream>
#include <cmath>

int main() {
	int count = 3577000;
	bool a;
	for (int i = 2; i <= 3577000; i++) {
		a = true;
		for (int d = 2; d <= i - 1; d++) {
			if (i % d == 0) {
				a = false;
				break;
			}
		}
		if (a) {
			count--;
		}
	}
	std::cout << count;
}

