#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<string.h>
#include<unistd.h>
#include<sys/socket.h>

void main(int argc,char *argv[])
{
	if(argc < 3)
	{
		printf("Enter the 2nd and 3rd as port number and IP");
	}
	struct sockaddr_in s1_addr;
	int cs,num,i;
	char s[20],s1[20];
	printf("\nEnter the message:\n ");
	scanf("%s",s);
	cs = socket(AF_INET,SOCK_STREAM,0);
	s1_addr.sin_family = AF_INET;
	s1_addr.sin_addr.s_addr = inet_addr(argv[2]);
	s1_addr.sin_port = htons(atoi(argv[i]));
	connect(cs,(struct sockaddr *)& s1_addr,sizeof(s1_addr));
	send(cs,s,sizeof(s),0);
	int k = atoi(s1);
	if(k==1)
		printf("The number is even\n");
	else
		printf("the number is odd\n");
	close(cs);
}
