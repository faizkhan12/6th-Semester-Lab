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
    if(argc < 2)
        printf("\nEnter the port number : ");
    else
    {
        struct sockaddr_in,s1_addr,s2_addr;
        int i,f,j,k=0;
        char s[100],r[100];
        int ls,cs,sen,l;
        char str[20],str1[20],p[20];
        ls = socket(AF_INET,SOCK_STREAM,0);
        s1_addr.sin_family = AF_INET;
        s1_addr.sin_addr.s_addr = inet_addr("127.0.01");
        s1_addr.sin_port = htons(atoi(argv[1]));
        bind(ls,&s1_addr,sizeof(s1_addr));
        listen(ls,s);
        slen = sizeof(s2_addr);
        cs = accept(ls,(struct sockaddr_in*)&s2_addr,&slen);
        while(1)
            recv(cs,str,1024,0);
            printf("\nThe message received is: %s\n",str);
            scanf("%s",str);
            send(cs,str,1024,0);
        close(cs);
        close(ls);
    }
}
