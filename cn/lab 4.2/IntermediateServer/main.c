#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<unistd.h>
#include<arpa/inet.h>

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
