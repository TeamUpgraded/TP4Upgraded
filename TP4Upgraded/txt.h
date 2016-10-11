
// ....


struct maillon {
	char * ligne;
	struct maillon * suivant;
};

struct txt_s {
	struct maillon * premier;
};

 


//
//  txtCreat
//
// initialise un objet de type txt_t (struct txt_s *)  
//
struct txt_s* txtCreat();


//
//  txtAddStr
//
// ajoute une ligne en fin du texte
// dans un objet txt_t  (struct txt_s *) 
// 
//
void txtAddStr(struct txt_s*  texte,char *);



//
//  txtPrintOut
//  affiche sur la sortie standard
//  les ligned de texte d un objet struct txt_s * 
//  
//  
void txtPrintOut(struct txt_s*   texte);

void txtAdd(struct txt_s* text);

