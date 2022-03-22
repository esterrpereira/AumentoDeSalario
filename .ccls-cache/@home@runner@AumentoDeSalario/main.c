#include <stdio.h>

int main(void) {
 float salario_atual, novo_salario;

  printf("Digite o seu salário atual: ");
  scanf("%f", &salario_atual);

  if (salario_atual <= 200.00)
  {
    novo_salario = salario_atual + (salario_atual* 13/100);
    printf("Seu novo salário é de: %f ", novo_salario);
  
  }
   else 
    
  if (salario_atual > 200.00 || salario_atual <= 400.00 )
  {
    
    novo_salario = salario_atual + (salario_atual* 11/100);
    printf("Seu novo salário é de: %f ", novo_salario);

  }
    else
    if (salario_atual >= 400.00 && salario_atual <= 800.00)
    {

      novo_salario = salario_atual + (salario_atual* 9/100);
    printf("Seu novo salário é de: %f ", novo_salario);
    }
      else
    
      novo_salario = salario_atual + (salario_atual* 7/100);
    printf("Seu novo salário é de: %f ", novo_salario);
  
}