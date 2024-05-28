#include<stdio.h>
#define SIZE 6

int queue[SIZE];
	int rear = -1;  
	int front = 0; 
	int cnt = 0;
	int add(int data){
		if(cnt==SIZE){
			printf("Circle Quee is full\n");
			return -1;
		}
		
		queue[++rear % SIZE] = data; //++rear % SIZE = 0으로 만들어 처음으로 다시 돌아가게 함  
		cnt++;
		return 0;
	} 
	
int delete(void){
	if(cnt==0){
		printf("Circle Queue is empty!\n");
		return -1;
	}
	cnt--;
	return queue[front++ % SIZE];
	 
}
	
	
int main(){
	 add(10); add(20); add(30);
	   printf("%d\n",delete());
	 printf("%d\n",delete());
	 printf("%d\n",delete());	
	 printf("%d\n",delete()); 
	 add(40);add(50);add(60);add(70);add(80); add(90); 
	 add(100); //overflow 
	 	
	 
	 
	 
}
