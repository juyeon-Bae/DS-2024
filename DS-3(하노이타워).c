#include<stdio.h>
 void HanoiTower(int n, char a, char b, char c){// char a : 출발지 변수, b:경유지 변수, c:도착지 변수
 	if(n == 1) 
	 printf("원판 %d, %c -> %c\n",n,a,c);
	 else { //원판 개수가 2개 이상일때 
	 	 HanoiTower(n-1,a,c,a);
		 printf("원판 %d, %c->%c\n",n,a,c);
		 HanoiTower(n-1,b,a,c); 
	 } 
 	
 }
int main(){
	int n = 4; //n : 원판의 개수 
	HanoiTower(n,'A','B','C'); //A :출발지, B: 경유지, C: 도착지
	return 0;
}
