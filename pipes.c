#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
int findTempSum(int start, int end, const int arry[]) {
    int ts = 0;
    for (int j = start; j < end; j++) {
        ts = ts + arry[j];
    }
    return ts;
}
int main(){
	int arry[1000];
	int s1[2],s2[2],s3[2],s4[2],s5[2],s6[2],s7[2],s8[2],s9[2],s10[2];
        pipe(s1),pipe(s2),pipe(s3),pipe(s4),pipe(s5),pipe(s6),pipe(s7),pipe(s8),pipe(s9),pipe(s10);
	int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0;
        int sum=0;
        int tempSum=0;
	for(int i=0;i<1000;i++){
		arry[i]=i+1;
	}
	int cpid1=fork();
	if(cpid1==0){
		tempSum=findTempSum(0,100,arry);
		write(s1[1],&tempSum,sizeof(int));
		close(s1[1]);
		exit(0);
	}
	else{
		wait(NULL);
		int cpid2=fork();
		if(cpid2==0){
			tempSum=findTempSum(100,200,arry);
			write(s2[1],&tempSum,sizeof(int));
			close(s2[1]);
			exit(0);
		}
		else{
			wait(NULL);
			int cpid3=fork();
			if(cpid3==0){
				tempSum=findTempSum(200,300,arry);
				write(s3[1],&tempSum,sizeof(int));
				close(s3[1]);
				exit(0);
			}
			else{
				wait(NULL);
				int cpid4=fork();
				if(cpid4==0){
					tempSum=findTempSum(300,400,arry);
					write(s4[1],&tempSum,sizeof(int));
					close(s4[1]);	
					exit(0);
				}
				else{
					wait(NULL);
					int cpid5=fork();
					if(cpid5==0){
						tempSum=findTempSum(400,500,arry);
					write(s5[1],&tempSum,sizeof(int));
					
						close(s5[1]);
						exit(0);
					}
					else{
						wait(NULL);
						int cpid6=fork();
						if(cpid6==0){
							tempSum=findTempSum(500,600,arry);
					write(s6[1],&tempSum,sizeof(int));
					
							close(s6[1]);
							exit(0);
						}
						else{
							wait(NULL);
							int cpid7=fork();
							if(cpid7==0){
								tempSum=findTempSum(600,700,arry);
					write(s7[1],&tempSum,sizeof(int));
								close(s7[1]);
								exit(0);
							}
							else{
								wait(NULL);
								int cpid8=fork();
								if(cpid8==0){
									tempSum=findTempSum(700,800,arry);
                                                                        write(s8[1],&tempSum,sizeof(int));
									close(s8[1]);
									exit(0);
								}
								else{
									wait(NULL);
									int cpid9=fork();
									if(cpid9==0){
										tempSum=findTempSum(800,900,arry);
                                                                            write(s9[1],&tempSum,sizeof(int));
										close(s9[1]);
										exit(0);
									}
									else{
										wait(NULL);
										tempSum=findTempSum(900,1000,arry);
                                                                                write(s10[1],&tempSum,sizeof(int));
										close(s10[1]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	read(s1[0],&a1,sizeof(int));
	read(s2[0],&a2,sizeof(int));
	read(s3[0],&a3,sizeof(int));
	read(s4[0],&a4,sizeof(int));
	read(s5[0],&a5,sizeof(int));
	read(s6[0],&a6,sizeof(int));
	read(s7[0],&a7,sizeof(int));
	read(s8[0],&a8,sizeof(int));
	read(s9[0],&a9,sizeof(int));
	read(s10[0],&a10,sizeof(int));
	sum=sum+a1;
	sum=sum+a2;
	sum=sum+a3;
	sum=sum+a4;
	sum=sum+a5;
	sum=sum+a6;
	sum=sum+a7;
	sum=sum+a8;
	sum=sum+a9;
	sum=sum+a10;
	printf("Sum of first 1000 numbers is  = %d\n\n",sum);
	
	close(s1[0]);
	close(s2[0]);
	close(s3[0]);
	close(s4[0]);
	close(s5[0]);
	close(s6[0]);
	close(s7[0]);
	close(s8[0]);
	close(s9[0]);
	close(s10[0]);
	return 0;
}