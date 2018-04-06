
void insertion(int *array,int l,int r) {
	
	for (int i = l+1;i < r;i++) {
		int tmp = array[i],j=i;
		while (tmp < array[j-1] && j > l) {
			array[j] = array[j - 1];j--;

		}
		array[j] = tmp;
	}

}