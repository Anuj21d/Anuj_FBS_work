#include<stdio.h>
void operation(int*,int*,char*);
void main(){
	int a[2],b[2];
	char oprtator ;
    for(int i=0;i<2;i++){
    	printf("Enter the first number[%d]:",i);
	    scanf("%d",&a[i]);
	}
    for(int i=0;i<2;i++){
    	printf("Enter the second number[%d]:",i);
	    scanf("%d",&b[i]);
	}
	for(int i=0;i<2;i++){
		printf("a[%d]: %d ",i,a[i]);
	}
	for(int i=0;i<2;i++){
		printf("b[%d]: %d ",i,b[i]);
	}
	fflush(stdin);
	printf("Enter the oprtator (+,-,*,/,%):");
	scanf("%c",& oprtator);
	operation(a,b,&oprtator);
}
void operation(int* a ,int* b, char* oprtator){
	for(int i=0;i<2;i++){
		int res;

	if(*oprtator=='+') {
		res=a[i]+b[i];
		printf("%d\n",res);
	}else if(*oprtator=='-') {
		res=a[i]-b[i];
		printf("%d\n",res);
	}else if(*oprtator=='*') {
		res=a[i] * b[i];
		printf("%d\n",res);
	}else if(*oprtator=='/') {
		res=a[i] / b[i];
		printf("%d\n",res);
	}else if(*oprtator=='%') {
		res=a[i]%b[i];
		printf("%d\n",res);
	} else{	
	printf("invalid choise\n");
	}
	}
	
}