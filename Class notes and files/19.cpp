#include <iostream>
#include <utility> // swap function
using namespace std;

void printArray(int[], const int);
void insertionSort(int[], const int);
void bubbleSort(int[], const int);
int binarySearch(int[], const int, const int);

int main() {
  
  const int size = 8;
  int numbers[size] = {9, 4, 15, 12, 20, 2, 8, 18};
  printArray(numbers, size); // print unsorted
  // test either insertion or bubble sort
  //insertionSort(numbers, size); // sort array 
  bubbleSort(numbers, size); //sort array 
  printArray(numbers, size); // print sorted
  // test binary search 
  for (int i = 0; i < 21; i++){ 
    int result = binarySearch(numbers, size, i);
    if (result == -1)
      cout << i << " not found\n";
    else 
      cout << i << " found at [" << result << "]\n";
  }
} // end main

void printArray(int arr[], const int size){
  for (int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  cout << "\n";
}

void insertionSort(int arr[], const int size){
  for (int i = 0; i < size; i++){
    int insert = arr[i]; // current value being sorted 
    int moveTo = i; // track current position 
    while ((moveTo > 0) && (arr[moveTo - 1] > insert)){
      arr[moveTo] = arr[moveTo - 1]; // shift value over 
      moveTo--;
    }// end while
    arr[moveTo] = insert; // insert sorted value 
  }// end for 
}

void bubbleSort(int arr[], const int size){
  bool swapped; // keep track if change made 
  do{
    swapped = false; // reset to false 
    for (int i = 0; i < size - 1; i++){
      if (arr[i] > arr[i+1]){ //if value to right is less
        swap(arr[i], arr[i+1]); // swap values 
        swapped = true; // change to true if swap made
      } // end if 
    } // end for 
  }while (swapped == true); // if change made, loop again 
}

int binarySearch(int arr[], const int size, const int search){
  int low = 0;
  int high = size - 1;
  while (low <= high){
    int middle = (low + high)/2; // find new middle position 
    if (arr[middle] < search)
      low = middle + 1;
    else if (arr[middle] > search)
      high = middle - 1;
    else 
      return middle; // location found 
  } // end while 
  return -1; // not found
}




