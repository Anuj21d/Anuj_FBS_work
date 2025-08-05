struct Distance{
	int feet;
	int inch;
};
void main(){
	struct Distance d1;
	printf("Enter Feets : ");
	scanf("%d",&d1.feet);
	
	printf("Enter inchs : ");
	scanf("%d",&d1.inch);

	printf("Distance : %d'%d'' ",d1.feet,d1.inch);
}