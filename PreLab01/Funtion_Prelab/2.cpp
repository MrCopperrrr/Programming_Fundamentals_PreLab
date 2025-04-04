//2
#include <iostream>

using namespace std;

void sum2(int* array, int size, int& result) {
    result = 0; // Khởi tạo kết quả ban đầu là 0
    for (int i = 0; i < size; ++i) {
        result += array[i]; // Cộng giá trị của mỗi phần tử vào kết quả
    }
}

