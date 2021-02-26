#include<stdio.h>
#define IN 1        /*inside a word*/
#define OUT 0       /*outside a word*/

/*count lines, words and characters in input*/
int main() {
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF){
    ++nc;
    if (c == '\n')
    {++nl;}
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
      --nc;
    }
else if (state == OUT)
    {
      state = IN;
      ++nw;
    }
  }
  printf("%i %i %i\n", nl, nw, nc);

  return 0;
}