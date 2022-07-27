#include <stdio.h>
int main() {
  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): \n");
  
  scanf("%c", &op);
  printf("Enter numbers: ");
  scanf("%lf %lf", &first, &second);
  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf\n", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    default:
      printf("Error! wrong choice");
  }
}