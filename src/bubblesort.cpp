#include "bubblesort.h"
#include <iostream>
#include <stdlib.h>

void bubblesort::sort()
{
  int const size = 10;
  int array[size];

  for (int i = 0; i < size; i++)
  {
    array[i] = rand() % 250; //Generate number between 0 to 249
  }

  std::cout << "Given array" << std::endl;
  for (int i = 0; i < size; i++)
  {
    std::cout << array[i];
    std::cout << " ";
  }
  std::cout << std::endl;

  // loop to access each array element
  for (int i = 0; i < size; i++)
    {
      for (int j = i + 1; j < size; j++)
      {
        if (array[j] < array[i])
        {
          int temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
      }
    }

    std::cout << "Sorted array" << std::endl;
    for (int i = 0; i < size; i++)
    {
      std::cout << array[i];
      std::cout << " ";
    }
    std::cout << std::endl;
  }