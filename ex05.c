#include<stdio.h>
#include<string.h>

char consonants(char mystring[30]){
	int i;
	for (i=0; i<=strlen(mystring); i++){
		if (mystring[i]=='a'|| mystring[i]=='e'|| mystring[i]=='i'|| mystring[i]=='o'|| mystring[i]=='u'){
		}
		else {
			printf("%c",mystring[i]);
		}	
	}

}

int main(void){
	char mystring[30]= "this is a code";
	consonants(mystring);
}
