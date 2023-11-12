#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  int ch;
  int state = 0;
  int counter = 0;
  int space = 0;
  char *s = malloc(20*sizeof(char));

  while(1) {
    switch(state) {
      case 0: {
        ch = getc(stdin);
        
        if(ch == '.')
          state = 1;
          
        if(ch == ' ')
          state = 4;
          
        if(ch>='A' && ch<='Z'){
          printf("\nveliko slovo detected");
          state = 2;
        }
        else {
          if(ch == EOF)
            return 0;
          s[counter] = ch;
          counter++;
          state=2;
        }
      }; break;

      case 1: {
        printf("\nDOT\t.\n");
        state = 0;
      }; break;

      case 2: {
      	 printf("\nCWORD\t");
      	 state=0;
      }; break;

      case 3: {
      }; break;

      case 4: {
      	 printf("\nWORD\t");
      	 for(int i=0;i<counter;i++){
      	 	printf("%c",s[i]);
      	 }
      	 counter=0;
      	 state=0;
      }; break;

      case 5: {
      }; break;

      case 6: {
      }; break;
    }
  }
}

