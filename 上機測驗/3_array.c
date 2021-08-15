#include <stdio.h>
#include <stdlib.h> 

void oddEvenList(int* a, int oddNum, int evenNum, int* oddlist, int* evenlist){
    int i, n1 = 0, n2 = 0;
	
	for(i=0; i<oddNum; i++)  oddlist[i]=0; 
	for(i=0; i<evenNum; i++)  evenlist[i]=0; 
	
	for(i=0; i<10; i++){
		if(a[i]%2){
			oddlist[n1] = a[i];
			n1++;	
		}
		else{
			evenlist[n2] = a[i];
			n2++;
		}
	}
}

int main(){
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i, odd=0, oddNum=0, even=0, evenNum=0, answer1;
	
	int p1=0, p2=0;
	
	for(i=0; i<10; i++){
		if(a[i]%2){
			odd += a[i];
			oddNum += 1; 
			//printf("%d\n", a[i]);
		}
		else{
			even+= a[i];
			evenNum += 1;
		} 
	}
	answer1 =  odd - even;
	printf("odd - even = %d.\n", answer1);
	
	int* ptr1=(int*)malloc(oddNum*sizeof(int));
	int* ptr2=(int*)malloc(evenNum*sizeof(int));
	
	int n1 = 0, n2 = 0;
	for(i=0; i<oddNum; i++)  ptr1[i]=0; 
	for(i=0; i<evenNum; i++)  ptr2[i]=0; 
	
	for(i=0; i<10; i++){
		if(a[i]%2){
			ptr1[n1] = a[i];
			n1++;	
		}
		else{
			ptr2[n2] = a[i];
			n2++;
		}
	}
	
	
	//oddEvenList(a, oddNum, evenNum, ptr1, ptr2);

	printf("odd = ");
	for(i=0; i<oddNum; i++)  printf("%d ", ptr1[i]);
	printf("\neven = ");
	for(i=0; i<evenNum; i++)  printf("%d ", ptr2[i]);
	
	free(ptr1); 
	free(ptr2); 
	
	return 0;
}
