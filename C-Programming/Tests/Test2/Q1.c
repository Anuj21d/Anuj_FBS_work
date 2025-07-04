void main(){
	int elecbill,units;
	
	printf("Enter Number of Units : ");
	scanf("%d",&units);
	
	if (units>=1 && units<= 50){
		elecbill = units * 30;
		printf("Electricity Bill Is : %d",elecbill);
	}
	else if(units>=51 && units <= 150){
		elecbill = units * 40;
		printf("Electricity Bill Is : %d",elecbill);
	}
	else{
		elecbill = units * 50;
		printf("Electricity Bill Is : %d",elecbill);
	}
}