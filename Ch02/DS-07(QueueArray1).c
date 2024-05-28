#include<stdio.h>
#define SIZE 6

int queue[SIZE];
	int rear = -1; //underflow»óÅÂ 
	int front = 0; 
	
	int add(int data){
		if(rear == SIZE-1){
			printf("Quee is full\n");
			return -1;
		}
		
		queue[++rear] = data;
		return 0;
	} 
	
int delete(void){
	if(front>rear){
		printf("Queue is empty!\n");
		return -1;
	}
	return queue[front++];
}
	
	
int main(){
	 add(10); add(20); add(30);
	 printf("%d\n",delete());
	 printf("%d\n",delete());
	 printf("%d\n",delete());	//30
	 printf("%d\n",delete()); 	//
	 
	 
	 
}
