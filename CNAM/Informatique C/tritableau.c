#include <stdio.h>
#include <stdlib.h>

int cherche(int *tab ,int taille){
	int memoiredelacase, memoirechiffre,memoirestockage;
	
	for(int i=0; i<=taille ;i++){
		
		memoirechiffre = tab[i];

		for(int j=i; j<=taille ;j++){

			if(tab[j]<memoirechiffre){

				memoirechiffre = tab[j];
				memoiredelacase = j;
			}
		}

		memoirestockage = tab[i];
		tab[i] = memoirechiffre;
		tab[memoiredelacase]=memoirestockage; 

	}

	for(int o=0; o<=taille; o++){
		printf("%d  ",tab[o] );
	}
	printf("\n ");
}
	

int main(int argc, char const *argv[])
{
	int debut=0;
	int fin =8;
	int t[]={3,5,2,2,5,6,1,8,6};
	cherche(t,8);
	return 0;
}
