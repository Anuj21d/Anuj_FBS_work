void main(){
	int arr=(int*) malloc(sizeof(int)*5);
	for(int i =0;i<5;i++){
		printf("Enetr Array List[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(int i =0;i<5;i++){
		printf("Arr[%d]:%d\n",i,arr[i]);
	}
	printf("After Operation :");
	for(int i = 0;i<5;i+=2){
		printf("Arr[%d]:%d\n",i,arr[i]);
	}
	free(arr);
}