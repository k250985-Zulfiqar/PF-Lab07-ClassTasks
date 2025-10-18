#include <stdio.h>

int main() {
    int num[6];
	int temp,i;

    printf("Enter 6 numbers: \n");
    for (i = 0; i < 6; i++){
        scanf("%d",&num[i]);
    }
    
    temp=num[5];
    for (i=5;i>0;i--){
        num[i]=num[i-1];
    }
    printf("\n");
    num[0]=temp;
    printf("New Array: \n");
    for (i=0;i<6;i++){
        printf("%d\n",num[i]);
    }
    printf("\n");
    
    return 0;
}
