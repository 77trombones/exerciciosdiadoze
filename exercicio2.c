#include <stdio.h>

float main(void) {
  float num1, num2, maior;

  printf("Digite o primeiro número: ");
  scanf("%f", &num1);
  
  printf("Digite o segundo número: ");
  scanf("%f", &num2);

  puts( (num1 > num2) ? "O primeiro é maior!" : "O segundo é maior!" );

  return 0;
}