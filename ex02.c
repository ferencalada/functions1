#include <stdio.h>
#include <string.h>

int problemA (char string1[30], char string2[30]){
	if ((strlen(string1)-strlen(string2))==0){
		return 0;
	}
	else { return 1;
	}
}

int main (void){
	char string1[30]="this is string 1";
	char string2[30]="this is string 2";
	printf("the result of problem A is %d \n",problemA(string1,string2));

	return 0;
}
