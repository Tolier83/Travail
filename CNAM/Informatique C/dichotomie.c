#include <stdio.h>
#include <stdlib.h>

int cherche(int *tab ,int taille ,int val){

	int debut = 0;
	int fin = taille;
	int m; 

	while (( m != val ) && ((fin - debut)>1)){
		m = (debut + fin ) / 2;

		printf("val = %d\n",val );
		printf("moyenne = %d\n",m);
		//printf("yo\n");
		if (m==val)return m;

		else if(m<val){
			debut = (m);

		}
		else{
			fin = (m);

		}
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int t[]={1,2,3,4,5,6,7,8,9};
	printf("\nla valeur a etait trouver : %d\n",cherche(t,9,6));
	return 0;
}
