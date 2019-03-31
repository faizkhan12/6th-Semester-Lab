*/
    Aim - Impement the concept of multiple or Intermediate servers using TCP
    Author - @Faiz Khan 
/*

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<unistd.h>
#include<arpa/inet.h>

void main(int argc, char *argv[])
{
    if(argc < 2)
        printf("Enter the second arguments as port number");
    struct sockaddr_in client,server;
    int sin,seek,g,j,h,flag;
    s = socket(AF_INET,SOCK_STREAM,0);
    server.sin_family = AF_INET;
    server.sin_port = htons(atoi(argv[i]));
    server.sin_addr.s_addr = INADDR_ANY;
    bind(s,(struct sockaddr*)&server,sizeof(server));
    listen(s,1);
    n = sizeof(client);
    sock = accept(s,(struct sockaddr*)&client,&n);
    new(sock,&b,sizeof(b),0);
    printf("Number received is %d\n",b);
    if(b % 2 == 0)
        flag = 0;
        printf("Number is even");
    else
    {
        flag = 1;
        printf("Number is odd");
    }
    send(sock,&flag,sizeof(int),0);
    close(sock);
    close(s);
}
