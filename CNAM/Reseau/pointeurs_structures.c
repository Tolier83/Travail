#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <netdb.h>


int main (int argc, char ** argv){

	struct hostent* host;
	host = gethostbyname(argv[1]);
	host = host -> h_addr_list;
	//addr -> 
	printf("%d \n",host );



	return 0;
}