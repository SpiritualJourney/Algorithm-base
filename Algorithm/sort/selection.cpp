

void selection(int * array, int l, int r) {

	int i, j;
	for (i = l;i<=r;i++) {
		for (j = i + 1;j<=r;j++) {
			if (array[j]<array[i]) {
				//swap
				int tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
	}
}