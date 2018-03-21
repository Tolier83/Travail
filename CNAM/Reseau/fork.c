#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main(){

	int x = fork();
	if(x==0)
	{
	    int i=1;
        for(i=1;i<51;i++)
		{
			printf("%d ", i);
		}
		printf(" \n puis \n", x);

        int y = fork();
        if(y==0)
        {
            int p=50;
            for(p=50;p<101;p++)
            {
                printf("%d ", p);
            }
            printf(" \n fin \n", x);
        }
	}
	return 0;
}







