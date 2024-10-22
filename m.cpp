#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    // Input dimensions of matrices
    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;

    // Check if matrix multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication not possible. Column of first matrix must equal row of second matrix." << endl;
        return 0;
    }

    int a[r1][c1], b[r2][c2], result[r1][c2];

    // Input first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            cin >> a[i][j];

    // Input second matrix
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            cin >> b[i][j];

    // Initialize result matrix to 0
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            result[i][j] = 0;

    // Multiply the matrices
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Output the result matrix
    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
