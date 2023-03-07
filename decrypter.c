//https://www.geeksforgeeks.org/c-program-to-read-contents-of-whole-file

//https://stackoverflow.com/questions/15180178/find-words-within-a-dictionary-c-programming

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "decrypter.h"

//https://replit.com/@mroliverbrcc/C-Read-text-file#main.c

void dec(void){
  char ogtext[50000],text[27][50000],chara;

  printf("Enter text : ");

  scanf("%c",ogtext);

  scanf("%[^\n]s",ogtext);

for(int x=0; x!=27; x++){
  strcpy(text[x],ogtext);
    }
//shift the characters
for (int n=0; n!=27; ++n){
  for (int i=0; text[n][i] != '\0';++i){
    chara=text[n][i];
    if(isalnum(chara)){
      if(islower(chara)){
        chara=(chara-'a'+n)%26 + 'a';
      }
      if(isupper(chara)){
        chara=(chara-'A'+n)%26 + 'A';
      }
      if(isdigit(chara)){
        chara=(chara-'0'+n)%10 + '0';
      }
    
      }
    text[n][i]=chara;

  }
  printf("%s\n",text[n]);
  }
  //finalbest result output here
  }
  
//doesn't work yet