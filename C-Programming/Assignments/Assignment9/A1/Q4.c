#include<stdio.h>
void check(int*);
void main() {
	int ch[3]={'h','a','e'};
	for(int i =0; i<3; i++) {
		printf("ch[%d] : %c \n",i,ch[i]);
	}
	check(ch);
}
void check(int* ch) {
	for(int i =0 ; i<3; i++) {
		if((ch[i] >= 'A' && ch[i] <= 'Z')||(ch[i] >= 'a' && ch[i] <='z')) {
			if (ch[i] == 'A'|| ch[i] == 'E'|| ch[i] == 'I'|| ch[i] == 'O'|| ch[i]== 'U'||ch[i] == 'a'|| ch[i] == 'e'|| ch[i] == 'i'|| ch[i] == 'o'|| ch[i]== 'u') {
				printf("Vowel\n");
			} else {
				printf("Its consonant\n");
			}
		} else {
			printf("Its Special character\n");
		}
	}


}