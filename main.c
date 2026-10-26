#include <stdio.h>
#include <stdlib.h> // Necessário para a função system()
#include <string.h>

int estoque_pizzas[4] = {10, 10, 10, 10};
int estoque_bebidas[4] = {15, 10, 20, 12};
int estoque_sobremesas[4] = {8, 5, 10, 6};

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void processar_pedido(const char* nome, int *estoque) {
    if (*estoque > 0) {
        (*estoque)--;
        printf("\nVoce escolheu: %s. Pedido confirmado! (Restante no estoque: %d)\n", nome, *estoque);
    } else {
        printf("\nOps! %s esta ESGOTADO no estoque.\n", nome);
    }
}

void ver_estoque() {
    limpar_tela();
    printf("=== RELATORIO DE ESTOQUE ===\n");
    
    printf("\n[Pizzas]\n");
    printf("1 - Calabresa: %d\n", estoque_pizzas[0]);
    printf("2 - Margherita: %d\n", estoque_pizzas[1]);
    printf("3 - Quatro Queijos: %d\n", estoque_pizzas[2]);
    printf("4 - Frango com Catupiry: %d\n", estoque_pizzas[3]);

    printf("\n[Bebidas]\n");
    printf("1 - Refrigerante: %d\n", estoque_bebidas[0]);
    printf("2 - Suco Natural: %d\n", estoque_bebidas[1]);
    printf("3 - Agua Mineral: %d\n", estoque_bebidas[2]);
    printf("4 - Cerveja: %d\n", estoque_bebidas[3]);

    printf("\n[Sobremesas]\n");
    printf("1 - Pudim de Leite: %d\n", estoque_sobremesas[0]);
    printf("2 - Petit Gâteau: %d\n", estoque_sobremesas[1]);
    printf("3 - Mousse de Maracuja: %d\n", estoque_sobremesas[2]);
    printf("4 - Brownie com Sorvete: %d\n", estoque_sobremesas[3]);
}

void pizzas() {
    int opcao;
    
    do {
        printf("\n--- MENU DE PIZZAS ---\n");
        printf("1 - Calabresa (Qtd: %d)\n", estoque_pizzas[0]);
        printf("2 - Margherita (Qtd: %d)\n", estoque_pizzas[1]);
        printf("3 - Quatro Queijos (Qtd: %d)\n", estoque_pizzas[2]);
        printf("4 - Frango com Catupiry (Qtd: %d)\n", estoque_pizzas[3]);
        printf("0 - Voltar ao menu anterior\n");
        printf("Escolha o sabor: ");
        scanf("%d", &opcao);

        limpar_tela();

        switch (opcao) {
            case 0:
                printf("Voltando ao menu principal...\n");
                break;
            case 1:
                processar_pedido("Calabresa", &estoque_pizzas[0]);
                break;
            case 2:
                processar_pedido("Margherita", &estoque_pizzas[1]);
                break;
            case 3:
                processar_pedido("Quatro Queijos", &estoque_pizzas[2]);
                break;
            case 4:
                processar_pedido("Frango com Catupiry", &estoque_pizzas[3]);
                break;
            default:
                printf("Sabor invalido!\n");
                break;
        }
    } while (opcao != 0);
}

void Bebidas() { 
    int opcao; 
    do { 
        printf("\n--- MENU DE BEBIDAS ---\n"); 
        printf("1 - Refrigerante (Qtd: %d)\n", estoque_bebidas[0]); 
        printf("2 - Suco Natural (Qtd: %d)\n", estoque_bebidas[1]); 
        printf("3 - Agua Mineral (Qtd: %d)\n", estoque_bebidas[2]); 
        printf("4 - Cerveja (Qtd: %d)\n", estoque_bebidas[3]); 
        printf("0 - Voltar ao menu anterior\n"); 
        printf("Escolha a bebida: "); 
        scanf("%d", &opcao); 

        limpar_tela();

        switch (opcao) { 
            case 0: 
                printf("Voltando ao menu principal...\n"); 
                break; 
            case 1: 
                processar_pedido("Refrigerante", &estoque_bebidas[0]); 
                break; 
            case 2: 
                processar_pedido("Suco Natural", &estoque_bebidas[1]); 
                break; 
            case 3: 
                processar_pedido("Agua Mineral", &estoque_bebidas[2]); 
                break; 
            case 4: 
                processar_pedido("Cerveja", &estoque_bebidas[3]); 
                break; 
            default: 
                printf("Opcao invalida!\n"); 
                break; 
        } 
    } while (opcao != 0); 
}

void Sobremesas() { 
    int opcao; 
    
    do { 
        printf("\n--- MENU DE SOBREMESAS ---\n"); 
        printf("1 - Pudim de Leite (Qtd: %d)\n", estoque_sobremesas[0]); 
        printf("2 - Petit Gâteau (Qtd: %d)\n", estoque_sobremesas[1]); 
        printf("3 - Mousse de Maracujá (Qtd: %d)\n", estoque_sobremesas[2]); 
        printf("4 - Brownie com Sorvete (Qtd: %d)\n", estoque_sobremesas[3]); 
        printf("0 - Voltar ao menu anterior\n"); 
        printf("Escolha a sobremesa: "); 
        scanf("%d", &opcao); 

        limpar_tela();
        
        switch (opcao) { 
            case 0: 
                printf("Voltando ao menu principal...\n"); 
                break; 
            case 1: 
                processar_pedido("Pudim de Leite", &estoque_sobremesas[0]); 
                break; 
            case 2: 
                processar_pedido("Petit Gâteau", &estoque_sobremesas[1]); 
                break; 
            case 3: 
                processar_pedido("Mousse de Maracujá", &estoque_sobremesas[2]); 
                break; 
            case 4: 
                processar_pedido("Brownie com Sorvete", &estoque_sobremesas[3]); 
                break; 
            default: 
                printf("Opcao invalida!\n"); 
                break; 
        } 
    } while (opcao != 0); 
}

void menu() { 
    int opcao; 
    
    do { 
        printf("\nEscolha uma das opcoes:\n"); 
        printf("1 - Ver Estoque Atual\n"); 
        printf("2 - Pizzas\n"); 
        printf("3 - Bebidas\n"); 
        printf("4 - Sobremesas\n"); 
        printf("0 - Para sair\n"); 
        printf("Opcao: "); 
        scanf("%d", &opcao); 
        
        limpar_tela();

        switch (opcao) { 
            case 0: 
                printf("Saindo do sistema...\n"); 
                break; 
            case 1: 
                ver_estoque(); 
                break; 
            case 2: 
                pizzas(); 
                break; 
            case 3: 
                Bebidas(); 
                break; 
            case 4: 
                Sobremesas(); 
                break; 
            default: 
                printf("Escolha invalida!\n"); 
                break; 
        } 
    } while (opcao != 0); 
} 

int main() { 
    limpar_tela();
    menu(); 
    return 0; 
}