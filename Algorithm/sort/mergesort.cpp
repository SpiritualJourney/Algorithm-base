
void merge(int *array,int *tmp,int l,int m,int r) {
	int i, j, k;

	for (i = m + 1;i > l;i--) tmp[i - 1] = array[i-1];
	for (j = m;j < r;j++) tmp[r - j + m] = array[j+1];
	for (k = l;k <= r;k++) {
		if (tmp[j] < tmp[i]) {
			array[k] = tmp[j--];
		}
		else {
			array[k] = tmp[i++];
		}
	}
}
/*
	自顶向下的归并排序算法

	可优化：
		1，小文件用其他算法处理，如插入。
		2，取消递归

	稳定性：由基础排序算法决定
	空间复杂度：O(2N)
	时间复杂度：
*/

void mergesort(int *array, int *tmp, int l, int r) {
	int m = (l + r) / 2;
	if (r <= l)return;
	mergesort(array,tmp,l,m);
	mergesort(array,tmp,m+1,r);
	merge(array,tmp,l,m,r);

}