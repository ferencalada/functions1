#include <stdio.h>
#include<string.h>

int palindrome(char string [30]){
	int j, s, c=0;
	for (j=0; j<=strlen(string); j++){
		s=(strlen(string))-(j+1);
		if (string[j]!=string[s]){
			c=c+1;
		}	
		}
	if (c==0){
		return 1;
	}
	else {
		return 0;
	}
	}
int main (void){
	printf("%d",palindrome("elile"));
	return 0;
}
