# Arrays in C++

## Aim
To discuss arrays, their functions, operations, and implementation.

---

## What is an Array?

An array is a collection of similar types of data.  
This means every element in an array must be of the same data type.

- Array is a **linear data structure**
- Array is a **non-primitive data type**
- Stores data in **sequential and contiguous memory locations**
- Elements are accessed using **index values**
- Index starts from **0**
- For size `n`, last index is `n-1`
- Arrays have **fixed size** (can simulate dynamic behavior)

---

## Applications

- Used in building complex data structures

---

## Code Implementation

```cpp
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // Declaration of array of size 10
    int array[10];

    // Providing elements at declaration time
    /*
    int n = 2;
    int array1[n] = {2, 4};
    ERROR: Variable-sized object can't be created
    (Compile-time error in standard C++)
    */

    const int n = 2;
    int array1[n] = {2, 4};

    // Printing uninitialized array element
    cout << "array is: " << array[0] << endl;

    // Method 1: Access using indices
    cout << "\nPrinting array1 using indices separately!" << endl;
    cout << "array1[0]: " << array1[0] << endl;
    cout << "array1[1]: " << array1[1] << endl;

    // Method 2: Using for loop
    cout << "\nPrinting array1 using for-loop" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "array1[" << i << "]: " << array1[i] << endl;
    }

    // Method 3: Using for-each loop
    cout << "\nPrinting array1 using for-each loop" << endl;
    for (int x : array1)
    {
        cout << "--> " << x << endl;
    }

    return 0;
}
```

---

## Notes

- Accessing uninitialized array elements may give **garbage values**
- Standard C++ does **not allow variable-sized arrays**
- Some compilers like GCC may allow it as an extension

---
