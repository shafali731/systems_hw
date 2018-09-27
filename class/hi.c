#include<stdio.h>
#include<stdlib.h>
int length(char *s){
  int i = 0;
  while(*s){
    i++;
    s++;
  }
  return (i);
}
int main(){
char *s = "hello";
char s1[10] = "hello";
printf("s points to: %p \n", s);
printf("s1 points to: %p \n", s1);
 printf("address of \"hello\": %p\n", &"hello");
// printf("address of \"by\": %p\n", &"by");

// char s[256] = "imagine";
// printf("s points to: %p \n", s);
// printf("address of \"imagine\": %p\n", &"imagine");
//
printf("length of %s, %d \n", "hi", length("hi"));
// sizeof("hi");

}
