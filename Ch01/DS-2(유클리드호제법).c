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
	printf("양의 정수 입력: ");	
	scanf("%d",&m);
	
	printf("양의 정수 입력: ");	
	scanf("%d",&n);
	if(m<n){
		temp = m;
		m = n;
		n = temp;
	}
	printf("%d와 %d의 최대공약수: %d\n",m,n,euclid(m,n));
	return 0;
}

 
