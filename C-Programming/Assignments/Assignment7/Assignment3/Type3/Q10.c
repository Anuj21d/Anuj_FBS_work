void firstlast(int*);
void main(){
	int num;
	printf("enter Num :");
	scanf("%d",&num);
	firstlast(&num);
}
void firstlast(int* num){
	int last,first =0;
	last = *num % 10;
	printf("last Is : %d \n",last);

	for(int i = *num;i>0;){
		first = i %10;
		i = i /10;
	}
	printf("Frist Is : %d \n",first);
	int sum = first + last;
	
	printf("Sum Is : %d",sum);
}