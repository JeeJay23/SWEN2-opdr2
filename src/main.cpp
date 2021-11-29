#include <iostream>
#include <string>
// #include "sortBubble.h"
// #include "sortMerge.h"
// #include "sortHeap.h"

std::string menu = "Choose algo: \nBubble : 1 \nMerge : 2 \nHeap : 3 \n ";

int main()
{
    int input;

    std::cout << menu << std::endl;
    std::cin >> input;

    switch (input)
    {
    case 1:
        //sortBubble();
        break;
    case 2:
        //sortMerge();
        break;
    case 3:
        //sortHeap();
        break;
    }
}