#include <iostream>

void sortArray(int array[], int length) {
  for (int i{0}; i < length - 1; ++i) {
    bool swapped{false};
    for (int currentIndex{0}; currentIndex < length - 1 - i; ++currentIndex) {
      if (array[currentIndex] > array[currentIndex + 1]) {
        int temp{0};
        temp = array[currentIndex + 1];
        array[currentIndex + 1] = array[currentIndex];
        array[currentIndex] = temp;
        swapped = true;
      }
    }
    if (!swapped)
      break;
  }
}

void printArray(int array[], int length) {
  for (int i{0}; i < length; ++i)
    std::cout << array[i];
  return;
}

int main() {
  int array[]{6, 3, 2, 9, 7, 1, 5, 4, 8};
  sortArray(array, static_cast<int>(std::size(array)));
  printArray(array, static_cast<int>(std::size(array)));
  return 0;
}
