#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
int main(){
	struct sockaddr_in s1_addr,s2_addr;
	int s1,s2,slen;
	char str[20],str1[20];
	s1 = socket(AF_INET,SOCK_STREAM,0);
	s1_addr.sin_family=AF_INET;
	s1_addr.sin_addr.s_addr = htons(INADDR_ANY);
	s1_addr.sin_port = 9145;
	bind(s1,&s1_addr,sizeof(s1_addr));
	listen(s1,5);
	slen = sizeof(s1_addr);
	s2 = accept(s1,&s2_addr,&slen);
	read(s2,&str,sizeof(str));
	printf("The message received is %s",str);
	close(s1);
	close(s2);
	return 0;
}
