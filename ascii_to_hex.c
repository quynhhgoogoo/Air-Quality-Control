#include <stdio.h>
#include <string.h>

void ascii_to_hexa(char[]);
void byte_length(char word[], int count);

int main(void){
    char data[100];
    printf("Intro word:");
    fgets(data, sizeof(data), stdin);

    ascii_to_hexa(data);
}

void ascii_to_hexa(char word[]){
  int i, len, count;
  char outword[33];//17:16+1, 33:16*2+1
  len = strlen(word);
    if(word[len-1]=='\n')
        word[--len] = '\0';

    for(i = 0; i<len; i++){
        sprintf(outword+i*2, "%02X", word[i]);
    }
    count = 2*i;
    printf("%s\n", outword);

    int byte_total = 5 + count;
    printf("%d", byte_total);

    byte_length(word, count);
}

void byte_length(char word[], int count){
  long int remainder,quotient;
	int i=1,j,temp;
	char hexadecimalNumber[100];

	quotient = count;
	while(quotient!=0) {
		temp = quotient % 16;
		//To convert integer into character
		if( temp < 10)
		          temp =temp + 48; else
		          temp = temp + 55;
		hexadecimalNumber[i++]= temp;
		quotient = quotient / 16;
	}
	printf("\nEquivalent hexadecimal value of decimal number %d: ",count);
	for (j = i -1 ;j> 0;j--)
	      printf("%c",hexadecimalNumber[j]);
}
