#include <stdio.h>
#include <string.h>

int main() {
    char senhaCorreta[] = "1234";
    char senhaDigitada[20];

    printf("Digite a senha:\n");

    while(1) {
        scanf("%s", senhaDigitada);

        if(strcmp(senhaDigitada, senhaCorreta) == 0) {
            printf("Senha correta! Acesso liberado.\n");
            break;
        } else {
            printf("Senha incorreta! Tente novamente:\n");
        }
    }

    return 0;
}
