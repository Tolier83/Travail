#include <stdio.h>
#include <stdlib.h>

int max(int tab[], int taille)
{
    int i=0, indice_max=0;
    while(i < taille)
    {
        if(tab[i] > tab[indice_max])
            indice_max = i;
        i++;
    }
    return indice_max;
}

void echanger(int tab[], int x, int y)
{
    int tmp;
    tmp = tab[x];
    tab[x] = tab[y];
    tab[y] = tmp;
}

void tri_selection_recursif(int tab[], int taille)
{
    // un tableau d'un seul élément ou moins n'a pas besoin d'être trié
    if(taille < 1)
        return;
    
    echanger(tab, taille-1, max(tab, taille));
    
    return tri_selection_recursif(tab, taille-1);
}

int main(int argc, char const *argv[])
{
	int taille =10;
	int t[]={9,8,7,6,5,4,3,2,1,0};
	tri_selection_recursif(t,taille);
	for(int o=0; o<=taille-1; o++){
		printf("%d  ",t[o] );
	}
	printf("\n ");
	return 0;
}
