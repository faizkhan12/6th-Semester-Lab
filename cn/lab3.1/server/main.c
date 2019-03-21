/*
    Aim-  To implement factorial number using TCP/IP in c
    Author - @Faiz Khan
    This is a server program
*/

#include<stdio.h>   /* standard C i/o facilities */
#include<stdlib.h>  /* needed for atoi() */
#include<unistd.h>  /* defines STDIN_FILENO, system calls,etc */
#include<string.h>
#include<arpa/inet.h>   /* IP address conversion stuff */
#include<netinet/in.h>  /* INET constants and stuff */
#include<sys/types.h>   /* system data type definitions */
#include<sys/socket.h>  /* socket specific definitions */
void main(int argc,char *argv[])
{
    if(argc < 2)
        printf("Enter the second argument as port number\n");
    struct sockaddr_in s1_addr,s2_addr;
    int ls,cs,,slen,j,k,l,t;
    char str[20],srt1[20],s,sender[20];
    ls = socket(AF_INET,SOCK_STREAM,0);
    s1_addr.sin_family = AF_INEt;
    s1_addr.sin_port = htons(atoi(argv[]));
    bind(ls,(struct sockaddr*)&s1_addr,sizeof(s1_addr));
    printf("Listening.....\n");
    listen(ls,s);
    slen = sizeof(s1_addr);
    cs = accept(ls,(struct sockaddr*)&s1_addr,sizeof(s1_addr));
    recv(cs,str,1024,0);
    printf("The number received is %s\n",str);
    int p = atoi(str);
    f = 1;
    for(i=0;i<=p;i++)
        f = f*i;
    printf(sender,"%d",f);
    printf("The factorial of %d is %d\n",p,f);
    send(s,sender,sizeof(sender),0);
    close(cs);
    close(ls);
}
