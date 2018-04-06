void swap(int * a, int * b);
int partition(int *array, int l, int r);



/*
单路划分
可优化点：
1，小文件采用其他算法处理，如插入。
2，重复关键字比重大的文件，可采用3路划分。
3，可尝试消除递归。
4，划分中值可对文件进行采样，取合理的中值。

稳定性：否
空间复杂度：O(N)
时间复杂度：
*/
void quicksort(int *array, int l, int r) {
	int i;
	if (r <= l)return;
	i = partition(array,l,r);
	quicksort(array,l,i-1);
	quicksort(array,i+1,r);
}


int partition(int *array, int l, int r) {
	

	int i = l - 1, j = r, val = array[r];

	while (1) {
		while (array[++i] < array[r]);
		while (array[--j] > array[r]);

		if (i >= j)break;
		swap(array+i,array+j);
	}

	swap(array+i,array+r);
	
	return i;

}

//swap
void swap(int * a, int * b) {
	
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

