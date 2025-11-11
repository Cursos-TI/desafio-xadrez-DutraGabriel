#include <stdio.h>

// ========== DECLARAÇÃO DAS FUNÇÕES RECURSIVAS ==========

/*
 * Função: moverTorreRecursivo
 * Descrição: Move a Torre recursivamente em uma direção especificada
 * Parâmetros: 
 *   - casasRestantes: número de casas ainda a serem percorridas
 *   - direcao: string que indica a direção do movimento
 * Retorno: void
 */
void moverTorreRecursivo(int casasRestantes, char direcao[]) {
    // Caso base: quando não há mais casas para mover
    if (casasRestantes <= 0) {
        return;
    }
    
    // Imprime a direção do movimento atual
    printf("%s\n", direcao);
    
    // Chamada recursiva: move para a próxima casa
    moverTorreRecursivo(casasRestantes - 1, direcao);
}

/*
 * Função: moverBispoRecursivo
 * Descrição: Move o Bispo recursivamente na diagonal utilizando loops aninhados
 * Parâmetros:
 *   - casasRestantes: número de casas ainda a serem percorridas
 *   - direcaoVertical: direção vertical do movimento (Cima/Baixo)
 *   - direcaoHorizontal: direção horizontal do movimento (Esquerda/Direita)
 * Retorno: void
 */
void moverBispoRecursivo(int casasRestantes, char direcaoVertical[], char direcaoHorizontal[]) {
    // Caso base: quando não há mais casas para mover
    if (casasRestantes <= 0) {
        return;
    }
    
    // Loops aninhados para simular o movimento diagonal
    // Loop externo: controla o movimento vertical (1 iteração por casa)
    int vertical = 0;
    for (vertical = 0; vertical < 1; vertical++) {
        // Loop interno: controla o movimento horizontal (1 iteração por casa)
        int horizontal = 0;
        for (horizontal = 0; horizontal < 1; horizontal++) {
            // Imprime a combinação das duas direções (diagonal)
            printf("%s %s\n", direcaoVertical, direcaoHorizontal);
        }
    }
    
    // Chamada recursiva: move para a próxima casa diagonal
    moverBispoRecursivo(casasRestantes - 1, direcaoVertical, direcaoHorizontal);
}

/*
 * Função: moverRainhaRecursivo
 * Descrição: Move a Rainha recursivamente em uma direção especificada
 * Parâmetros:
 *   - casasRestantes: número de casas ainda a serem percorridas
 *   - direcao: string que indica a direção do movimento
 * Retorno: void
 */
void moverRainhaRecursivo(int casasRestantes, char direcao[]) {
    // Caso base: quando não há mais casas para mover
    if (casasRestantes <= 0) {
        return;
    }
    
    // Imprime a direção do movimento atual
    printf("%s\n", direcao);
    
    // Chamada recursiva: move para a próxima casa
    moverRainhaRecursivo(casasRestantes - 1, direcao);
}


// ========== FUNÇÃO PRINCIPAL ==========

int main() {
    // Constantes para definir o número de casas a serem movidas
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;
    const int CASAS_CAVALO_VERTICAL = 2;
    const int CASAS_CAVALO_HORIZONTAL = 1;
    
    
    // ========== MOVIMENTO DA TORRE (RECURSIVO) ==========
    printf("=== MOVIMENTO DA TORRE ===\n");
    printf("Movendo 5 casas para a direita (recursivamente):\n");
    
    // Chama a função recursiva para mover a Torre
    moverTorreRecursivo(CASAS_TORRE, "Direita");
    
    printf("\n"); // Linha em branco para separação
    
    
    // ========== MOVIMENTO DO BISPO (RECURSIVO COM LOOPS ANINHADOS) ==========
    printf("=== MOVIMENTO DO BISPO ===\n");
    printf("Movendo 5 casas na diagonal (cima e direita) recursivamente:\n");
    
    // Chama a função recursiva com loops aninhados para mover o Bispo
    moverBispoRecursivo(CASAS_BISPO, "Cima", "Direita");
    
    printf("\n"); // Linha em branco para separação
    
    
    // ========== MOVIMENTO DA RAINHA (RECURSIVO) ==========
    printf("=== MOVIMENTO DA RAINHA ===\n");
    printf("Movendo 8 casas para a esquerda (recursivamente):\n");
    
    // Chama a função recursiva para mover a Rainha
    moverRainhaRecursivo(CASAS_RAINHA, "Esquerda");
    
    printf("\n"); // Linha em branco para separação
    
    
    // ========== MOVIMENTO DO CAVALO (LOOPS COMPLEXOS ANINHADOS) ==========
    printf("=== MOVIMENTO DO CAVALO ===\n");
    printf("Movendo em 'L' (2 casas para cima e 1 casa para a direita):\n");
    
    /*
     * Implementação com loops aninhados complexos
     * Loop externo: controla as etapas do movimento em "L"
     * Loop interno: executa os movimentos de cada etapa
     * Utiliza múltiplas variáveis e condições com continue e break
     */
    
    int etapa = 0;              // Controla qual etapa do movimento (0=vertical, 1=horizontal)
    int totalEtapas = 2;        // Total de etapas no movimento em "L"
    int movimentosRealizados = 0;  // Contador de movimentos por etapa
    int movimentosNecessarios = 0; // Número de movimentos necessários na etapa atual
    
    // Loop externo: itera sobre as duas etapas do movimento em "L"
    for (etapa = 0; etapa < totalEtapas; etapa++) {
        
        // Define quantos movimentos são necessários na etapa atual
        if (etapa == 0) {
            // Primeira etapa: movimento vertical (2 casas para cima)
            movimentosNecessarios = CASAS_CAVALO_VERTICAL;
        } else {
            // Segunda etapa: movimento horizontal (1 casa para a direita)
            movimentosNecessarios = CASAS_CAVALO_HORIZONTAL;
        }
        
        // Reinicia o contador de movimentos para a nova etapa
        movimentosRealizados = 0;
        
        // Loop interno: executa os movimentos da etapa atual
        while (1) { // Loop infinito controlado por break
            
            // Verifica se já realizou todos os movimentos da etapa
            if (movimentosRealizados >= movimentosNecessarios) {
                break; // Sai do loop interno quando completar a etapa
            }
            
            // Verifica condições inválidas (segurança extra)
            if (movimentosRealizados < 0 || movimentosNecessarios < 0) {
                continue; // Pula iterações inválidas (nunca deveria ocorrer)
            }
            
            // Executa o movimento baseado na etapa atual
            if (etapa == 0) {
                // Primeira etapa: imprime movimento vertical (Cima)
                printf("Cima\n");
            } else if (etapa == 1) {
                // Segunda etapa: imprime movimento horizontal (Direita)
                printf("Direita\n");
            }
            
            // Incrementa o contador de movimentos realizados
            movimentosRealizados++;
            
            // Condição adicional: se atingiu o limite, força a saída
            if (movimentosRealizados >= movimentosNecessarios) {
                break; // Sai do loop interno
            }
        }
    }
    
    printf("\n"); // Linha em branco para separação
    printf("=== SIMULACAO CONCLUIDA ===\n");
    
    return 0;
}