int** deepCopy(int** matrix, int r, int c) {
    if (matrix == nullptr || r <= 0 || c <= 0) {
        return nullptr; // trả về nullptr nếu matrix ko tồn tại
    }

    // cấp bộ nhớ cho newArray
    int** newArray = new(nothrow) int*[r];
    if (newArray == nullptr) {
        return nullptr; // trả về nếu ko cấp thành công
    }

    for (int i = 0; i < r; ++i) {
        newArray[i] = new(nothrow) int[c];
        if (newArray[i] == nullptr) {
            // nếu cấp bộ nhớ ko thành công thì xóa 
            for (int j = 0; j < i; ++j) {
                delete[] newArray[j];
            }
            delete[] newArray;
            return nullptr;
        }

        // copy từ matrix đầu vào matrix sau
        for (int j = 0; j < c; ++j) {
            newArray[i][j] = matrix[i][j];
        }
    }

    return newArray;
}