void display(int*);
void scan(int*);
void main(){
	int arr[5];
	int brr[5];
	int crr[5];
	
	scan(arr);
	printf("first Arr: ");
	display(arr);
	scan(brr);
	printf("\nsecond Arr: ");
	display(brr);
	
	printf("After Add : ");
	for(int i = 0;i<=5;i++){
		crr[i] = arr[i] + brr[i];
	}
	display(crr);
}
void display(int* ptr){
	for(int i =0;i<5;i++){
		printf("%d ,",ptr[i]);
	}
	printf("\n");
}
void scan(int* ptr){
	for(int i =0;i<5;i++){
		printf("Enetr Array List[%d] : ",i);
		scanf("%d",&ptr[i]);
	}
}