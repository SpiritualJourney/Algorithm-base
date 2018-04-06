
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


void mergesort(int *array, int *tmp, int l, int r) {
	int m = (l + r) / 2;
	if (r <= l)return;
	mergesort(array,tmp,l,m);
	mergesort(array,tmp,m+1,r);
	merge(array,tmp,l,m,r);

}