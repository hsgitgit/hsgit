#include <stdio.h>

int main(){
	char c;
	int i,j;
	for(i=1;i<=5;i++){
		for(c='a';c<='g';c++){
			printf("%c",c);
		}
		printf("\n");
		for(j=1;j<=7;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}