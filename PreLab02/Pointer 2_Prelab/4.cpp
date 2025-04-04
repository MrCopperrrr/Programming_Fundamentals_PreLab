void deleteMatrix(int**& matrix, int r) {
    //lặp qua từng hàng và xóa bộ nhớ 
    for (int i = 0; i < r; i++) {
        delete[] matrix[i];
    }

    // xóa mảng con trỏ
    delete[] matrix;

    // cho toàn bộ matrix thành nullptr để tránh xung đột bộ nhớ
    matrix = nullptr;
}