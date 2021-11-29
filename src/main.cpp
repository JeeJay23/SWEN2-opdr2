#include <iostream>
#include <string>
// #include "sortBubble.h"
#include "mergeSort.h"
#include "heapSort.h"

std::string menu = "Choose algo: \nBubble : 1 \nMerge : 2 \nHeap : 3 \n ";

int main()
{
    Merge merge;
    heap heap;
    int input;

    std::cout << menu << std::endl;
    std::cin >> input;

    switch (input)
    {
    case 1:
        //sortBubble();
        break;
    case 2:
        merge.mergeMain();
        break;
    case 3:
        heap.heapMain();
        break;
    }
}