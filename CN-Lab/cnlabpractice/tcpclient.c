#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <string.h>
void main()
{
    int i, sockfd;
    struct sockaddr_in sa;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = inet_addr("127.0.0.1");
    sa.sin_port = 60018;

    i = connect(sockfd, (struct sockaddr *)&sa, sizeof(sa));
    
    int buf[] = {1, 2, 3, 4, 5, 7, 8, 11, 13, 34};
    send(sockfd, buf, 100, 0);
}