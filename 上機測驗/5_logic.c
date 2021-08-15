#include <stdio.h>
int total = 22;
int element_a = 12;
int element_b = 10;

int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}

void intersection_set(int a[], int b[]){
	int i, j, find=0, k, c[22]={0}, stop, h;
	
	for(i=0; i<element_a; i++){
		stop=0;
		if(i!=0){
			for(k=0; k<find; k++)
				if(c[k]==a[i]) stop=1;
		}
		if(stop==1) continue;
		
		for(j=0; j<element_b; j++){
			if(a[i]==b[j]) {
				c[find]=a[i];
				find++;
				break;
			}
			 
		}
	}
	qsort(c, find, sizeof(int), cmpfunc);
	printf("1. °}¦Cc = °}¦Ca ¥æ¶° °}¦Cb\n°}¦Cc = ");
	for(i=0; i<find; i++) 
		printf("%d ", c[i]);
	return;	
}

void difference_set(int a[], int b[]){
	int i, j, d[12]={0}, find=0, fg;
	
	for(i=0; i<element_a; i++){
		fg=0;
		for(j=0; j<element_b; j++){
			if(a[i]!=b[j]) fg=1;
			else{
				fg=0;
				break;
			} 	
		}
		if(fg==1){
			d[find]=a[i];
			find++;
		}
	}
	qsort(d, find, sizeof(int), cmpfunc);
	printf("2. °}¦Cd = °}¦Ca ®t¶° °}¦Cb\n°}¦Cd = ");
	for(i=0; i<find; i++) 
		printf("%d ", d[i]);
	return;	
}   

void union_set(int a[], int b[]){
	int i, j, e1[22]={0}, e2[22]={0}, sublist, find, fg, next, count=0;
	
	for(i=0; i<element_a; i++){
		e1[i]=a[i];
	} 
	for(i=0; i<element_a; i++){
		j = i;
		sublist = j + 12;	
		e1[sublist] = b[i];
	}
	qsort(e1, total, sizeof(int), cmpfunc);
	e2[0] = e1[0];
	fg = 0; 
	next = 0;
	for(i=0; i<total; i++){
		if(fg==1) e2[i]=find;
		for(j=next+1; j<total; j++){
			if(e2[i]==e1[j]){
				fg = 0;
				continue;
			} 
			
			if(e2[i]!=e1[j]){
				find = e1[j];
				fg = 1;
				next = j;
				count ++;
				break;
			} 
		}
		
	}
	printf("3. °}¦Ce = °}¦Ca Áp¶° °}¦Cb\n°}¦Ce = ");
	for(i=0; i<=count; i++) printf("%d ", e2[i]);
	return;	
} 


int main(){
	int a[] = {77, 5, 5, 22, 13, 55, 97, 4, 796, 1, 0, 9};
	int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	intersection_set(a, b);
	puts("");
	difference_set(a, b);
	puts("");
	union_set(a, b);

	return 0;
}
