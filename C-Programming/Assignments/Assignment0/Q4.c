void main(){
	int a ,b ,temp;
	
	printf("Enter first Num : ");
	scanf("%d",&a);
	
	printf("Enter Second Num : ");
	scanf("%d",&b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("After Swaping a =%d , b=%d", a , b);
}