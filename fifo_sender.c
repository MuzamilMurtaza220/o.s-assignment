#include<stdio.h>
#include<sys/fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
int main(){
	int val;
	char msg[20];	
	system("clear");
	mkfifo("pp",0666);
	val=open("pp",O_WRONLY);
	printf("\nEnter message: ");
	scanf("%s",msg);
	write(val,msg,sizeof(int));


return 0;
}
