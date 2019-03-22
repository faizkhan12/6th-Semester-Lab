#include <stdio.h>
#include <stdlib.h>
#include<sys/sys/types.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<unistd.h>
#include<string.h>
#include<arpa/inet.h>
void main(int argc,char *argv[])
{
    if(argc < 3)
        printf("\nEnter the port number and IP Address: ");
    else
    {
        struct sockaddr_in s1_addr;
        int cs,numl
        char s[10];
        cs = socket(AF_INET,SOCK_STREAM,0);
        s1_addr.sin_famiy = AF_INET;
        s1_addr.sin_port = htons(atoi(argv[1]));
        s1_addr.sin_addr.s_addr = inet_addr(argv[2]);
        connect(cs,&s1_addr,sizeof(s1_addr));
        while(1)
            printf("\nEnter the message to server :");
            scanf("%s",s);
            send(cs,s,sizeof(s),0);
            recv(cs,s,1024,0);
            printf("\nThe message received from server is: %s\n",s);
        close(cs)
    }
}
