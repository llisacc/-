#include <stdio.h>
#include <stdlib.h>
#define length 103

int* twoSum(int* nums, int numsSize, int target){
    int i, j;
	int *a = (int*)malloc(2*sizeof(int));
	
	for(i=0; i<numsSize; i++){
		for(j=i+1; j<numsSize; j++){
			if(nums[i]+nums[j] == target){
				a[0] = i;
				a[1] = j;
			}
		}	
	}
	return a;
}

int main(){
	int numSize, target, i;
	int nums[length], answer[2];
	int *ptr = answer;
	
	for(i=0; i<length; i++)  nums[i]=0; 
	while(1){
		printf("Input array count:\n");
		scanf("%d", &numSize);
		if(numSize>=2 && numSize<=103) break;
	}
	while(1){
		printf("\nInput target value:\n");
		scanf("%d", &target);
		if(target<=109 && target>=-109) break;
	}
	printf("\nInput array value:\n");
	for(i=0; i<numSize; i++){
		while(1){
			scanf("%d", &nums[i]);
			if(nums[i] <=109 && nums[i]>=-109) break;
			else printf("re-enter\n");
		}	
	} 
	printf("\nnums = [");
	for(i=0; i<numSize-1; i++) printf("%d,", nums[i]);
	printf("%d]\n", nums[numSize-1]);
	printf("\ntarget = %d\n", target);
	ptr = twoSum(nums, numSize, target);	
	printf("\noutput = [%d, ", ptr[0]);
	printf("%d] ", ptr[1]);
	
	return 0;
} 
