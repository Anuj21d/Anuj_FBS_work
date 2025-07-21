int graternum();
void main(){
	int num = graternum();
	printf("Grater Num Is : %d",num);
}
int graternum(){
	int a , b ,c;
	
	printf("Enter first Num : ");
	scanf("%d",&a);
	
	printf("Enter Second Num : ");
	scanf("%d",&b);
	
	printf("Enter Third Num : ");
	scanf("%d",&c);
	
	
	if (a>b){
		if(a>c){
			return a;
		}
		else{
			return c;
		}
	}
	else{
		if(b>c){
		return b;
		}
		else{
		return c;
		}
	}
}