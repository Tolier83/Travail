#include <stdio.h>
#include <stdlib.h>

int tab[]={1,2,3,4,5,6,7,8,9};

int boucle=0;
int cherch=5;
int trouver=0;


int cherche(boucle,cherch){
	
	while(trouver != cherch && boucle<=9){

		if (tab[boucle] == cherch && boucle < 9){
			trouver = tab[boucle];
			printf("%d\n",boucle);
		}
		if(boucle>=9){
			printf("-1\n");
			return;
		}
		boucle++;
		
	}
	return boucle;

}


int main(int argc, char const *argv[])
{
	/* code */
	int fin = cherche(boucle,cherch);
	//printf("%d\n",fin );
	return 0;
}

