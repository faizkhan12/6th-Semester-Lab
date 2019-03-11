#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<sys/socket.h>
int main(){
	struct sockaddr_in s1_addr;
	int s1;
	char s[10];
	printf("\n Enter the message: ");
	scanf("%s",s);
	s1 = socket(AF_INET,SOCK_STREAM,0);
	s1_addr.sin_family = AF_INET;
	s1_addr.sin_addr.s_addr = htons(INADDR_ANY);
	s1_addr.sin_port = 9145;
	connect(s1,&s1_addr,sizeof(s1_addr));
	write(s1,s,sizeof(s));
	close(s1);
	return 0;
}
