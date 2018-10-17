#include<stdio.h>
#include <stdlib.h>
#include <pthread.h>

int arry[1000];
int chunk = 100;
void * sum_chunks(void *args);
int main(){
	int total;
	int  a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
	pthread_t thread1, thread2, thread3, thread4, thread5, thread6, thread7, thread8, thread9, thread10;
	for(int i = 0; i < 1000; i++){
		arry[i] = i+1;
	}
	pthread_create(&thread1, NULL, sum_chunks, (void*)(0));
	pthread_create(&thread2, NULL, sum_chunks, (void*)(100));
	pthread_create(&thread3, NULL, sum_chunks, (void*)(200));
	pthread_create(&thread4, NULL, sum_chunks, (void*)(300));
	pthread_create(&thread5, NULL, sum_chunks, (void*)(400));
	pthread_create(&thread6, NULL, sum_chunks, (void*)(500));
	pthread_create(&thread7, NULL, sum_chunks, (void*)(600));
	pthread_create(&thread8, NULL, sum_chunks, (void*)(700));
	pthread_create(&thread9, NULL, sum_chunks, (void*)(800));
	pthread_create(&thread10, NULL, sum_chunks, (void*)(900));
	
	pthread_join(thread1,(void**) & a1);
	pthread_join(thread2,(void**) & a2);
	pthread_join(thread3,(void**) & a3);
	pthread_join(thread4,(void**) & a4);
	pthread_join(thread5,(void**) & a5);
	pthread_join(thread6,(void**) & a6);
	pthread_join(thread7,(void**) & a7);
	pthread_join(thread8,(void**) & a8);
	pthread_join(thread9,(void**) & a9);
	pthread_join(thread10,(void**) & a10);
	//printf(" %d \n", a1);
	//printf(" %d \n", a2);
	//printf(" %d \n", a3);
	//printf(" %d \n", a4);
	//printf(" %d \n", a5);
	//printf(" %d \n", a6);
	//printf(" %d \n", a7);
	//printf(" %d \n", a8);
	//printf(" %d \n", a9);
	//printf(" %d \n", a10);
	total = a1+ a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10;
	printf("Sum of 0-1000 numbers is: %d \n", total);
}
void * sum_chunks(void *args){
	int temp = 0;
	int start = (int)args;
	int end=start+chunk;
	for(int i = start; i <= end; i++){
		temp +=  i;
	}
	return ((void*)temp);
}