#include <stdio.h>

//						Leetcode #283

/*
// Brute Force: O(n2)
void moveZeroes(int* nums, int numsSize) {
	for(int i = 0; i < numsSize; i ++){
		for(int j = 0; j < numsSize; j ++){
			if(*(nums + j) == 0 && j != numsSize - 1){
				int temp = *(nums + j);
				*(nums + j) = *(nums + j + 1);
				*(nums + j + 1) = temp;
			}
		}
		
	}	
}*/

void moveZeroes(int* nums, int numsSize) {
	for(int i = 0, j = 0; i < numsSize; i ++){
		if( *(nums + i) != 0 ) {
			if( i != j){
				int temp = *(nums + i);
				*(nums + i) = *(nums + j);
				*(nums + j) = temp;
			}
			j ++;
		}
	}
}

int main(void){
	printf("move zeroes\n");
	
//	int nums[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1}, numsSize = 10; 
	int nums[] = {0, 1, 0, 3, 12}, numsSize = 5; // returns {0, 0, 1, 3, 12} 
//	int nums[] = {0}, numsSize = 1;

	for(int i = 0; i < numsSize; i ++){
		printf("%d ", *(nums + i));
	}
	
	printf("\n");
	moveZeroes(nums, numsSize);

	for(int i = 0; i < numsSize; i ++){
		printf("%d ", *(nums + i));
	}

	printf("\n");
	return 0;
}