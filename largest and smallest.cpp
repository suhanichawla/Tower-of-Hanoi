#include <stdio.h>
int main(){
	printf("hello world \n");
	int size;
	printf("enter size of array");
	
	scanf("%d",&size);
	int data[size+10];
	printf("enter elements in array");
	int i;
	for(i=0;i<size;i++){
		scanf("%d",&data[i]);
	}
	for(i=0;i<size;i++){
		printf("%d",data[i]);
		printf("  ");
	}
	int j;
	int flag=0;
	for(j=size-1;j>=0;j--){
		for(i=0;i<j;i++){
			if(data[i+1]<data[i]){
				int temp=data[i];
				data[i]=data[i+1];
				data[i+1]=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<size;i++){
		printf("%d",data[i]);
		printf("  ");
	}
	printf("smallest is %d",data[0]);
	printf("largest is %d",data[size-1]);
	
	
	
	return 0;
}

