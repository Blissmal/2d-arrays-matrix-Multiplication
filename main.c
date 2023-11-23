#include <stdio.h>

int main() {

    /// We can use a 2d array to perform matrix multiplication
    printf("Enter the values for the matrix\n");
    printf("\t\tA\tB\t\t\tE\tF\n");
    printf("\t\tC\tD\t\t\tG\tH\n");
    int vals[8];

    int List[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    for (int i = 0; i < 8; ++i) {
        printf("Enter value for %c: ", List[i]);
        scanf("%d", &vals[i]);
    }
    printf("Multiplication of: \n"
           "\t\t%d\t%d\t\t%d\t%d\n\t\t%d\t%d\t\t%d\t%d\n",
           vals[0], vals[1], vals[4], vals[5], vals[2], vals[3], vals[6], vals[7]);

    int matrixA[2][2] = {
            vals[0],vals[1],
            vals[2],vals[3]
    };

    int matrixB[2][2] = {
            vals[4],vals[5],
            vals[6],vals[7]
    };

    int col1 = (matrixA[0][0] * matrixB[0][0]) + (matrixA[0][1] * matrixB[1][0]);
    int col2 = (matrixA[0][0] * matrixB[0][1]) + (matrixA[0][1] * matrixB[1][1]);
    int col3 = (matrixA[1][0] * matrixB[0][0]) + (matrixA[1][1] * matrixB[1][0]);
    int col4 = (matrixA[1][0] * matrixB[0][1]) + (matrixA[1][1] * matrixB[1][1]);

    int NewMat[2][2] = {
            col1, col2,
            col3, col4
    };
    printf("\tTHE MULTIPLICATION OF MATRIX 1 AND MATRIX 2 IS: ");
    printf("\n");

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("\t\t%d\t", NewMat[i][j]);
        }
        printf("\n");
    }



    return 0;
    /// ------------------------PREPARED BY BLISSMAL
}
