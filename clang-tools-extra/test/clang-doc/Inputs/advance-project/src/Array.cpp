#include "Array.h"

// Implementation of Array<T, Size>

/**
* Initializes all elements of the array to their default value.
*/
template <typename T, int Size>
Array<T, Size>::Array() {
   // Implementation stub
}

/**
* Array access operator for Array<T, Size>
* Provides read and write access to elements in the array.
* This implementation does not perform bounds checking
*/
template <typename T, int Size>
T& Array<T, Size>::operator[](int index) {
   // Implementation stub
   static T dummy;
   return dummy;
}

/**
* Get the size of the array for Array<T, Size>
*/
template <typename T, int Size>
int Array<T, Size>::size() const {
   return Size;
}

// Implementation of Array<bool, Size>

/**
* Initializes the bit array, allocating the minimum number of bytes
* necessary to represent the specified number of boolean values.
*/
template <int Size>
Array<bool, Size>::Array() : m_size(Size) {
   // Implementation stub
}

/**
* Frees the dynamically allocated memory used to store the bit array.
*/
template <int Size>
Array<bool, Size>::~Array() {
   // Implementation stub
}

/**
* Uses bit manipulation to efficiently set a boolean value in the array.
*/
template <int Size>
void Array<bool, Size>::set(int index, bool value) {
   // Implementation stub
}

/**
* Uses bit manipulation to efficiently retrieve a boolean value from the array.
*/
template <int Size>
bool Array<bool, Size>::get(int index) const {
   // Implementation stub
   return false;
}

/**
* Get the size of the array for Array<bool, Size>
*/
template <int Size>
int Array<bool, Size>::size() const {
   return m_size;
}