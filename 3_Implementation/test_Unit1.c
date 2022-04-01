#include "unity.h"

extern void test_Unit1();

void setUp(void){

}

void tearDown(void){

}

 int main(void){
    UnityBegin(NULL);
    RUN_TEST(test_Unit1);
    return (UnityEnd());
}


