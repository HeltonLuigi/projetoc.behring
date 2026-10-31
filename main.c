#include <stdio.h>
#include <string.h>
int op = 0;
 
int soma(int a, int b){
    int s = a + b;
    return s;
}

int sub(int a, int b){
    int s = a - b;
    return s;
}
int divi(int a, int b){
    int s = a / b;
    return s;
}
int mul(int a, int b){
    int s = a * b;
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
        int x, y;
        printf("Digite o primeiro número: ");
        scanf("%d", &x);
        printf("Digite o segundo número: ");
        scanf("%d", &y);
        printf("Resultado: %d + %d = %d\n", x, y, soma(x, y));
        end();
    }
    else if(op == 2){
        int x, y;
        printf("Digite o primeiro número: ");
        scanf("%d", &x);
        printf("Digite o segundo número: ");
        scanf("%d", &y);
        printf("Resultado: %d - %d = %d\n", x, y, sub(x, y));
        end();
    }
    else if(op == 3){
        int x, y;
        printf("Digite o primeiro número: ");
        scanf("%d", &x);
        printf("Digite o segundo número: ");
        scanf("%d", &y);
        printf("Resultado: %d * %d = %d\n", x, y, mul(x, y));
        end();
    }
    else if(op == 4){
        int x, y;
        printf("Digite o primeiro número: ");
        scanf("%d", &x);
        printf("Digite o segundo número: ");
        scanf("%d", &y);
        if (y == 0){
            printf("Impossivel dividir por 0\n"); 
            end();
        }
        printf("Resultado: %d / %d = %d\n", x, y, divi(x, y));
        end();
    }
    else if( op == 5){
       printf("Obrigado por usar a calculadora! Até a próxima.\n");

    }
    else{
        printf("Nenhuma opção com esse numero.\n");
        end();
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






