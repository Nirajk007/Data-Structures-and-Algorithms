#include <iostream>
using namespace std;

void inputMatrix(int mat[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> mat[i][j];
}

void printMatrix(int mat[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

void addMatrices(int mat1[10][10], int mat2[10][10], int result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = mat1[i][j] + mat2[i][j];
    cout << "Addition:\n";
    printMatrix(result, rows, cols);
}

void subtractMatrices(int mat1[10][10], int mat2[10][10], int result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = mat1[i][j] - mat2[i][j];
    cout << "Subtraction:\n";
    printMatrix(result, rows, cols);
}

void multiplyMatrices(int mat1[10][10], int mat2[10][10], int result[10][10], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols2; j++)
            for (int k = 0; k < cols1; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];
    cout << "Multiplication:\n";
    printMatrix(result, rows1, cols2);
}

void transposeMatrix(int mat[10][10], int trans[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            trans[j][i] = mat[i][j];
    cout << "Transpose:\n";
    printMatrix(trans, cols, rows);
}

void checkSymmetric(int mat[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (mat[i][j] != mat[j][i]) {
                cout << "Not Symmetric\n";
                return;
            }
    cout << "Symmetric\n";
}

void lowerTriangular(int mat[10][10], int rows, int cols) {
    cout << "Lower Triangular:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << (i < j ? 0 : mat[i][j]) << " ";
        cout << endl;
    }
}

void upperTriangular(int mat[10][10], int rows, int cols) {
    cout << "Upper Triangular:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << (i > j ? 0 : mat[i][j]) << " ";
        cout << endl;
    }
}

int main() {
    int mat1[10][10], mat2[10][10], result[10][10] = {0}, trans[10][10], rows, cols;
    
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter first matrix:\n";
    inputMatrix(mat1, rows, cols);

    cout << "Enter second matrix:\n";
    inputMatrix(mat2, rows, cols);

    addMatrices(mat1, mat2, result, rows, cols);
    subtractMatrices(mat1, mat2, result, rows, cols);
    multiplyMatrices(mat1, mat2, result, rows, cols, cols);
    transposeMatrix(mat1, trans, rows, cols);
    checkSymmetric(mat1, rows, cols);
    lowerTriangular(mat1, rows, cols);
    upperTriangular(mat1, rows, cols);

    return 0;
}