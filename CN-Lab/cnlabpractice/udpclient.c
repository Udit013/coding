#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <netdb.h>

void main(){
    int sockfd,numbytes;
    struct sockaddr_in their_addr;
    sockfd=socket(AF_INET,SOCK_DGRAM,0);
    their_addr.sin_family=AF_INET;
    their_addr.sin_port=htons(4592);
    their_addr.sin_addr.s_addr=inet_addr("127.0.0.1");
    int array[1]={56};
    numbytes=sendto(sockfd,array,10,0,(struct sockaddr*)&their_addr,sizeof their_addr);
    close(sockfd);
}