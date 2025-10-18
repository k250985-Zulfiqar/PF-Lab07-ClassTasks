#include <stdio.h>

int main(){
	
    int num[12];
	int i,j,x;
	int count = 0;
    printf("Input 12 Numbers In Array: \n");
    
    for (i=0;i<12;i++){
        scanf("%d", &num[i]);
    }
    
    printf("\nEnter the number to remove: ");
    scanf("%d",&x);
    
    for (i=0;i<12;i++){
        if (num[i]==x){
            count++;
        }else{
            num[i-count] = num[i];
    	}
    }
    
    for (i=0;i<12-count;i++){	
        printf("%d ", num[i]);
    }
    
    return 0;
}
