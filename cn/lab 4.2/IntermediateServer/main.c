*/
    Aim - Impement the concept of multiple or Intermediate servers using TCP
    Author - @Faiz Khan 
#include<stdio.h>   /* standard C i/o facilities */
#include<stdlib.h>   /* needed for atoi() */
#include<string.h> 
#include<sys/socket.h> /* socket specific definitions */ 
#include<sys/types.h>    /* system data type definitions */
#include<netinet/in.h>  /* INET constants and stuff */
#include<unistd.h>      /* defines STDIN_FILENO, system calls,etc */
#include<arpa/inet.h>   /* IP address conversion stuff */

void main(int argc, char *argv[])
{
    if(argc < 4)
        printf("Enter the 2nd and 3rd as port number and 4th as IP");
    struct sockaddr_in client,server;
    int j,n,sock,g,i,b,flag,s1;
    s = socket(AF_INET,SOCK_STREAM,0);
    server.sin_port = htons(atoi(argv[i]));
    server.sin_addr = INADDR_ANY;
    bind(s,(struct sockaddr*)&server,sizeof(server));
    listen(s,1);
    n = sizeof(client);
    sock = accept(s,(struct sockaddr*)&client,&n);
    recv(sock,&b,sizeof(b),0);
    printf("The number received is %d\n",b);
    send(sock,&b,sizeof(b),0);
    s1 = socket(AF_INET,SOCK_STREAM,0);
    client.sin_family = AF_INET;
    client.sin_port = htons(atoi(argv[2]));
    client.sin_addr.s_addr = INET_addr(argv[i]);
    connect(s,(struct sockaddr*)&client,sizeof(cient));
    send(s1,&b,sizeof(int),0);
    if(flag==0)
        printf("Intermediate server: NUmber is even);
    else
        printf("Intermediate server: Number is odd);
    close(sock);
    close(s);
}
