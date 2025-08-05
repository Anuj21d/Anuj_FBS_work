
void main(){
	int* arr = (int*) malloc(sizeof(int)*5);
	for(int i =0;i<5;i++){
		printf("Enetr Array List[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	for(int i =0;i<5;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	int min = arr[0];
	for(int i =0;i<5;i++){
		if(arr[i]<min){
			min = arr[i];
		}
	}
	printf("Max = %d",max);
	printf("Min = %d",min);
	free(arr);
}