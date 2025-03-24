#include <stdio.h>

int main(void) {

  /* variables des tyes dont il faut calculer la taille*/
  char c;
  short s;
  int i;
  long l;

  int cptr; /* compteur des bits */

  /* Calcul du nombre de bits d'un char */
  for (cptr = 0, c = l; 0 != c; c <<=l) cptr++;
  /* affichage du nombre de bits d'un char */
  printf("Taille d'un char : %d\n", cptr);

  /*Calcul du nombre de bits d'un short */
  for (cptr = 0, s = l; 0 != s; s<<=l) cptr++;
  /* affichage du nombre de bits d'un short */
  printf("Taille d'un short : %d\n", cptr);

  /* Calcul du nombre de bits d'un int */
  for (cptr = 0, i = l; 0 !=i; i<<=l) cptr++;
  /* affichage du nombre de bits d'un int */
  printf("Taille d'un int : %d\n", cptr);
  

  /* Calcul du nombre de bits d'un long */
  for (cptr = 0, l = l; 0 !=l; l<<=l) cptr++;
  /* affichage du nombre de bits d'un int */
  printf("Taille d'un long : %d\n", cptr);

  return 0;

}