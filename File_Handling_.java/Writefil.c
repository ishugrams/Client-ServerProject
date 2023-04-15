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
        return -1;
    }
    else
    {
        printf("file is sucessfully open witj fd %d\n",fd);
    }

    write(fd,"Marvellous",10);

    close(fd);

    return 0;
}