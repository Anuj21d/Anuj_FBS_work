void main(){
	int num,last,first =0;
	printf("enter Num :");
	scanf("%d",&num);
	
	last = num % 10;
	printf("last Is : %d \n",last);
	while(num>0){
		first = num %10;
		num = num /10;
	}
	printf("Frist Is : %d \n",first);
	int sum = first + last;
	
	printf("Sum Is : %d",sum);
}