/*
 * Programa: Simulador de Movimentos de Peças de Xadrez
 * Descrição: Simula o movimento de três peças (Torre, Bispo e Rainha)
 *            utilizando diferentes estruturas de repetição
 * Autor: Sistema de Xadrez Simplificado
 */

#include <stdio.h>

int main() {
    // Variáveis para controlar o número de casas movidas
    int casasTorre = 5;      // Torre move 5 casas para a direita
    int casasBispo = 5;      // Bispo move 5 casas na diagonal
    int casasRainha = 8;     // Rainha move 8 casas para a esquerda
    int contador = 0;        // Variável auxiliar para contagem
    
    // ========== MOVIMENTO DA TORRE ==========
    // A Torre move-se em linha reta (horizontal ou vertical)
    // Utilizando estrutura FOR para simular 5 casas para a direita
    
    printf("=== MOVIMENTO DA TORRE ===\n");
    printf("Movendo 5 casas para a direita:\n");
    
    for (contador = 1; contador <= casasTorre; contador++) {
        printf("Direita\n");
    }
    
    printf("\n"); // Linha em branco para separação
    
    
    // ========== MOVIMENTO DO BISPO ==========
    // O Bispo move-se na diagonal
    // Utilizando estrutura WHILE para simular 5 casas na diagonal (cima e direita)
    
    printf("=== MOVIMENTO DO BISPO ===\n");
    printf("Movendo 5 casas na diagonal (cima e direita):\n");
    
    contador = 0; // Reinicia o contador
    while (contador < casasBispo) {
        printf("Cima Direita\n");
        contador++;
    }
    
    printf("\n"); // Linha em branco para separação
    
    
    // ========== MOVIMENTO DA RAINHA ==========
    // A Rainha move-se em todas as direções
    // Utilizando estrutura DO-WHILE para simular 8 casas para a esquerda
    
    printf("=== MOVIMENTO DA RAINHA ===\n");
    printf("Movendo 8 casas para a esquerda:\n");
    
    contador = 0; // Reinicia o contador
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador < casasRainha);
    
    printf("\n"); // Linha em branco para separação
    
    
    // ========== MOVIMENTO DO CAVALO ==========
    // O Cavalo move-se em formato "L": 2 casas em uma direção + 1 casa perpendicular
    // Utilizando LOOPS ANINHADOS (FOR externo e WHILE interno)
    // Movimento: 2 casas para baixo, depois 1 casa para a esquerda
    
    printf("=== MOVIMENTO DO CAVALO ===\n");
    printf("Movendo em 'L' (2 casas para baixo e 1 casa para a esquerda):\n");
    
    // Variáveis para controlar o movimento do Cavalo
    int movimentosVertical = 2;    // Número de casas para baixo
    int movimentosHorizontal = 1;  // Número de casas para esquerda
    int etapa = 0;                 // Controla qual etapa do movimento (0=vertical, 1=horizontal)
    
    // Loop externo FOR: controla as duas etapas do movimento em "L"
    // Etapa 0: movimento vertical (2 casas para baixo)
    // Etapa 1: movimento horizontal (1 casa para esquerda)
    for (etapa = 0; etapa < 2; etapa++) {
        
        if (etapa == 0) {
            // Primeira etapa: movimento vertical (2 casas para baixo)
            contador = 0;
            
            // Loop interno WHILE: executa o movimento para baixo
            while (contador < movimentosVertical) {
                printf("Baixo\n");
                contador++;
            }
        } 
        else {
            // Segunda etapa: movimento horizontal (1 casa para esquerda)
            contador = 0;
            
            // Loop interno WHILE: executa o movimento para esquerda
            while (contador < movimentosHorizontal) {
                printf("Esquerda\n");
                contador++;
            }
        }
    }
    
    printf("\n"); // Linha em branco para separação
    printf("=== SIMULACAO CONCLUIDA ===\n");
    
    return 0;
}