#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */
char firstNonRepeatingChar (char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);
    
    int A = 0;
    int B = 0;
    int repete = 0;
    int end = length -1;

    while (A <= end) {
      B = 0;
      while (B <= end) {
        if (sentence[A] == ' '){
          repete = 0;
          break;
        }
        else if (sentence[A] == sentence[B] && A != B){
          repete = 0;
          break;
        }
        B = B + 1;
        repete = 1;        
      }

      if (repete == 1){
        printf ("%c", sentence[A]);
        printf("\nfirstNonRepeatingChar::END\n");
        return sentence[A];
      }
      A = A + 1;
    }

    printf ("-1");
    
    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
    
    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    firstNonRepeatingChar("arara", 5);
    firstNonRepeatingChar("ovo ovelha", 10);
    
    return 0;
}
