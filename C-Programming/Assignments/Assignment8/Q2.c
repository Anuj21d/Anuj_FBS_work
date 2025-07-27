void main(){
	int arr[5];
	for(int i =0;i<5;i++){
		printf("Enetr Array List[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(int i =0;i<5;i++){
		printf("Arr[%d]:%d\n",i,arr[i]);
	}
	int num;
	printf("Enter Num For Search : ");
	scanf("%d",&num);
	
	for(int i =0;i<5;i++){
		if(arr[i]==num){
			printf("Num Is found in arr");
		}
	}
	
}