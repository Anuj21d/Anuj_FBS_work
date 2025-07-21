int pallaidrom(int);
void main() {
	int num;
	printf("Enter (Three Digit NO. Only) Num : ");
	scanf("%d",&num);
	int r = pallaidrom(num);
	if(r==1)
		printf("Num Is Pallaidrom");
	else
		printf("Num Is Not Pallaidrom");
}
int pallaidrom(int num) {

	int rev,r1,r2, r3,q1;

	r3 = num % 10;
	q1 = num / 10;
	r2 = q1 % 10;
	r1 = q1 / 10;

	rev = (r3 * 100) + (r2 * 10) + (r1);
	if (rev == num)
		return 1;

}