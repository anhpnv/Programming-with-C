#include <stdio.h>
/* Experiment to find out what happens when prints's argument string contains
 \c, where c is some character not listed above.*/
 int main(){
  printf("Audible or visual alert. \a\n");  
  printf("Form feed. \f\n");
  printf("This escape, \r, moves the active position to the initial position of the current line.\n");
  printf("Vertical tab \v is tricky, as its behaviour is unspecified under certain conditions.\n");
 }
 
