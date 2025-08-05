struct Time{
	int hr;
	int min;
	int sec;
};
void storetime(struct Time*);
void main(){
	struct Time t1;
	storetime(&t1);
	display(&t1);
	formattime(&t1);
}
void storetime(struct Time* t){
	printf("Enter Hours : ");
	scanf("%d",&t->hr);
	
	printf("Enter Mins : ");
	scanf("%d",&t->min);
	
	printf("Enter Sec : ");
	scanf("%d",&t->sec);
}
void display(struct Time* t){
	printf("Time:\n %d : %d : %d",t->hr,t->min,t->sec);
}
void formattime(struct Time* t1){
	int totalsec = (t1->hr*3600)+(t1->min*60)+t1->sec;
	
	printf("Total Sec : %d",totalsec);
}