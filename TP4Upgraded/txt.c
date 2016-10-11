//  txt.c

#include <stdio.h>
#include "txt.h"
#include <stdlib.h> // malloc
#include <string.h>


//
//  txtCreat
//
// initialise un objet de type txt_t (struct txt_s * ) 
//
struct txt_s* txtCreat(){
 	//struct txt_s* res=(struct txt_s*) NULL;
 	
 	struct txt_s * r = (struct txt_s *) malloc(sizeof( struct txt_s ));
 	r->premier = (struct maillon *) NULL;
	
 	return r;
}


//
//  txtAddStr
//
// ajoute une s lignes en fin du texte
// dans un objet txt_t  
// 
//
void txtAddStr(struct txt_s* texte,char * ligne){
	struct maillon * m = (struct maillon *) malloc(sizeof(struct maillon));
	m->ligne = (char *)malloc(strlen(ligne)+1);
	strcpy(m->ligne, ligne);
	m->suivant = (struct maillon *) NULL;
	if(texte->premier ==(struct maillon *) NULL)
		texte->premier = m;
	else {
		struct maillon * pt = texte->premier;
		while(pt->suivant != (struct maillon *)NULL) {	
			pt=pt->suivant;	
		
		}
		pt->suivant = m;
	}
	/*
	int tailleTexte = strlen(ligne)+1;
	malloc(tailleTexte);
	struct maillon * dernierMaillon;
	struct maillon * avantdernierMaillon;
	dernierMaillon->ligne = ligne;
	avantdernierMaillon = texte->premier;
	while (avantdernierMaillon->suivant) {
		avantdernierMaillon++;
	}
	avantdernierMaillon->suivant = dernierMaillon;
	*/
}

//
//  txtPrintOut
//  affiche sur la sortie standard
//  les ligned de texte d un objet  txt_t  
//  
//  
void txtPrintOut(struct txt_s* texte){
	struct maillon * maillon;
	maillon = texte->premier; 
	while (maillon != (struct maillon *)NULL) {
		printf("%s \n",maillon->ligne);
		maillon = maillon->suivant;
	}
}

void txtAdd(struct txt_s* texte){
	char str[4096];

	while(str[0] != '.') {
		printf("%d", &str);
		fgets(str,4096,stdin);
		txtAddStr(texte, str);
	}
}

struct txt_s* txtInsertPos(struct txt_s* texte,int pos) {
	struct txt_s * temp_text = txtCreat();
	txtAdd(temp_text);
	struct maillon * maillon;
	maillon = texte->premier;
	int compteur = 0;
	struct maillon * old_suivant;
	while (maillon != (struct maillon *)NULL) {
		if(compteur == pos) {
			old_suivant = maillon->suivant;
			maillon->suivant = temp_text->premier;
		}
		maillon = maillon->suivant;
		compteur++;
	}
	maillon->suivant = old_suivant;
}

