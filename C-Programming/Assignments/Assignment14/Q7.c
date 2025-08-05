struct Time{
	int hr;
	int min;
	int sec;
};
void main(){
	struct Time t1;
	printf("Enter Hours : ");
	scanf("%d",&t1.hr);
	
	printf("Enter Mins : ");
	scanf("%d",&t1.min);
	
	printf("Enter Sec : ");
	scanf("%d",&t1.sec);
	
	printf("Time:\n&d : %d : %d",t1.hr,t1.min,t1.sec);
}