#include<stdio.h>
int euclid(int m, int n){
	int r;
	
	while(r=m%n!=0){
		m = n;
		n = r;
	}
	return n;
	
}
int main(){
	int m,n,temp;
	printf("���� ���� �Է�: ");	
	scanf("%d",&m);
	
	printf("���� ���� �Է�: ");	
	scanf("%d",&n);
	if(m<n){
		temp = m;
		m = n;
		n = temp;
	}
	printf("%d�� %d�� �ִ�����: %d\n",m,n,euclid(m,n));
	return 0;
}

 
