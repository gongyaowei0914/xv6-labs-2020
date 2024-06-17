#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

//命令格式： sleep time

int main(int argc, char *argv[]){
	 //判断参数数目，sleep、time两个
	if(argc != 2){ 
        fprintf(2,"Usage:%s <num> \n", argv[0]);
        exit(1);
    }
    //将第二个参数time 转换为整形，调用sleep函数
    int ticks = atoi(argv[1]);
    int ret = sleep(ticks);
    exit(ret);
}
