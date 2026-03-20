#include <my_header.h>


int main(int argc,char *argv[]){
    int fd=open("1.pipe",O_WRONLY);
    printf("open after\n");

    sleep(30);

    char content[10]={0};

    printf("Hello world\n");
    return 0;
}

