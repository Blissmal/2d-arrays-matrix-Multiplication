#include <stdio.h>

int main() {

    /// We can use a 2d array to perform matrix multiplication
    int matrixA[2][2] = {
            2,2,
            2,2
    };

    int matrixB[2][2] = {
            3,4,
            3,6
    };

    int col1 = (matrixA[0][0] * matrixB[0][0]) + (matrixA[0][1] * matrixB[1][0]);
    int col2 = (matrixA[0][0] * matrixB[0][1]) + (matrixA[0][1] * matrixB[1][1]);
    int col3 = (matrixA[1][0] * matrixB[0][0]) + (matrixA[1][1] * matrixB[1][0]);
    int col4 = (matrixA[1][0] * matrixB[0][1]) + (matrixA[1][1] * matrixB[1][1]);

    int NewMat[2][2] = {
            col1, col2,
            col3, col4
    };

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d\t", NewMat[i][j]);
        }
        printf("\n");
    }



    return 0;
    /// PREPARED BY BLISSMAL
}
