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
    printf("=== SIMULACAO CONCLUIDA ===\n");
    
    return 0;
}