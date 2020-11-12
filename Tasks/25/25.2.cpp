#include <iostream>
#include <cmath>

int main() {
	int n = 0;
	int arr[2];

	for (int i = 194455; i <= 194500; i++) {
		for (int d = 2; d < i - 1; d++) {
			if (i % d == 0) {
				n++;
				if (n <=2) {
					arr[n-1] = d;
				}
				else {
					break;
				}
			}
		}
		if (n == 2) {
			std::cout << 1 << ' ' << arr[0] << ' '<< arr[1] << ' ' << i << std::endl;
		}
		n = 0;

	}
}
