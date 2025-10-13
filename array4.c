#include <stdio.h>
int main(){
	int marks[10];
	int i,total=0;
	float avg;
	
	printf("Enter Marks: \n");
	
	for (i=0;i<10;i++){
		scanf("%d",&marks[i]);
	}
	int x;
	for (x=0;x<10;x++){
		total=total + marks[x];
		
	}
	avg=total/10;
	printf("The average marks are, %f",avg);
	return 0;
	
	
}
