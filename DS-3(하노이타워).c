#include<stdio.h>
 void HanoiTower(int n, char a, char b, char c){// char a : ����� ����, b:������ ����, c:������ ����
 	if(n == 1) 
	 printf("���� %d, %c -> %c\n",n,a,c);
	 else { //���� ������ 2�� �̻��϶� 
	 	 HanoiTower(n-1,a,c,a);
		 printf("���� %d, %c->%c\n",n,a,c);
		 HanoiTower(n-1,b,a,c); 
	 } 
 	
 }
int main(){
	int n = 4; //n : ������ ���� 
	HanoiTower(n,'A','B','C'); //A :�����, B: ������, C: ������
	return 0;
}
