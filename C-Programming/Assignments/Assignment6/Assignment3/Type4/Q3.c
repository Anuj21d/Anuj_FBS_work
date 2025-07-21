int startendsum(int, int,int );
void main() {
	int start, end,sum = 0;
	printf("enter start num : ");
	scanf("%d",&start);
	printf("enter end num : ");
	scanf("%d",&end);
	int r = startendsum(start,end,sum);
	printf("Sum = %d",r);
}
int startendsum(int start,int end,int sum) {
	for(int i = start; i<=end; i++) {
		sum= sum +i;
	}
}