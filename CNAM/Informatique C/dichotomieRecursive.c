#include <stdio.h>
#include <stdlib.h>

int cherche(int *tab ,int debut,int fin,int val){

	int m; 
	m = (debut + fin ) / 2;

	printf("val = %d\n",val );
	printf("moyenne = %d\n",m);
		//printf("yo\n");
	if (tab[m]==val)return m;

	else if(tab[m]<val){
		return cherche(tab,m+1,fin,val);
		
	}
	else return cherche(tab,debut,m-1,val);

	return -1;
}
	

int main(int argc, char const *argv[])
{
	int debut=0;
	int fin =8;
	int t[]={1,2,3,4,5,6,7,8,9};
	printf("\nla colonne de la valeur est : %d\n",cherche(t,debut,fin,1));
	return 0;
}
