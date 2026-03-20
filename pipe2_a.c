#include <my_header.h>


int main(int argc,char *argv[]){
    int pipe_fd=open("1.pipe",O_RDWR);
    while(1){
        write(pipe_fd,"hello",5);
        printf("write\n");
        sleep(5);
        char buf[60]={0};
        read(pipe_fd,buf,sizeof(buf));
        printf("read:%s\n",buf);
    }
    return 0;
}

