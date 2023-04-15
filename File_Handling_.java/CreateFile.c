#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0;

    printf("please enter file name that you want to create\n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);
    if(fd == -1)
    {
        printf("uable to create file\n");
    }
    else
    {
        printf("file is sucessfully created\n");
    }
    return 0;
}