#include <my_header.h>


int main(int argc,char *argv[]){
    int pipe_fd=open("1.pipe",O_RDONLY);
    while(1){
        write(pipe_fd,"hello",5);
        printf("write\n");
        sleep(5);
    }
    return 0;
}

