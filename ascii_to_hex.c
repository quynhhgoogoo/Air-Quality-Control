#include <stdio.h>
#include <string.h>

void ascii_to_hexa(char[]);

int main(void){
    char data[100];
    printf("Intro word:");
    fgets(data, sizeof(data), stdin);

    ascii_to_hexa(data);
}

void ascii_to_hexa(char word[]){
  int i, len;
  char outword[33];//17:16+1, 33:16*2+1
  len = strlen(word);
    if(word[len-1]=='\n')
        word[--len] = '\0';

    for(i = 0; i<len; i++){
        sprintf(outword+i*2, "%02X", word[i]);
    }
    printf("%s\n", outword);
}
