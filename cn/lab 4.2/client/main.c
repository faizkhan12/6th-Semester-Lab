#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<unistd.h>
#include<arpa/inet.h>

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
