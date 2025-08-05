void main(){
	int hours,min,sec;

	printf("Enter hours");
	scanf("%d",&hours);
	printf("Enter min :");
	scanf("%d",&min);
	printf("Enter Sec :");
	scanf("%d",&sec);
	
	int totalsec;
	totalsec = (hours*3600) +(min*60) +(sec);
	
	printf("Total sec : %d",totalsec);
}