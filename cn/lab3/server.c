/*
	Aim - To determine whether the number is even or not
	Author - @Faiz Khan
	To run - Termnal 1 - gcc server.c -o server
*/


#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<unistd.h>
#include<string.h>
int main(int argc,char *argv[])
{
	struct sockaddr_in s1_addr,s_addr;
	int s,cs,i,slen,j,k,l,t;
	char str[20],str1[20];
	s = socket(AF_INET,SOCK_STREAM,0);	//Socket creation
	s1_addr.sin_family = AF_INET;
	s1_addr.sin_addr.s_addr = INADDR_ANY;
	s1_addr.sin_port = htons(atoi(argv[i]));	//setting any random port number
	bind(s,(struct sockaddr*)& s1_addr,sizeof(s1_addr));	//binding the socket to the address and port number
	printf("Listening-----\n");
	listen(s,5);	//put server in passive mode 
	slen = sizeof(s1_addr);
	cs = accept(s,(struct sockaddr*)& s1_addr,sizeof(s1_addr));	//connection is established between client and server
	recv(cs,&str,sizeof(str),0);	//receive the conenction
	int p = atoi(str);
	printf("The number to check is %d\n",p);
	if(p%2 == 0)
		k = 1;
	send(cs,k,sizeof(k),0);
	close(cs);	//closing connected socket
	close(s);	//closing listening socket
	return 0;
}
