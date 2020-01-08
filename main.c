#include <stdio.h>

int main(){
	int n1=0, n2=0;
	int n=0;
	int i=0;
	

	printf("양의 정수 2개 입력:");
	scanf("%d%d",&n1,&n2);
	n=(n1<n2)?n1:n2;
	for(i=n-1;i>=0;i--){
		if(n1%i==0 && n2%i==0){
			break;
		}
	}
	printf("%d와 %d의 최대공약수는 %d이다.",n1,n2,i);
}