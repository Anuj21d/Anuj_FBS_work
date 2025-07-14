void main(){
	int mark;
	
	printf("Enter Your marks : ");
	scanf("%d",&mark);
	
	if(mark > 75){
		printf("Your Are Distinction");
	}else if(mark > 65){
		printf("Your Are In First Class");
	}else if(mark > 55){
		printf("Your Are Second Class");
	}else if(mark >= 40){
		printf("Your Are Pass");
	}else{
		printf("You Are Fail");
	}
}