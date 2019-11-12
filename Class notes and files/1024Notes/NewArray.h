#include <iostream>

#ifndef NEWARRAY_H
#define NEWARRAY_H

class NewArray{

  friend std::ostream& operator<<(std::ostream&, const NewArray&);

  friend std::istream& operator>>(std::istream&, NewArray&);

  public:
    NewArray(unsigned int = 10);
    NewArray(const NewArray&);
    ~NewArray();//destructor
    unsigned int getSize() const;

    // overloaded operators
    const NewArray& operator=(const NewArray&);
    bool operator==(const NewArray&);
    bool operator!=(const NewArray&);
    int& operator[](int);
    int operator[](int) const;
    const NewArray& operator+=(const NewArray&);
    const NewArray& operator+(int);

  private:
    unsigned int size;
    int* arrPtr;

};

#endif