#include "unity.h"
#include "hangman.h"
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_a(void){
   char name[20]="Naman";
   int number=100;
   TEST_ASSERT_EQUAL("Naman",name);
   TEST_ASSERT_EQUAL(100,number);
    
}
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_a);
  return UNITY_END();
}