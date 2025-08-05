struct Distance{
	int feet;
	int inch;
};
struct Distance storestruct();
void main(){
	struct Distance d1;
	
	d1 = storestruct();

	printf("Distance : %d'%d'' ",d1.feet,d1.inch);
}
struct Distance storestruct(){
	struct Distance temp;
	printf("Enter Feets : ");
	scanf("%d",&temp.feet);
	
	printf("Enter inchs : ");
	scanf("%d",&temp.inch);

	return temp;
}