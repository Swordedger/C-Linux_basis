#include <my_header.h>


int main(int argc,char *argv[]){
    int pipe_fd=open("1.pipe",O_RDONLY);
        sleep(10);
        char buf[1024]={0};
    while(1){
        read(pipe_fd,buf,sizeof(buf));
        printf("read\n");
        sleep(2);
    }
    close(pipe_fd);
    return 0;
}

