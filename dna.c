#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Estrutura do nó da fila
struct no_fila {
    char nucleotideo;
    struct no_fila* proximo;
};

// Estrutura da fila
struct fila {
    struct no_fila* inicio;
    struct no_fila* fim;
};

// Inserir um elemento na fila
void inserirFila(struct fila* fila, char nucleotideo) {
    struct no_fila* novoNo = (struct no_fila*)malloc(sizeof(struct no_fila));
    novoNo->nucleotideo = nucleotideo;
    novoNo->proximo = NULL;

    if (fila->inicio == NULL) {
        fila->inicio = novoNo;
        fila->fim = novoNo;
    } else {
        fila->fim->proximo = novoNo;
        fila->fim = novoNo;
    }
}

// Excluir um elemento da fila
void excluirFila(struct fila* fila) {
    if (fila->inicio == NULL) {
        printf("Fila vazia.\n");
    } else {
        struct no_fila* temp = fila->inicio;
        fila->inicio = fila->inicio->proximo;
        free(temp);
    }
}

// Limpar a fila
void limparFila(struct fila* fila) {
    while (fila->inicio != NULL) {
        excluirFila(fila);
    }
}

// Imprimir a fila
void imprimirFila(struct fila* fila) {
    struct no_fila* temp = fila->inicio;
    while (temp != NULL) {
        printf("%c", temp->nucleotideo);
        temp = temp->proximo;
    }
    printf("\n");
}

// Estrutura do nó da pilha
struct no_pilha {
    char nucleotideo;
    struct no_pilha* proximo;
};

// Estrutura da pilha
struct pilha {
    struct no_pilha* topo;
};

// Inserir um elemento na pilha
void inserirPilha(struct pilha* pilha, char nucleotideo) {
    struct no_pilha* novoNo = (struct no_pilha*)malloc(sizeof(struct no_pilha));
    novoNo->nucleotideo = nucleotideo;
    novoNo->proximo = pilha->topo;
    pilha->topo = novoNo;
}

// Excluir um elemento da pilha
void excluirPilha(struct pilha* pilha) {
    if (pilha->topo == NULL) {
        printf("Pilha vazia.\n");
    } else {
        struct no_pilha* temp = pilha->topo;
        pilha->topo = pilha->topo->proximo;
        free(temp);
    }
}

// Limpar a pilha
void limparPilha(struct pilha* pilha) {
    while (pilha->topo != NULL) {
        excluirPilha(pilha);
    }
}

// Imprimir a pilha
void imprimirPilha(struct pilha* pilha) {
    struct no_pilha* temp = pilha->topo;
    while (temp != NULL) {
        printf("%c", temp->nucleotideo);
        temp = temp->proximo;
    }
    printf("\n");
}

// Função para exibir o menu e obter a opção do usuário
int menu() {
    int opcao;
    printf("\n\nLIGAÇÕES ENTRE NUCLETÍDEOS E A COMPLEMENTARIDADE DAS BASES NITROGENADAS DO DNA.\n");
    printf("\n\n =========================---------- MENU ----------=========================\n");
    printf(" 1 | Inserir sequência de nucleotídeos\n");
    printf(" 2 | Imprimir fila e pilha\n");
    printf(" 0 | Sair\n\n");
    printf("Por favor, digite uma opção \n-->  ");
    scanf("%d", &opcao);
    return opcao;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct fila fila;
    fila.inicio = NULL;
    fila.fim = NULL;
    struct pilha pilha;
    pilha.topo = NULL;
    char sequencia[100];

    int opcao = 0;
    while (opcao != 3) {
        opcao = menu();

        switch (opcao) {
            case 1: {
                system("cls");

                // Limpar a fila antes de inserir nova sequência
                limparFila(&fila); 
				// Limpar a pilha antes de inserir nova sequência 
                limparPilha(&pilha);  

				printf("\n\nLIGAÇÕES ENTRE NUCLETÍDEOS E A COMPLEMENTARIDADE DAS BASES NITROGENADAS DO DNA.\n");
				printf("Timina (T) <--> Adenina (A) | Citosina (C) <--> Guanina (G)");
				printf("\n\n ==========================================================================\n\n");
				printf("Digite a sequência de nucleotídeos do DNA (apenas letras e em maiúscula): \n-->  ");
                scanf("%s", sequencia);
                
				int tamanho = strlen(sequencia);
				int i;
				int sequenciaValida = 1;

				for (i = 0; i < tamanho; i++) {
    				if (sequencia[i] != 'A' && sequencia[i] != 'C' && sequencia[i] != 'T' && sequencia[i] != 'G') {
        				sequenciaValida = 0;
        				break;
   					 }
				}  
				if (sequenciaValida) {
    				printf("\n\nSequência de nucleotídeos da entrada de DNA registrada com sucesso!\n\n");
    				for (i = 0; i < tamanho; i++) {
   					 inserirFila(&fila, sequencia[i]);
					}
				}
				else {
    				printf("\nNucleotídeo inválido!\n");
				}
				
                system("pause");
                system("cls");
                break;
            }

            case 2: {
                system("cls");
				pilha.topo = NULL;
				
                // Lista temporária para os elementos da fila
                struct no_fila* lista_temp = fila.inicio;

                while (lista_temp != NULL) {
                    char nucleotideo = lista_temp->nucleotideo;
                    lista_temp = lista_temp->proximo;

                    switch (nucleotideo) {
                        case 'A':
                            inserirPilha(&pilha, 'T');
                            break;
                        case 'T':
                            inserirPilha(&pilha, 'A');
                            break;
                        case 'C':
                            inserirPilha(&pilha, 'G');
                            break;
                        case 'G':
                            inserirPilha(&pilha, 'C');
                            break;
                        default:
                            printf("Nucleotídeo inválido: %c\n", nucleotideo);
                            break;
                    }
                }
				
				printf("\n\nLIGAÇÕES ENTRE NUCLETÍDEOS E A COMPLEMENTARIDADE DAS BASES NITROGENADAS DO DNA.\n");
				printf("Timina (T) <--> Adenina (A) | Citosina (C) <--> Guanina (G) \n");
				printf("\n\n ==========================================================================\n\n");
                
				if (fila.inicio != NULL) {
        		printf("A estrutura da Fila é: ");
        		imprimirFila(&fila);
    			} 
				else {
        		printf("A Fila está vazia.\n");
    			}

    			if (pilha.topo != NULL) {
        		printf("A estrutura da Pilha é: ");
        		imprimirPilha(&pilha);
    			} 
				else {
        		printf("A Pilha está vazia.\n");
    			}
                
                printf("\n\n");
				system("pause");
				system("cls");
                break;
            }

            case 0: {
                system("cls");
                printf("Obrigado! Finalizando o programa...\n\n");
                system("pause");
                break;
            }

            default:
                printf("\nOpção inválida. Tente novamente!\n");
                system("pause");
				system("cls");
                break;
		}
    }

    return 0;
}

