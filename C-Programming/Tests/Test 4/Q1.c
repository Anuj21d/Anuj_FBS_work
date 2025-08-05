void main(){
	
	int start,end;
	printf("enter start :");
	scanf("%d",&start);
	printf("enter end :");
	scanf("%d",&end);
	
	for(int i = start;i<=end;i++){
		printf("for %d=",i);
		for(int j =1;j<=i;j++){
			if(i%j==0){
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}