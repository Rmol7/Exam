#include <iostream>
#include <cmath>
int main()
{
    const int div = 2;
    int arr[div];

    for (int n = 174457; n <= 174505; n++) {
        int count = 0;
        int q = round(sqrt(n));

        for (int d = 2; d <= q - 1; d++)
            if (n % d == 0) {
                count += 2;
                if (count <= div) {
                    arr[count - 2] = d;
                    arr[count - 1] = n / d;
                }
                else break;
            }

        if (count == div) {
            for (int i = 0; i < div; i++)
                std::cout << arr[i] << ' ';
            std::cout << std::endl;
        }
    }
}
