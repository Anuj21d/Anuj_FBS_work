void main(){
	int start, end;
	printf("enter start:");
	scanf("%d",&start);
	printf("enter end:");
	scanf("%d",&end);
	int sum = 0;
	for(int i =start ;i<=end;i+=2){
		sum = sum + i;
	}
	printf("Sum = %d",sum);
}