void triangle();
void main(){
	triangle();
}
void triangle(){
		int a ,b, c;
	
	printf("Enter three sides of Triangle : ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a == b && a == c){
		printf("Triangle Is Equialeratal");
	}else if(a == b || a ==c || b ==c){
		printf("Triangle Is Isosceles");
	}else{
		printf("Triangle Is Scalene");
	}
}