void swap(int * a, int * b);
int partition(int *array, int l, int r);



/*
��·����
���Ż��㣺
1��С�ļ����������㷨��������롣
2���ظ��ؼ��ֱ��ش���ļ����ɲ���3·���֡�
3���ɳ��������ݹ顣
4��������ֵ�ɶ��ļ����в�����ȡ�������ֵ��

�ȶ��ԣ���
�ռ临�Ӷȣ�O(N)
ʱ�临�Ӷȣ�
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

