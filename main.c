#include <stdio.h>
#include <string.h>
int op = 0;
 
float soma(float a, float b){
    float s = a + b;
    return s;
}

float sub(float a, float b){
    float s = a - b;
    return s;
}
float divi(float a, float b){
    float s = a / b;
    return s;
}
float mul(float a, float b){
    float s = a * b;
    return s;
}
int exe(void);
int end(void);
int main(void);

int main(){
    printf("===============================\n");
    printf("   Calculadora Simples\n");
    printf("===============================\n");
    printf("Selecione uma operação:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair\n");
    printf("Opção: ");
    scanf("%d", &op);
    exe();
}
int exe(){
    if (op == 1){
        float x, y;
        printf("Digite o primeiro número: ");
        scanf("%f", &x);
        printf("Digite o segundo número: ");
        scanf("%f", &y);
        printf("Resultado: %.2f + %.2f = %.2f\n", x, y, soma(x, y));
        end();
    }
    else if(op == 2){
        float x, y;
        printf("Digite o primeiro número: ");
        scanf("%f", &x);
        printf("Digite o segundo número: ");
        scanf("%f", &y);
        printf("Resultado: %.2f - %.2f = %.2f\n", x, y, sub(x, y));
        end();
    }
    else if(op == 3){
        float x, y;
        printf("Digite o primeiro número: ");
        scanf("%f", &x);
        printf("Digite o segundo número: ");
        scanf("%f", &y);
        printf("Resultado: %.2f * %.2f = %.2f\n", x, y, mul(x, y));
        end();
    }
    else if(op == 4){
        float x, y;
        printf("Digite o primeiro número: ");
        scanf("%f", &x);
        printf("Digite o segundo número: ");
        scanf("%f", &y);
        if (y == 0){
            printf("Erro: Divisão por zero não é permitida.\n");
            end();
        }else{
           printf("Resultado: %.2f / %.2f = %.2f\n", x, y, divi(x, y)); 
           end();
        }
                
    }
    else if( op == 5){
       printf("Obrigado por usar a calculadora! Até a próxima.\n");

    }
    else{
        if(op > 5){
            op = 0;
            printf("Nenhuma opção identificada com esse caractere\n");
            printf("Digite uma opção válida, de 1 a 5\n");
            printf("Opção: ");
            scanf("%d", &op);
            exe();
        }else{
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {
            printf("Nenhuma opção identificada com esse caractere\n");
            printf("Digite uma opção válida, de 1 a 5\n");
            printf("Opção: ");
            scanf("%d", &op);
            exe();
            }
        }
        int c;

    }
}
int end(){
    char x;
    printf("Deseja realizar outra operação? (s/n)\n");
    scanf(" %c", &x);
    if (x == 'S' || x == 's') {
        main();
    } else if (x == 'N' || x == 'n') {
        printf("Obrigado por usar a calculadora! Até a próxima.\n");
    } else {
        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
        end();
    }
}



