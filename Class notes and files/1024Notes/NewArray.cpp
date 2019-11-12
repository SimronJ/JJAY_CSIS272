#include "NewArray.h"

// constructor
NewArray::NewArray(unsigned int NewarraySize)
: size{NewarraySize}
{
    arrPtr = new int[size];// create array of the size - allocate memeory
}

// copy constructor
NewArray::NewArray(const NewArray& copyFrom)
: size{copyFrom.size}, arrPtr{new int[size]}// initializer list
{
    for (int i = 0; i < size; i++)
    {
        arrPtr[i] = copyFrom.arrPtr[i];// copy array values
    }
    
}

// destructor
NewArray::~NewArray(){
    //release dynamically allocated array memeory
    delete[] arrPtr;
}

// get size of array 
unsigned int NewArray::getSize() const{
    return size;
}

// overloads assignment operator
const NewArray& NewArray::operator=(const NewArray& rhs){
    //check for self-assignment
    if (this != &rhs)//compare memeory addresses of objects
    {
        //check if sizes are different
        if (this-> size != rhs.size)
        {
            delete[] arrPtr; //release old memeory
            this->size = rhs.size; //update size
            this->arrPtr = new int[size];
        }
        for (int i = 0; i < size; i++)
        {
            this->arrPtr[i] = rhs.arrPtr[i];// copy over values
        }
        
    }
    return *this;
}

bool NewArray::operator==(const NewArray& rhs){
    //check if sizes are different 
    if (this->size != rhs.size)
    {
        return false; //not equal if sizes are different
    }
    //check if any vlaues are different
    for (int i = 0; i < size; i++)
    {
        if (this->arrPtr[i] != rhs.arrPtr[i])// if any values different
        {
            return false;
        }
    }
 //otherwise
 return true;// size and all array
 
}

bool NewArray::operator!=(const NewArray& rhs){
    //return opposite of == operator
    return !(*this == rhs); // compare array objects
}

// to change value in array element
int& NewArray::operator[](int index){
    return arrPtr[index];
}

// to retrieve value in array element
int NewArray::operator[](int index) const{
    return arrPtr[index];
}

// to use cout << 
std::ostream& operator<<(std::ostream& output, const NewArray& arr){
    for (int i = 0; i < arr.size; i++)
    {
        output << arr.arrPtr[i] << " ";//output each value of array
    }
    output << "\n";// new line at end
    return output;// return stream
}

// to use cin >>
std::istream& operator>>(std::istream& input, NewArray& arr){
    for (int i = 0; i < arr.size; i++)
    {
        input >> arr.arrPtr[i];// input each value
    }
    return input;
}

// to add two arrays 
const NewArray& NewArray::operator+=(const NewArray& rhs){

}

// to add a value to every element in an array 
const NewArray& NewArray::operator+(int x){
    for (int i = 0; i < size; i++)
        {
            arrPtr[i] += x;// add x to each value in array
        }
    return *this;
}