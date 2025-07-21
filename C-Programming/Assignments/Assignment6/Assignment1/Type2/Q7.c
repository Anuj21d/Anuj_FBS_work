int salary();
void main() {
	double a = salary();
	printf("Total Salary Is %lf",a);
}

int salary() {
	int basic = 7000;
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