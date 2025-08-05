void main() {
	int n;
	printf("Enter Array size = ");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int)*n);
	for(int i =0; i<n; i++) {
		printf("Enetr Array List[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(int i =0; i<n; i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
	int brr[n];
	for(int i = 0 ; i<n; i++) {
		brr[i] = arr[n-1-i];
	}

	for(int i =0; i<n; i++) {
		printf("%d ",brr[i]);
	}
}