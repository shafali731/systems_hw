#include <stdio.h>


int div(int n){
for(int i =1; i<21; i++){
  if (n%i!=0){
    return 1;
  }
}
return 0;
}

int main(){
  int num = 20;
  while(div(num)==1){
    num++;
  }
printf("%d \n", num);

}
