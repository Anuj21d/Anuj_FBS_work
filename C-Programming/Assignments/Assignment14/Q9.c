struct Complex{
	int real;
	int imag;
};
void main(){
	struct Complex c1;
	printf("Enter rael value : ");
	scanf("%d",&c1.real);
	
	printf("Enter Imaginary value : ");
	scanf("%d",&c1.imag);

	printf("Complex : %d + %di ",c1.real,c1.imag);
}