/*
		Aim - To check if the string is pallindrome or not
		Author - @Faiz Khan
		To run - Terminal 2 - gcc client.c -o client
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
  	 struct sockaddr_in client;
   	 int s,flag;
   	 char buffer[20];
   	 s=socket(AF_INET,SOCK_STREAM,0);	//socket connection
   	 client.sin_family=AF_INET;
   	 client.sin_port=2000;			//port number
  	 client.sin_addr.s_addr=inet_addr("127.0.0.1");	//IP Address
  	 connect(s,(struct sockaddr *)&client,sizeof client);	//connecting with server
  	 for(;;)		//infinity loop
  	 {
  	 	 printf("\nEnter a string to check palindrome: ");
   		 scanf("%s",buffer);
   		 printf("\nClient: %s",buffer);
   		 send(s,buffer,sizeof(buffer),0);
   		 recv(s,&flag,sizeof(int),0);
   		 if(flag==1)
   		 {
     			 printf("\nServer: The string is a Palindrome.\n");
       			 break;
   		 }
   		 else
   		 {
      			 printf("\nServer: The string is not a palindrome.\n");
       			 break;
   		 }
    	 }
   	 close(s);
}

