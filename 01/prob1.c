#include <stdio.h>

int main(){
int sum= 0;
for(int i=0; i<100; i++){
  if(i%3== 0){
    sum+=i;
  }
  else if(i%5==0){
    sum+=i;
  }
}
  printf("%d \n", sum);
  return 0;
}
