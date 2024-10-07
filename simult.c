#include <stdio.h>

// Fonction qui calcule le produit et la somme de deux entiers
void simult(int a, int b, int *somme, int *produit) {
    *somme = a + b;
    *produit = a * b;
}

int main() {
    int a = 5, b = 3;
    int somme, produit;

    // Appel de la fonction
    simult(a, b, &somme, &produit);

    // Affichage des résultats
    printf("Somme : %d\n", somme);
    printf("Produit : %d\n", produit);

    return 0;
}