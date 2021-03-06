#include "stdio.h"
#define  N 11

#include "malloc.h"

//选择排序
void selection(int * array, int l, int r);
//插入排序
void insertion(int * array, int l, int r);
//冒泡，抖动排序
void bubble(int * array, int l, int r);
//快速排序
void quicksort(int * array, int l, int r);
//归并排序
void mergesort(int *array, int *tmp, int l, int r);

int main(void) {

	int array[] = { 10,1,2,4,3,9,3,6,6,4,7 };

	//used by mergesort
	int * tmp = (int *)malloc(sizeof(int)*(N));

	//selection(array, 0, N - 1);
	//insertion(array, 0, N - 1);
	//bubble(array, 0, N - 1);
	//quicksort(array, 0, N - 1);

	mergesort(array,tmp,0,N-1);


	for (int i = 0;i < N;i++) {
		printf("%d,",array[i]);
	}

	free(tmp);
	
	return 0;
}