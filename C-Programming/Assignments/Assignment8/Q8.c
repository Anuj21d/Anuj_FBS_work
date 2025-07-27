void main(){
	int arr[]={1,2,3,4,5};
	int brr[]={6,7,8,9,0};
	printf("first arr");
	for(int i =0;i<5;i++){
		printf("Arr[%d]:%d ",i,arr[i]);
	}
	printf("\n");
	printf("second arr");
	for(int i =0;i<5;i++){
		printf("Arr[%d]:%d ",i,brr[i]);
	}
		printf("\n");
	int size1 = sizeof(arr)/sizeof(arr[0]);
	int size2 = sizeof(brr)/sizeof(brr[0]);
	int size = size1 + size2;
	int merge[size];
	for(int i = 0;i < size1;i++){
		merge[i] = arr[i];
	}
	for(int i = 0;i < size2;i++){
		merge[size1 + i] = brr[i];
	}
	for(int i =0;i<size;i++){
		printf("Arr[%d]:%d ",i,merge[i]);
	}
}