#include <stdio.h>
#include <stdlib.h>


void fusion(int *t,int d,int m, int f)
{
	int *t2 = (int*)malloc((f-d)*sizeof(int));
	int i,j;
	int debut = d;
	int millieu = m;

	for (i=0; i<=(f-debut);i++){

		if(d == millieu){
			t2[i] = t[m];
			m++;
		}
		else if(m == f+1){
			t2[i] = t[d];
			d++;
		}
		else if(t[d] < t[m]){
			t2[i] = t[d];
			d++;
		}
		else {
			t2[i] = t[m];
			m++;
		}
	}
	for(i=0 ; i <= (f-debut) ; i++){
		t[debut+i] = t2[i];
	}

	free(t2);
}

void tri(int *t,int d, int f){

	int m;
	m= ((d+f)/2)+1;
	printf("d :%d  f : %d\n",d,f);
	printf("le millieu est : %d\n",m );
	if(d!=f){

		tri(t,d,m-1);

		tri(t,m,f);

		fusion(t,d,m,f);
	}
}



int main(int argc, char const *argv[])
{
	int d = 0;
	int f = 4;
	int t[]={98,9, 16,7,8} ;
	int i;

	tri(t,d,f);

	for(i=0; i<=f; i++){
		printf("%d  ",t[i] );
	}
	printf("\n ");

}
