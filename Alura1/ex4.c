#include <stdio.h>
#include <time.h>

int main() {
  time_t tempo = time(NULL);
  printf(ctime(&tempo));

  time(&tempo);
  printf("Outro teste: %s", ctime(&tempo));

  //return 0;

  char n =65;
  char m=66;
  char s=68;
  char o=67;

  printf("%c %c %c %c\n", n, m, s, o);
}