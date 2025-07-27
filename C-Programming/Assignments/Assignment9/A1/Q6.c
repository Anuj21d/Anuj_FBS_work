void case1(int*);
void main() {
	int ch[3]= {'a','A','B'};
	for(int i=0; i<3; i++) {
		printf("ch[%d] : %c\n",i,ch[i]);
	}
	case1(ch);
}
void case1(int* ch) {
	for(int i=0; i<3; i++) {
		if(ch[i]>='A'&& ch[i]<='Z') {
			printf("Upper case\n");
		} else {
			printf ("lower case\n");
		}
	}
}