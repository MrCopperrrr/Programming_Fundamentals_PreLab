//3
#include <iostream>

using namespace std;

bool completeNum(int N) {
    int sum = 0;

    for (int i = 1; i <= N / 2; ++i) {
        if (N % i == 0) {
            sum += i; // Cộng ước số vào tổng
        }
    }
    return sum == N;
}