void main(){
	int totalmin;
	
	printf("Enter minutes to convert in Hours and minutes : ");
	scanf("%d",&totalmin);
	
	int hours = totalmin / 60;
	int mins = totalmin % 60;
	
	printf("Total Minutes Is %d That Convert into %d Hours and %d Minutes", totalmin ,hours,mins);
}