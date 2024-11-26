#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ChargerChaine(int N) {
    char *chaine = (char *)malloc((N + 1) * sizeof(char)); 
    if (!chaine) { 
        printf("Erreur d'allocation de mémoire.\n");
        exit(1);
    }
    printf("Veuillez saisir la chaine:\n");
    fgets(chaine, N + 1, stdin); 
    chaine[strcspn(chaine, "\n")] = '\0'; // ????? ????? ??????
    return chaine;
}

int Longueur(char *ch) {
    return strlen(ch);
}

void ChargerTab(char *p, char *Tab) {
    strcpy(Tab, p);
}

void InverserTab(char *Tab, char *T, int m) {
    for (int i = 0; i < m; i++) {
        T[i] = Tab[m - i - 1];
    }
    T[m] = '\0'; // ????? ??????? ???????
}

void AfficherTab(char *Tab) {
    printf("%s\n", Tab);
}

int main() {
    int n;
    printf("Veuillez saisir la taille maximale de la chaine:\n");
    scanf("%d", &n);
    getchar(); // ????? ?????? ??????
    
    char *ch = ChargerChaine(n);
    int m = Longueur(ch);
    
    char *Tab = (char *)malloc((m + 1) * sizeof(char)); 
    char *T = (char *)malloc((m + 1) * sizeof(char)); 
    
    if (!Tab || !T) { // ???? ?? ???? ???????
        printf("Erreur d'allocation de mémoire.\n");
        free(ch);
        exit(1);
    }

    ChargerTab(ch, Tab);
    printf("La chaine originale: \n");
    AfficherTab(Tab);

    InverserTab(Tab, T, m);
    printf("La chaine inversée:\n");
    AfficherTab(T);

    free(ch);
    free(Tab);
    free(T);
    return 0;
}
