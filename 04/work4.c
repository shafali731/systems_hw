#include <stdio.h>
#include <string.h>

int main(){
  char src[]= "heyyo";
  char dest[20] = "";
  char hi[] = "racecar";
  char bye[20]= "";
  strcpy(dest,src);
  printf("%s\n",dest);
  strncpy(bye,hi,4);
  printf("%s\n",bye);
  return 0;

}
