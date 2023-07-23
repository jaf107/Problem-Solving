#include <stdio.h>

int left(int i)
{
    return 2*i;
}

int right(int i)
{
    return 2*i + 1;
}

int parent(int i)
{
    return i/2;
}

void max_heapify(int heap[], int heap_size, int i)
{
    int r, l, largest, t;

    l = left(i);
    r = right(i);
    largest = i;

    if(r <= heap_size && heap[i] < heap[r]){
        largest = r;
    }

    if(l <= heap_size && heap[largest] < heap[l]){
        largest = l;
    }

    if(largest != i){
        t = heap[i];
        heap[i] = heap[largest];
        heap[largest] = t;
        max_heapify(heap, heap_size, largest);
    }
}

void build_heap(int heap[], int heap_size)
{
    for(int i = heap_size/2; i >= 1; i--){
        max_heapify(heap, heap_size, i);
    }
}

void heap_sort(int heap[], int heap_size)
{
    int t;

    for(int i = heap_size; i >= 1; i--){
        t = heap[i];
        heap[i] = heap[1];
        heap[1] = t;
        max_heapify(heap, i-1, 1);
    }
}

int main()
{
    int heap[11];
    int heap_size = 10;

    printf("Heap size = 10.\tPlease input 10 integer for Heap array\n");

    for(int i=1; i<11; i++){
        scanf("%d", &heap[i]);
    }

    printf("\nYour Array .......\n\t\t");

    for(int i=1; i<11; i++){
        printf("%d ", heap[i]);
    }

    build_heap(heap, heap_size);

    printf("\n\n\n \t Now Your Array is Heap\nYour Heap Array ......\n\t\t");

    for(int i=1; i<11; i++){
        printf("%d ", heap[i]);
    }

    heap_sort(heap, heap_size);

    printf("\n\n\n \t Now Your Array is sorted\nYour Array ......\n\t\t");

    for(int i=1; i<11; i++){
        printf("%d  ", heap[i]);
    }
    return 0;
}
