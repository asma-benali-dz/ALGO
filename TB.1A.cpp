#include <stdio.h>

void afficherMatrice(char matrice[5][5]);
void afficherLignesPaires(char matrice[5][5]);
void afficherElementsImpairs(char matrice[5][5]);
void afficherDiagonales(char matrice[5][5]);

int main() {
    char matrice[5][5] = {
        {'1', '2', '3', '4', '5'},
        {'7', 'a', 'c', '8', 'd'},
        {'c', '9', '4', 'z', '8'},
        {'5', '6', 'p', 'n', '3'},
        {'2', '9', 't', 'm', 'k'}
    };

    printf("la matrice :\n");
    afficherMatrice(matrice);
    
    printf("\nles lignes  un indice pair:\n");
    afficherLignesPaires(matrice);
    
    printf("\nles elements un indice impair de chaque ligne:\n");
    afficherElementsImpairs(matrice);
    
    printf("\nles diagonales :\n");
    afficherDiagonales(matrice);

    return 0;
}


void afficherMatrice(char matrice[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", matrice[i][j]);
        }
        printf("\n");
    }
}

void afficherLignesPaires(char matrice[5][5]) {
    for (int i = 0; i < 5; i += 2) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", matrice[i][j]);
        }
        printf("\n");
    }
}

void afficherElementsImpairs(char matrice[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j < 5; j += 2) {
            printf("%c ", matrice[i][j]);
        }
        printf("\n");
    }
}

void afficherDiagonales(char matrice[5][5]) {
    printf("le diagonales: ");
    for (int i = 0; i < 5; i++) {
        printf("%c ", matrice[i][i]);
    }
    printf("\nle diagonales: ");
    for (int i = 0; i < 5; i++) {
        printf("%c ", matrice[i][4 - i]);
    }
    printf("\n");
}
