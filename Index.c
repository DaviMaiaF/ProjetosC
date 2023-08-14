#include <stdio.h>
  
int main(){
    float nota1, nota2, nota3, nota4, media;
    char turno;
    printf("Digite o turno:\n");
    scanf("%c", &turno);

    printf("Digite as notas:\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    scanf("%f", &nota4);
   
    media = (nota1 + nota2 + nota3 + nota4)/4;
    if (media >= 7 && media<= 8){
       media = media + 1;
    } else if (media > 8){
        media = 10;
    }
    
    printf("Media: %f\n", media);
    printf("Aluno do turno %c\n", turno);
   
    if (turno == 'm'){
        printf("Aluno do turno matutino\n");
    } else if (turno == 'n'){
        printf("Aluno do turno noturno\n");
    } else{
        printf("Turno não indentificado\n");
    }


    if (media < 7){
        printf("reprovado\n");
    } else {
        printf("aprovado\n");
    }
    return 0;
    
}
a