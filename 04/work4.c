#include <stdio.h>
#include <string.h>

int main(){
  char src[]= "heyyo";
  char dest[] = "a";
  char hi[] = "racecar";
  char bye[20]= "";
  strcpy(dest,src);
  printf("printing source: %s\n", src);
  printf("printing destination: %s\n",dest);
  src[0] = "uas";
  printf("printing source mdified: %s\n",src);
  printf("printing destination again: %s\n",dest );
  printf("printing destination again: %s\n",dest );
  strncpy(bye,hi,4);
  printf("printing the dest for second function: %s\n",bye);

  char s0[10]= "hello";
  char s1[]= "hola";
  strcpy(s0, s1); 
  printf("source: %s\n", s0 );
  printf("s1 %s\n", s1);
  return 0;

}
