#include "stdio.h"


int Unit1(int param1){
    int footToInch =  ((param1) * 12);;
    return footToInch;
}

void test_Unit1(){
    if(0==Unit1(0))
    printf("Function Works");

    if(12==Unit1(1))
    printf("Function workss");

    else
    printf("Function not work");
}

int main(){
  test_Unit1();
  return 0;
}
