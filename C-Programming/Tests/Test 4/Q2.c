void main(){
	int base,pow;
	printf("enter base :");
	scanf("%d",&base);
	printf("enter power :");
	scanf("%d",&pow);
	int n =1;
	for(int i =0;i<pow;i++){
		n = n * base;
	}
	printf("Power Is : %d",n);
}