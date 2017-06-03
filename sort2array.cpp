
int* sort(int* a, int len_a, int* b, int len_b) {
		
	int c[1000], m = 0;

	for (int i = 0, j = 0; i < len_b;) {
		if (a[i] > b[j])
		{
			c[m++] = b[j];
			j++;
		}
		else if (a[i] == b[j])
		{
			c[m++] = a[i];
			c[m++] = b[j];
			i++;
			j++;
		}
		else
		{
			c[m++] = a[i];
			i++;
		}

		if (i == len_a) {
			for (; j < len_b; j++) {
				c[m++] = b[j];
			}
		}

		if (j == len_b) {
			for (; i < len_a; i++) {
				c[m++] = a[i];
			}
		}
	}
	return c;
}
