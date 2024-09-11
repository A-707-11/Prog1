#include <stdio.h>

int main() {
  
  int i;
  int op;
  int value1;
  int value2;
  
  scanf("%c", &op);
  scanf("%d", &value1);
  scanf("%d", &value2);
  
  if(op == '+')
  {
    i = value1 + value2;
  } 
  else if(op == '-')
  {
    i = value1 - value2;
  }
  else if(op == '*')
  {
    i = value1 * value2;
  }
  else if(op == '/')
  {
    i = value1 / value2;
  }
  
  printf("('%c', %d, %d) --> %d", op, value1, value2, i);
  return 0;
}
