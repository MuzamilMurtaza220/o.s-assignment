#include<stdio.h>
#include<sys/fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
int main(){
	int val;
	char msg[40];	
	system("clear");
	val=open("pp",O_RDONLY);
	read(val,msg,sizeof(int));
	printf("Received message is %s\n\n: ",msg);

return 0;
}
