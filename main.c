#include <stdio.h>

int main(void){
	int i,j,n,bSize,bCount;
	int rb,cb;

	printf("����� ũ��:");
	scanf("%d",&bSize);
	printf("����� ����: ");
	scanf("%d",&bCount);

	n=bSize * bCount;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			rb=i/bSize;
			cb=j/bSize;
			if((rb+cb)%2==0)
				printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}


