#include <stdio.h>

int main(){
	int a[] = {77, 5, 5, 22, 13, 55, 97, 4, 796, 1, 0, 9};
	int i, j, n=sizeof(a)/sizeof(a[0]), temp, swap;

	for (i=1; i<=n-1; i++){
		swap = 0;
		for (j =0; j<n-i; j++){
			if (a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				swap = 1;
			}			
		}
		if (swap==0) break;
	}
	
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
		
	return 0;
}
