#include <stdio.h>
#include <stdlib.h>

int cherche(int *tab ,int taille ,int val){

	int i, result;

	for(i==0 ; i<taille ; i++){
		if (tab[i]==val) return i;
	}

	return -1;
}


int main(int argc, char const *argv[])
{
	int t[]={1,2,3,4,5,6,7,8,9};
	printf("%d\n",cherche(t,9,4));
	return 0;
}
