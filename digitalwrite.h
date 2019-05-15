#include <string.h>
#include <ctype.h>
#include <stdio.h>



void p_letter_A(int i){
  //printf("%d\n",i );
  switch (i) {
    /*
    __ _
   / _` |
  | (_| |
   \__,_|
   */
    case 0:
      printf("       ");
      break;
    case 1:
      printf("  __ _ ");
      break;
    case 2:
      printf(" / _` |");
      break;
    case 3:
      printf("| (_| |");
      break;
    case 4:
      printf(" \\__,_|");
      break;
    case 5:
      printf("       ");
      break;
    default:
      printf("ERROR:Erro ao imprimir linha da letra\n" );

  }
  printf(" ");
}

void p_letter_B(int i){
  //printf("%d\n",i );
  switch (i) {
    /*
    _
   | |__
   | '_ \
   | |_) |
   |_.__/

   */
    case 0:
      printf(" _     ");
      break;
    case 1:
      printf("| |__  ");
      break;
    case 2:
      printf("| '_ \\ ");
      break;
    case 3:
      printf("| |_) |");
      break;
    case 4:
      printf("|_.__/");
      break;
    case 5:
      printf("      ");
      break;
    default:
      printf("ERROR:Erro ao imprimir linha da letra\n" );

  }
  printf(" ");
}

void String_to_Digital(char string[]){
  int aux = 0;
  char letter;
  for (size_t i = 0; i < 6; i++) {
    aux = 0;
    while (string[aux] != '\0' ) {
      letter = toupper(string[aux]);
      //printf("TA errado %c\n",letter );
      switch (letter) {
        case 'A':
          p_letter_A(i);
        break;
        case 'B':
          p_letter_B(i);
          break;
        default:
        printf(" "); // Corrigir problema que,quando existe espaco na string,ele nao printa as proximas letras
      }
      aux++;
    }
    printf("\n");
  }
}
