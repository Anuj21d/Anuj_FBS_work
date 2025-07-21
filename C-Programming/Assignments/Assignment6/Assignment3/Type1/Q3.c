void startendsum();
void main() {
	startendsum();
}
void startendsum() {
	int start, end,sum = 0;
	printf("enter start num : ");
	scanf("%d",&start);
	printf("enter end num : ");
	scanf("%d",&end);

	for(int i = start; i<=end; i++) {
		sum= sum +i;
	}
	printf("%d",sum);
}