#include <stdio.h>

void heap_sort(int arr[], int n);
void build_max_heap(int arr[], int n);
void max_heapify(int arr[], int i, int n);

int main() {
  //int arr[] = {6, 5, 3, 1, 8, 7, 2, 4}; // medio
  //int arr[] = {8, 7, 6, 5, 4, 3, 2, 1}; // pior
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; // melhor

  //Nesse caso, o algoritmo Heap Sort terá um tempo de execução O(n log n)

  int n = sizeof(arr) / sizeof(arr[0]);
  //sizeof(arr) retorna o tamanho do array em bytes. sizeof(arr[0]) retorna o tamanho do primeiro elemento do array em bytes. Dividindo o tamanho do array pelo tamanho do primeiro elemento, obtemos o número de elementos no array.

  heap_sort(arr, n); // passando 8 nesse caso.

  printf("Array ordenado: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

void heap_sort(int arr[], int n) {
  build_max_heap(arr, n);
  for (int i = n-1; i >= 1; i--) {
    /* Troca o primeiro elemento (maior elemento) com o último elemento do heap */
    int temp = arr[i];
    arr[i] = arr[0];
    arr[0] = temp;
    /* Diminui o tamanho do heap em 1 */
    n--;
    max_heapify(arr, 0, n);
  }
}

void build_max_heap(int arr[], int n) {
  /* Percorre os nós da árvore de trás para a frente */
  for (int i = n/2-1; i >= 0; i--) {
    max_heapify(arr, i, n);
    //a função max_heapify é chamada para manter a propriedade de heap máximo para o nó i e seus filhos. Isso é repetido para cada nó da árvore até que a árvore inteira esteja em forma de heap máximo.
  }
}

void max_heapify(int arr[], int i, int n) {
  int esq = 2*i+1;
  int dir = 2*i+2;
  int maior = i;
  /* Verifica se o filho esquerdo do nó i é maior que o nó i */
  if (esq < n && arr[esq] > arr[maior]) {
    maior = esq;
  }
  /* Verifica se o filho direito do nó i é maior que o nó i */
  if (dir < n && arr[dir] > arr[maior]) {
    maior = dir;
  }
  /* Verifica se o nó i é o maior entre os filhos */
  if (maior != i) {
    int temp = arr[i];
    arr[i] = arr[maior];
    arr[maior] = temp;
    max_heapify(arr, maior, n); //**
  }
}