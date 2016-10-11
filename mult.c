/*
  
  ===========================================
    Les Systèmes d'exploitation centralisés
  ===========================================
  
  TP 1 / Question 4
  
  Thomas KIM
  Youcef LARBI
  
*/

#include <stdio.h>  // printf

int main(){
  
  // Déclaration et récupération de op1 et op2
  unsigned int op1, op2;
  printf("Nombre 1 = ");
  scanf("%x", &op1);
  printf("Nombre 2 = ");
  scanf("%x", &op2);
  
  // Création de clones pour l'affichage final du résultat
  unsigned op1_clone = op1;
  unsigned op2_clone = op2;
  
  // Création d'une variable résultat, init à 0.
  unsigned int resultat = 0;

  // Tant que op2 n'est pas nul
  while (op2 != 0)
  {
    if (op2 & 1)
    {
      // On augmente le résulat au fur et à mesure
      resultat = resultat + op1;
    }
    
    // On décale op1 à gauche de 1
    op1 <<= 1;
    // .. et op2 à droite de 1
    op2 >>= 1;
  }
  
  // On écrit le résultat
  printf( "%d x %d = %d \n", op1_clone, op2_clone, resultat );
  
}
