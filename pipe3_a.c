#include <my_header.h>


int main(int argc,char *argv[]){
    int pipe_fd=open("1.pipe",O_WRONLY);
    char buf[4096]={0};
    int time=0;
    while(1){
        write(pipe_fd,buf,sizeof(buf));
        printf("write time:%d\n",++time);

    }

    close(pipe_fd);
    return 0;
}

