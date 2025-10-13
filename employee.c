#include <stdio.h>
#include <stdbool.h>
int main(){
	int empID[12];
	int i;
	printf("Enter Employee IDs: ");
	for (i=0;i<12;i++){
		scanf("%d",&empID[i]);
	}
	int check,x;
	bool flag=false;
	printf("Enter your ID for verification: ");
	scanf("%d",&check);
	
	for (x=0;x<12;x++){
		if(check==empID[x]){
			flag=true;
		}
	}

	if (flag){
		printf("ID found!");
		
	}else{
		printf("Not Found!");
	}
	return 0;
}
