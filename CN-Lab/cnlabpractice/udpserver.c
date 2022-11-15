#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#define MAXBUFLEN 20

int sumOfDigits(int arr[]){
    int sum=0,digit;
    while(arr[0]!=0){
        digit=arr[0]%10;
        sum=sum+digit;
        arr[0]=arr[0]/10;
    }
    return sum;
}

void main(){
    int sockfd,numbytes;
    int buf[20];
    struct sockaddr_in my_addr,their_addr;
    socklen_t addr_len;
    sockfd=socket(AF_INET,SOCK_DGRAM,0);
    my_addr.sin_family=AF_INET;
    my_addr.sin_port=htons(4592);
    my_addr.sin_addr.s_addr=INADDR_ANY;
    bind(sockfd,(struct sockaddr*)&my_addr,sizeof my_addr);
    addr_len=sizeof(their_addr);
    numbytes=recvfrom(sockfd,buf,MAXBUFLEN-1,0,(struct sockaddr*)&their_addr,&addr_len);
    printf("the sum of digits= %d",sumOfDigits(buf));
    close(sockfd);
}