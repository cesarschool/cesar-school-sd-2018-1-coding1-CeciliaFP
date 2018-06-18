#include <stdio.h>
/**
 * Implemente a função FizzBizz conforme definida abaixo. A mesma deve receber dois números inteiros não negativos (start e end) e imprimir a partir de start (incluído) até end (excluído) seguindo a mesma lógica do FizzBuzz.
 * 
 * Função: void fizzBizz(int start, int end)
 * Input: inteiros (start < end) determinando os números de início e fim da contagem.
 * Output: utilize a função printf da biblioteca stdio.h e escreva um número ou palavra por linha (\n):
 * 
 */
void fizzBuzz(int start, int end)
{
    printf("\nFizzBuzz::START: %d, %d\n", start, end);
    
    int number = start;
    while(number < end){
      if (number % 3 == 0 && number % 5 == 0){
        printf("FizzBuzz\n");
      }
      else if (number % 3 == 0) {
        printf("Fizz\n");
      }
      else if (number % 5 == 0) {
        printf("Buzz\n");
      }
      else {
        printf ("%d\n",number);
      }
      number = number + 1; 
    }
    
    printf("\nFizzBuzz::END\n");
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: FizzBuzz ###\n");
    
    fizzBuzz(1, 6);
    fizzBuzz(1, 16);
    fizzBuzz(1, 100);
    
    return 0;
}
