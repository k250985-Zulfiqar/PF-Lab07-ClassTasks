#include <stdio.h>
#include <stdbool.h>
int main(){
	
    int num[10];
	int i;
	bool flag=0;  
    printf("Enter 10 numbers: \n");
    for (i=0;i<10;i++){
        scanf("%d ", &num[i]);
    }
    
    for (i=1;i<10;i++){
        if (num[i]<num[i-1]){
            flag=0;
            break;
        }
    }
    
    if(flag==1){
        printf("Array is in Ascending order!");
    }else{
        printf("Array is not in Ascending order!");
	}	
	return 0;
}
