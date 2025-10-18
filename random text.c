#include <stdio.h>

int main(){
    char text[100];
    int num[100];
    int i=0,j=0,sum=0;
    
    printf("Write anything: ");
    scanf("%[^\n]",text);
    
    while (text[i] != '\0'){
        if (text[i] >= '0' && text[i] <= '9'){
            num[j] = text[i] -'0';
            sum += num[j];
            j++; 
        }
        i++;
    }
    
    printf("The sum of numbers are, %d.", sum);
    return 0;
}
