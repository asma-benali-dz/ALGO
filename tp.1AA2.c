#include <stdio.h>
int N ,i ,j;
void swap_triangles(int matrix[N][N]) {
    int temp;
    for ( i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

int main(){
	int i, j;
    int matrix[4][4] ={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12},
        {13, 14, 15, 16},
    };

    printf("le matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");       
    swap_triangles(matrix);

    printf("\n La matrice avant changement:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
}
