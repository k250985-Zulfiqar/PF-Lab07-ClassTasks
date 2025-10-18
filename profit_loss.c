#include <stdio.h>
int main(){
	int num[10];
	int i,sum=0;
	
	printf("Enter profit/loss: \n");
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
	for (i=0;i<10;i++){
		if(num[i]>0){
			sum=sum+num[i];
		}
	}
	printf("Your total profit is, %d",sum);
	return 0;
}
