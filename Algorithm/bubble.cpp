void bubble(int * array, int l, int r) {
	r--;
	for (int i = l; i < r;i++) {
		for (int j = r;j > i;j--) {
			if (array[j] < array[j - 1]) {
				int tmp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = tmp;
			}

			
			if (array[r-j+l] > array[r - j + l+1]) {
				int tmp = array[r - j + l];
				array[r - j + l] = array[r - j + l+1];
				array[r - j + l+1] = tmp;
			}
			
		}
	}

}