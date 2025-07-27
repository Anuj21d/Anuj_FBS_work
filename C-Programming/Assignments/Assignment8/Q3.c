void main(){
	int arr[5];
	for(int i =0;i<5;i++){
		printf("Enetr Array List[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(int i =0;i<5;i++){
		printf("Arr[%d]:%d\n",i,arr[i]);
	}
	int sum = 0;
	for(int i = 0;i<5;i++){
		sum = sum + arr[i];
	}
	printf("Sum = %d",sum);
}