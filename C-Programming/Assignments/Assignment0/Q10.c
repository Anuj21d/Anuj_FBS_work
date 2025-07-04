void main(){
	int sub1 ,sub2 ,sub3 ,sub4 ,sub5 ,totalmarks ,percentage;
	
	sub1 = 50;
	sub2 = 60;
	sub3 = 75;
	sub4 = 80;
	sub5 = 45;
	
	totalmarks = sub1 + sub2 + sub3 + sub4 + sub5;
	
	percentage = (totalmarks / 500) * 100;
	printf("Total Marks Is %d\n",totalmarks);
	printf("Percentage is %d",percentage);
}