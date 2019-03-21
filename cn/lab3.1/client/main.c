/*
    Aim-  To implement factorial number using TCP/IP in c
    Author - @Faiz Khan
    This is a client program
*/

#include<stdio.h>   /* standard C i/o facilities */
#include<stdlib.h>  /* needed for atoi() */
#include<unistd.h>  /* defines STDIN_FILENO, system calls,etc */
#include<string.h>
#include<arpa/inet.h>   /* IP address conversion stuff */
#include<netinet/in.h>  /* INET constants and stuff */
#include<sys/types.h>   /* system data type definitions */
#include<sys/socket.h>  /* socket specific definitions */
void main(int argc,char *argv[]))
{
    struct sockaddr_in s1_addr;
    int cs,num;
    char s[20],p[20];
    printf("Enter the message\n");
    scanf("%s",s);
    cs = socket(AF_INET,SOCK_STREAM,0);
    s1_addr.sin_family = AF_INET;
    s1_addr.sin_addr.s_addr =  inet_addr(argv[2]);
    s1_addr.sin_port = htons(argv[]);
    connect(cs,(struct sockaddr*)&s1_addr,sizeof(s1_addr));
    send(cs,s,sizeof(s),0);
    recv(cs,p,1024,0);
    printf("The factorial is %s\n",p);
    close(cs);
}
