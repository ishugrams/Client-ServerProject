#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0;

    printf("please enter file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("uable to open file\n");
    }
    else
    {
        printf("file is sucessfully open witj fd%d\n",fd);
    }
    return 0;
}