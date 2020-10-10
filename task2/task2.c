#include <stdio.h>
#include <stdlib.h>

typedef int (*Condition)(int a, int b);
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  Condition conditionArray[5];
  char x[20];
  conditionArray[0] = &add;
  conditionArray[1] = &subtract;
  conditionArray[2] = &multiply;
  conditionArray[3] = &divide;
  srand(time(NULL));
  
  int numA = rand()%(UPPER - LOWER + 1) +LOWER;
  int numB = rand()%(UPPER - LOWER + 1) +LOWER;
  
  while(1){
    printf("'a': %d | 'b': %d\nWhat operation do you want to perform? 0:add | 1: subtract | 2: multiply | 3: divide | 4: exit\n", numA, numB);
    scanf("%s", x);
    if(atoi(option) == 4){
      printf("Goodbye.\n");
      break;
    }
    int ans = (*conditionArray[atoi(x)])(numA,numB);
    printf("The answer is: %d\n", ans);
  }
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { 
  printf ("Adding 'a' and 'b'\n"); 
  return a + b; 
}

int multiply (int a, int b){
  printf("Subtracting b from a\n");
  return a - b;
}

int multiply (int a, int b){
  printf("Multiplying a and b\n");
  return a * b;
}

int divide (int a, int b){
  printf("Dividing a and b\n");
  return a / b;
}