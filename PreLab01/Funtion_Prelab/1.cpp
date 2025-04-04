//1
#include <iostream>

using namespace std;
int factorial(int N) {
    // Base case: factorial of 0 is 1
    if (N == 0) {
        return 1;
    }
    // Recursive case: factorial of N is N times factorial of (N-1)
    return N * factorial(N - 1);
}



int main(int narg, char** argv)
{
    int N;
    cin >> N;
    long result;
    result = factorial(N);


    cout << result << endl;
    return 0;
}