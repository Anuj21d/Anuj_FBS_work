int firstlast();
void main(){
	int a = firstlast();
	printf("Sum Is : %d",a);
}
int firstlast(){
	int num,last,first =0;
	printf("enter Num :");
	scanf("%d",&num);
	
	last = num % 10;
	printf("last Is : %d \n",last);

	for(int i = num;i>0;){
		first = i %10;
		i = i /10;
	}
	printf("Frist Is : %d \n",first);
	int sum = first + last;
	
	return sum;
}