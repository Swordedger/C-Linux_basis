#include <my_header.h>


int main(int argc,char *argv[]){
    int fd=open("1.ppipe",O_WRONLY);
    ERROR_CHECK(fd,-1,"open failed");
    char *msg="msgggg";
    write(fd,msg,strlen(msg));
    close(fd);
    return 0;
}

