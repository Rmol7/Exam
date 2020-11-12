#include <iostream>
#include <cmath>

int main() {
	int count = 0;
	int max = 0;
	int min = 394505;

	for (int i = 394441; i <= 394505; i++) {
		for (int d = 1; d <= i; d++) {
			if (i % d == 0) {
				count++;
			}
		}
		if (max <= count ) {
			if (max < count) {
				max = count;
				min = i;
			}
			else {
				if (max == count) {
					if (i < min) {
						min = i;
					}
				}
			}
		}
		count = 0;
		
	}
	std::cout << max << ' ' << min;
}
