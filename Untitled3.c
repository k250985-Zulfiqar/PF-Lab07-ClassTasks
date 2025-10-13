#include <stdio.h>
#include <stdbool.h>
int main(){
	int empID[3];
	int i;
	printf("Enter Employee IDs: ");
	for (i=0;i<3;i++){
		scanf("%d",&empID[i]);
	}
	int check,x;
	bool flag=false;
	printf("Enter your ID for verification: ");
	scanf("%d",&check);
	
	for (x=0;x<3;x++){
		if(check==empID[x]){
			flag=true;
		}
	}

//	
//	do {
//		if (check==empID[x]){
//			flag=1;
//			
//		}else{
//			flag=0;
//			x++;
//		}
//	}while (x<3);
	if (flag){
		printf("ID found!");
		
	}else{
		printf("Not Found!");
	}
	return 0;
}
