void main(){
	int arr=(int*) malloc(sizeof(int)*5);
	for(int i =0;i<5;i++){
		printf("Enetr Array List[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(int i =0;i<5;i++){
		printf("Arr[%d]:%d\n",i,arr[i]);
	}
	for(int i = 0;i<5;i++){
		if(arr[i]%2==0){
			printf("Even = %d\n",arr[i]);
		}
		else{
			printf("odd = %d\n",arr[i]);
		}
	}
	free(arr);
}