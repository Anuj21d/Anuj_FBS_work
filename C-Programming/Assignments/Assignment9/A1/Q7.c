void salary(int*);
void main() {
	int basic[4] = {7000,4000,8000,3000};
	for(int i=0; i<4; i++) {
		printf("basic[%d]: %d \n",i,basic[i]);
	}
	salary(basic);
}
void salary(int* basic) {
	for(int i=0; i<4; i++) {
		double da,ta,hra,totals;

		if(basic[i] <= 5000) {
			da = basic[i] * 0.10;
			ta = basic[i] * 0.20;
			hra = basic[i] * 0.25;
		} else {
			da = basic[i] * 0.15;
			ta = basic[i] * 0.25;
			hra = basic[i] * 0.30;
		}
		totals = da + ta + hra;
		printf("Total Salary Is %lf\n",totals);
	}

}
