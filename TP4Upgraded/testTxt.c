#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "txt.h"




int main(){

  struct txt_s*  monTexte=txtCreat();


  txtAddStr(monTexte,"Heureux qui, comme Ulysse, a fait un beau voyage,");
  txtAddStr(monTexte,"Ou comme cestuy-là qui conquit la toison,");
  txtAddStr(monTexte,"Et puis est retourné, plein d\'usage et raison,");
  txtAddStr(monTexte,"Vivre entre ses parents le reste de son âge !");

  txtPrintOut(monTexte);

  txtAdd(monTexte);

  /*

  printf("txtAddPos(monTexte,2)\n");
  txtAddPos(monTexte,2);

  printf("txtPrintOut(monTexte)\n");
  txtPrintOut(monTexte);

  printf("txtAddPos(monTexte,0)\n");
  txtAddPos(monTexte,0);
  
  printf("txtPrintOut(monTexte)\n");
  txtPrintOut(monTexte);
  */
}
  
