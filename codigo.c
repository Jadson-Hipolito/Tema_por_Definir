#include <stdio.h>
int menu = 0;
int main(){
 printf("\nTema por definir\n");
 printf("\nPor ter me juntado depois na cadeira, acabei não participando do dia que os temas foram definidos e como tal acabei não tendo tema ainda, por isso fiz o trabalho sem tema ainda, agora tem duas telas abaixo escolhendo 1 ou 2\n\n");
 scanf("%d", &menu);
 switch (menu) {
   case 1:
     printf("\n███████████████████████████████████████████████████████████████████"
          "█████████\n");
     printf("\nTela 1 ainda sem função\n")   ;
     printf("\n███████████████████████████████████████████████████████████████████"
          "█████████\n");
     break;
   case 2:
     printf("\n███████████████████████████████████████████████████████████████████"
          "█████████\n");
     printf("\nTela 2 ainda sem função\n");
     printf("\n███████████████████████████████████████████████████████████████████"
          "█████████\n");
     break;
 }
}
