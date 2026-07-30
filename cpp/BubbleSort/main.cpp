#include <iostream>

void sortArray(int array[], int length) { // it sorts the array

  for (int i{0}; i < length - 1; ++i) {
    bool swapped{false};

    for (int currentIndex{0}; currentIndex < length - 1 - i; ++currentIndex) {
      if (array[currentIndex] >
          array[currentIndex + 1]) { // if the current index is greater than the
                                     // next one it swaps
        int temp{0};
        temp = array[currentIndex + 1];
        array[currentIndex + 1] = array[currentIndex];
        array[currentIndex] = temp;
        swapped = true; // updates if bool swapped to true
      }
    }
    if (!swapped) // check if swapped and if so break
      break;
  }
}

void printArray(int array[], int length) { // it prints all array
  for (int i{0}; i < length; ++i)
    std::cout << array[i] << ' ';
  return;
}

int main() {
  int array[]{6, 3, 2, 9, 7, 1, 5, 4, 8};
  sortArray(array, static_cast<int>(std::size(array)));
  printArray(array, static_cast<int>(std::size(array)));
  return 0;
}
