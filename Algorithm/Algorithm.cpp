#include "stdio.h"
#define  N 11

void selection(int * array, int l, int r);
void insertion(int * array, int l, int r);
void bubble(int * array, int l, int r);

int main(void) {

	int array[] = { 10,1,2,4,3,9,3,6,6,4,7 };
	bubble(array, 0, N - 1);
	for (int i = 0;i < N - 1;i++) {
		printf("%d,",array[i]);
	}
	
	return 0;
}