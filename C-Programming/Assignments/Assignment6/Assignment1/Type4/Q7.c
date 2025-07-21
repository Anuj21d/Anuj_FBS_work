int salary(int);
void main() {
	int basic = 7000;
	double r = salary(basic);
	printf("Total Salary Is %lf",r);
}

int salary(int basic) {
	double da,ta,hra,totals;

	if(basic <= 5000) {
		da = basic * 0.10;
		ta = basic * 0.20;
		hra = basic * 0.25;
	} else {
		da = basic * 0.15;
		ta = basic * 0.25;
		hra = basic * 0.30;
	}
	totals = da + ta + hra;
	return totals;
}