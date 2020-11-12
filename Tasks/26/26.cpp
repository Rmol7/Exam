#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>. 

using namespace std;
int main()
{
    ifstream Fin("26.txt");
    int S, N, x;

    Fin >> S >> N;
    vector <int> arr(N);

    for (int i = 0; i < N; i++) {
        Fin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int total = 0, count;

    for (count = 0; count < N; count++) {
        if (total + arr[count] > S) break;
        total += arr[count];
    }

    int delta = S - total;
    int maxCandidate = 0;

    for (int i = count; i < N; i++) {
        if (arr[i] - arr[count] <= delta)
            if (arr[i] > maxCandidate)
                maxCandidate = arr[i];
    }

    cout << count << " " << maxCandidate;
}
