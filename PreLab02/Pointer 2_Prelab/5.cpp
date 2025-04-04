void insertRow(int**& matrix, int r, int c, int* rowArr, int row) {
    // tạo matrix mới với nhiều hơn matrix gốc 1 hàhàng
    int** newMatrix = new(nothrow) int*[r + 1];
    if (newMatrix == nullptr) {
        return; // trả về nullptr
    }

    // copy từng hàng từ matrix gốc vào matrix mới tạo
    for (int i = 0; i < row; ++i) {
        newMatrix[i] = matrix[i];//hàng 1 của matrix gốc sẽ dời qua hàng 1 của newMatrix (hàng 0 vẫn trống)
    }                           // hàng 2 tương tự

    // cấp bộ nhớ 
    newMatrix[row] = new(nothrow) int[c];
    if (newMatrix[row] == nullptr) {
        // xóa bộ nhớ nếu ko cấp đượcđược
        for (int j = 0; j < row; ++j) {
            delete[] newMatrix[j];
        }
        delete[] newMatrix;
        return;
    }
    //gán từng phần tử từ rowArr vào hàng cần chèn của newMatrix
    for (int j = 0; j < c; ++j) {//j=1 c=3 
        newMatrix[row][j] = rowArr[j];//row=2 
    }

    // copy những hàng còn lạilại
    for (int i = row; i < r; ++i) {//i=row=2 
        newMatrix[i + 1] = matrix[i];//từ hàng 3 của matrix gán vào hàng 4 của newMatrix
    }

    // xóa matrix gốcgốc
    delete[] matrix;
    matrix = newMatrix;
}