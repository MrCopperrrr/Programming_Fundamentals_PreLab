//4
int diagonalDiff(int arr[][1000], int row, int col, int x, int y) {
    int sumDiagonal1=0, sumDiagonal2=0;
    {
        int ro=x, co=y;
        while (ro>0 && co>0){
            ro--;
            co--;
        }
        while (ro<row && co<col)
        {
            sumDiagonal1+=arr[ro][co];
            ro++;
            co++;
        }
    }
    {
        int ro=x, co=y;
        while (ro>0 && co<col){
            ro--;
            co++;
        }
        while (ro<row && co>=0)
        {
            sumDiagonal2+=arr[ro][co];
            ro++;
            co--;
        }
    }
    return abs(sumDiagonal1-sumDiagonal2);
}