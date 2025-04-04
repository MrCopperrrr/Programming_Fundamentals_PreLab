//1
int findMaxColumn(int arr[][1000], int row, int col) {
    int maxSum = INT_MIN; 
    int maxColIndex = 0; 

    for (int j = 0; j < col; ++j) {
        int columnSum = 0; 

        for (int i = 0; i < row; ++i) {
            columnSum += arr[i][j];
        }

        if (columnSum > maxSum || (columnSum == maxSum && j > maxColIndex)) {
            maxSum = columnSum; 
            maxColIndex = j; 
        }
    }

    return maxColIndex; 
}