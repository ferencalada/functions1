#include <stdio.h>
#include <string.h>

char problemB (char string1[30], char string2[30]){
	int i, band=0;
    char str;
		for (i = 0; i<=30; i++){
		    if (string1[i]==string2[i]){
		    }
		    else{
		        band++;
		        str = string1[i];
		    }
		}
		if(band == 0){
		    str = '0';
		    return str;
		}
		else{
		    return str;
		}
}
int main (void){
	char string1[30]= "this is string 1";
	char string2[30]="this is string 0";
	printf("the result of problem B is %c", problemB(string1, string2));
	return 0;
}
