void main(){
	int Num , square, cube;
	
	printf("Enter Number that You have to find cube and square : ");
	scanf("%d", &Num);
	
	square = Num * Num;
	cube = Num * Num * Num;
	
	printf("Square of Number is %d\n", square);
	printf("Cube of Number is %d",cube);
}