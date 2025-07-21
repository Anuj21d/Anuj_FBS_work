int startendsum();
void main() {
	int a = startendsum();
	printf("Sum = %d",a);
}
int startendsum() {
	int start, end,sum = 0;
	printf("enter start num : ");
	scanf("%d",&start);
	printf("enter end num : ");
	scanf("%d",&end);

	for(int i = start; i<=end; i++) {
		sum= sum +i;
	}
	return sum;
}