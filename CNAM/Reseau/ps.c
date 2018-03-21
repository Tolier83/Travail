#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <netdb.h>


int main (int argc, char ** argv){

	char* hote = argv[1];

	struct hostent* maMachine;
	maMachine = gethostbyname(hote);

	char ** adresses = maMachine ->h_addr_list;
	char* converti;
	while((*adresses)!=NULL)
	{
		converti = inet_ntoa(*(struct in_addr*)(*adresses));
		adresses++;

		printf("%s \n",converti );
	}

	return 0;
}
