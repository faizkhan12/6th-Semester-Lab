*/
    Aim - Impement the concept of multiple or Intermediate servers using TCP
    Author - @Faiz Khan 
/*
#include<stdio.h>    /* standard C i/o facilities */
#include<stdlib.h>   /* needed for atoi() */
#include<string.h>
#include<sys/socket.h>  /* socket specific definitions */
#include<sys/types.h>   /* system data type definitions */
#include<netinet/in.h>  /* INET constants and stuff */
#include<unistd.h>      /* defines STDIN_FILENO, system calls,etc */
#include<arpa/inet.h>   /* IP address conversion stuff */
    
void main(int argc, char *argv[])
{
    if(argc < 3)
        printf("Enter the 2nd and 3rd as port number 2 IP");
    struct sockaddr_in client;
    int s,flag,b;
    s = socket(AF_INET,SOCK_STREAM,0);
    client.sin_famiy = AF_INET;
    client.sin_port = htons(atoi(argv[]));
    client.sin_addr.s_addr = inet_addr(argv[2]);
    connect(s,(struct sockaddr*)&client,sizeof(client));
    printf("Enter the number to check even or odd");
    scanf("%d",&b);
    send(s,&b,sizeof(b),0);
    recv(s,&flag,sizeof(int),0);
    if(flag==0)
        prinf("Client: The number is even");
    else
        printf("Client: The number s odd");
    close(s);
}
