#include <stdio.h>
#include <ctype.h>
#include "encrypter.h"

void enc(void){
  char text[500000], ch;

  int key, keyint, upordown;

  // taking user input
  printf("Text to encrypt: ");

  scanf("%c",text);

  scanf("%[^\n]s",text);

  printf("Press (1+ENTER) for shift up\nPress (2+ENTER) for shift down\n");

  scanf("%d", &upordown);

  while (upordown != 1 && upordown != 2){
    printf("INVALID!\nPress (1+ENTER) for shift up\nPress (2+ENTER) for shift down\n");

    scanf("%d", &upordown);
  }

  printf("Enter shift amount: ");

  scanf("%d", & key);

  if (upordown == 2){
    key = 0 - key;
  }

   //numbers shift
  keyint = key;

  //if negative shift
  for(int b=0;key<0;b++){
    keyint = 30 + key;
    key = 26 + key;
  }
  
  // visiting character by character

  for (int i = 0; text[i] != '\0'; ++i) {

    ch = text[i];
    // check for valid character
    if (isalnum(ch)) {

      // lower case characters
      if (islower(ch)) {
      ch = (ch - 'a' + key) % 26 + 'a';
      }
      // uppercase characters
      if (isupper(ch)) {
        ch = (ch - 'A' + key) % 26 + 'A';
      }

      // numbers
      if (isdigit(ch)) {
        ch = (ch - '0' + keyint) % 10 + '0';
      }
    }

    // adding encoded answer 
    text[i] = ch;

  }

  printf("Encrypted message: %s", text);
  }
