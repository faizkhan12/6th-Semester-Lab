
/*
	Aim - To determine whether the message sent by client is pallindrome or not
	Author - @Faiz Khan
	To run - Terminal 1 -  gcc server.c -o server
*/

#include<stdio.h>
#include<string.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>

main()
{
 	struct sockaddr_in client,server;
  	int s,n,sock,g,j,left,right,flag;
  	char b1[20],b2[10],b3[10],b4[10];
  	s=socket(AF_INET,SOCK_STREAM,0);	//socket creation
  	server.sin_family=AF_INET;
  	server.sin_port=2000;			//port number
  	server.sin_addr.s_addr=inet_addr("127.0.0.1");	//IP Address
  	bind(s,(struct sockaddr *)&server,sizeof server);	//binds the socket to the address and port number 
  	listen(s,1);		//put the server socket in a passive mode
  	n=sizeof client;
  	sock=accept(s,(struct sockaddr *)&client,&n);		//extracts the first connection request 
  	for(;;)		//infinity loop
   	{
      		recv(sock,b1,sizeof(b1),0);	//receives the request by the client
      		printf("\nThe string received is:%s\n",b1);
      		if(strlen(b1)==0)
    		flag=1;
     		 else
      		{
    			left=0;
        		right=strlen(b1)-1;
        		flag=1;
        		while(left<right && flag)
        		{
        			if (b1[left]!= b1[right])
        			flag=0;
       				 else
        			{
            				left++;
            				right--;
        			}
        		}
      		}
      		send(sock,&flag,sizeof(int),0);
      		break;
   	}
  	close(sock);
  	close(s);
}
