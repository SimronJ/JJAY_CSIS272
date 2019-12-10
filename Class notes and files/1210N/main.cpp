#include <iostream>
#include "omp.h"

const int size = 1000000;
int numbers[size];

void fillArray(int numbers[]){
    #pragma omp parallel for
    for (int i = 0; i < size; i++)
    {
        numbers[i] = rand()%1000;
    }
}

int sumArray (int numbers[]){
    int total = 0;
    #pragma omp parallel for reduction (+:total)
    for (int i = 0; i < size; i++)
    {
        total += numbers[i];
    }
    return total;
}
int main() 
{
    fillArray(numbers);
    std::cout << sumArray(numbers) << "\n";
    /*
	#pragma omp parallel num_threads(5)
	{
		#pragma omp critical
        std::cout << "hi from thread " << omp_get_thread_num() << "\n"; 
	}
    */
  
	
}