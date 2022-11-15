#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <string.h>

int isPrime(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void swapconse(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        if (isPrime(arr[i]) == 1 && isPrime(arr[i + 1]) == 1)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}
void main()
{
    int sockfd, length, fd1, i;
    int buf[10];

    struct sockaddr_in sa, ta1;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = INADDR_ANY;
    sa.sin_port = 60018;

    i = bind(sockfd, (struct sockaddr *)&sa, sizeof(sa));

    listen(sockfd, 5);
    length = sizeof(sa);

    fd1 = accept(sockfd, (struct sockaddr *)&ta1, &length);

    for (i = 0; i < 10; i++)
        buf[i] = 0;

    recv(fd1, buf, 100, 0);
    swapconse(buf);
    for(int j=0;j<10;j++){
        printf("\n %d", buf[j]);
    }
}