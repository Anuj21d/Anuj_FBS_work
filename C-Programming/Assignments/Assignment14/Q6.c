#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;
};
void main(){
	struct Date d1;
	printf("Enter Date : ");
	scanf("%d",&d1.day);
    printf("Enter Month :");
    scanf("%d",&d1.month);
    printf("Enter year :");
    scanf("%d",&d1.year);
	printf("Date : %d / %d / %d",d1.day,d1.month,d1.year);
}