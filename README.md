
# Ordenação - Heap Sort

Aqui, está presente o código utilizado no vídeo proposto pela matéria de Estrutura de Dados, do 3 Semestre
do curso de Análise e Desenvolvimento de Sistemas do IF Campos do Jordão.

Sinta-se a vontade para baixa-lo e altera-lo. Meus comentários ainda estão presentes no código.


Você pode assistir o vídeo que fiz referente ao tema, no youtube pelo link: https://youtu.be/jrXSYBs8gQc

A complexidade do algoritmo Heap Sort depende do tamanho da lista de elementos a ser ordenada. 
No pior caso, o algoritmo tem um tempo de execução O(n log n), enquanto que no melhor caso tem um tempo de O(n log n) também.


## Utilização

Para compilar o código em C. Abra seu terminal e execute o comando:

gcc -O filename filename.c

*Não se esqueça de navegar até a pasta onde se encontra o arquivo em C.

Feito isso, basta execultá-lo pelo terminal.

Você pode descomentar as linhas comentadas na função main, para ver o algoritmo 
ordenados outros arrays.
## Alteração

Caso queira permitir que usuarios entrem o tamanho do array e consequentemente o seus elementos.
Implemente o código baixo:

No cabeçalho:

#define MAX_SIZE 100

Substitua função main por:

    int main() {
        int arr[MAX_SIZE];
        int n;

        printf("Digite o tamanho do array: ");
        scanf("%d", &n);

        printf("Digite os elementos do array: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        heap_sort(arr, n);

        printf("Array ordenado: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

    return 0;
}


## Autores

- [Guilherme Souza](https://www.github.com/gsouza-me)

