void salary();
void main(){
	salary();
}
void salary(){
	int basic = 7000;
	double da,ta,hra,totals;
	
	if(basic <= 5000){
		da = basic * 0.10;
		ta = basic * 0.20;
		hra = basic * 0.25;
	}
	else{
		da = basic * 0.15;
		ta = basic * 0.25;
		hra = basic * 0.30;
	}
	totals = da + ta + hra;
	printf("Total Salary Is %lf",totals);
}