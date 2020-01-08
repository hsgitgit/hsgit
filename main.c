#include <stdio.h>

int main(void){
	char c;
	int i,j;
	for(i=0;i<=10;i++){
		for(j=0;j<=7;j++){
			if(j%2==0){
				printf("%2c",'A'+i);
			}
			else{
				printf("%2d",j);
			}
			
		}
		printf("\n");
	}
}