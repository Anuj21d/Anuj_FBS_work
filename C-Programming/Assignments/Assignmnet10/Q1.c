void main(){
	char str1[] = "anuj";
	char str2[] = "haveNoOne";
	printf("str1= %s\n",str1);
	printf("str2= %s\n",str2);
	//first fun used for counting length of str
	printf("%d\n",strlen(str1));
	
	//second fun used to copy string
	char str3[100];
	strcpy(str3,"Findsomeone");
	printf("str3 =%s\n",str3);
	
	//3rd fun used to compare two string and return 0 if equal and else -1 and 1 for not equal
	int a = strcmp(str1,str2);
	printf("strcmp()=%d\n",a);
	//4th used to copy n number of character
	char str4[100];
	strncpy(str4,str3,8);
	printf("strncpy()= %s\n",str4);
	//5th used to compare n number of charater
	a = strncmp(str3,str4,4);
	printf("strncmp()=%d\n",a);
	//6th used to append at the end
	strcat(str1,"isAlone");
	printf("strcat()= %s\n",str1);
	//7th used to append n number of character
	strncat(str4,"worktodo",4);
	printf("strncat()= %s\n",str4);
	//8th used to find first first occurance of ch
	char* b = strchr(str2,'N');
	printf("strchr()= %s\n",b);
	//9th used to find last first occurance of ch
	b = strrchr(str3,'n');
	printf("strrchr()= %s\n",b);
	//10th used to find sub string in a string
	char* sub = strstr(str2,"No");
	printf("strstr()= %s\n",sub);
	//11th used to spilt string or used to make token of string from " " or ","
	char tok[] = "Anuj Has Finding";
	char* dem = strtok(tok," ");
	//12th used to replace str allocated bytes with value like"*"
	memset(str1,'*',4);
	printf("memset()= %s\n",str1);
	//13th used to compare first n bytes 
	a = memcmp(str1,str2,5);
	printf("memcmp()= %d\n",a); 
	//14th used to Copies n bytes from src to dest.
	memcpy(str1,str2,4);
	printf("memcpy()= %s\n",str1);
	//15th used to Same as memcpy, but safe for overlapping memory.
	memmove(str2,str3,4);
	printf("memmove()= %s\n",str2);
	//16th used to duplicate a string
	char *copy = strdup(str1);
	printf("strdup()= %s\n",copy);
	//17th used how many characters at the start of a string match a set of allowed characters.
	char s[]="AnujIsLonely";
	char accept[]="Anuj";
	int count = strspn(s,accept);
	printf("strspn()= %d\n",count);
	//18th for reject count
	char s1[]="AnujIsLonely";
	char rej[]="Anuj";
	count = strspn(s1,rej);
	printf("strspn()= %d\n",count);
	//19th used to return first accepted character
	char* c = strpbrk(s,accept);
	printf("strpbrk()= %s\n",c);
	//20th reverse string
	strrev(str4);
	printf("strrev()= %s",str4);
}