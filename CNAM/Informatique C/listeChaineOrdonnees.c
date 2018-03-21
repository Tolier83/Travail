#include <stdio.h>
#include <stdlib.h>


struct maillon
{
	int valeur;
	struct maillon* suivant;
};

//liste->valeur=4;

//int recherche(int val,struct maillon**tete)
//{
//	struct maillon*ptr;
//	ptr = liste;
//	while(ptr!=NULL && ptr->val != val)
//		ptr = ptr->suivant;
//	if(ptr==NULL)
//		return 0;
//	else
//		return 1;
// }
void supprime(int val,struct maillon** liste)
{
	struct maillon* ptr,*prec;
	ptr =*liste;
	while( (ptr!=NULL) && (ptr->valeur != val) )
	{
		prec=ptr;
		ptr=ptr->suivant;
	}
	if(ptr != NULL)
	{
		if(prec==NULL)
			liste=ptr->suivant;
		else
			prec->suivant = ptr ->suivant;
		free(ptr);
	}
}
struct maillon* recherche(int val, struct maillon* liste)
{
	struct maillon* ptr;
	ptr = liste; 
	struct maillon* prec = NULL;
	while( (ptr!=NULL) && (ptr ->valeur < val) )
	{
		prec=ptr;
		ptr=ptr->suivant;
	}
	return prec;
}

int insert(int elt, struct maillon** tete, struct maillon** prec)
{
	struct maillon* ptr;
	ptr = (struct maillon*)malloc(sizeof(struct maillon));
	if(prec == NULL)
	{
		ptr -> suivant = *tete;
		ptr -> valeur = elt;
		*tete=ptr;
	}
	else
	{
		ptr -> suivant = *prec;
		ptr -> valeur = elt;
		*tete = ptr;
	}
}

int main(void)
{
	struct maillon *tete = NULL;
	struct maillon *corps = NULL;
	struct maillon *pied = NULL;
	tete = (struct maillon*)malloc(sizeof(struct maillon));
	corps = (struct maillon*)malloc(sizeof(struct maillon));
	pied = (struct maillon*)malloc(sizeof(struct maillon));
	tete->valeur = 10;
	corps->valeur = 20;
	pied->valeur = 2;

	tete->suivant = corps;
	corps->suivant = pied;
	pied->suivant = NULL;

	printf("les maillon sont %d,%d,%d...\n",tete->valeur,corps->valeur,pied->valeur );


	return 0;
}