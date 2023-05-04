#include<stdio.h>
#include<conio.h>
int main(){
	char str[100], ch, i;
    printf("Enter any string: ");
    gets(str);
    printf("Enter any character: ");
    scanf("%c", &ch);
    for(i=0; str[i]!='\0'; i++) {
    	if( str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' ||str[i]=='U' ){
    		str[i]=ch;
		}
		
    	
	}
	printf("the end string is: %s",str);
	getch();
	return 0;
}
