double dot(double a[], double b[], int length) {
	int i;
	double sum=0;   //set to 0
	for (i=0; i<length; i++) { //started at i=0 instead of 1
		sum = sum + a[i]*b[i];
		}
	return sum;
	}
