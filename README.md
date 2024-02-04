# Array Template Class

## Overview
The Array Template Class is a C++ template class designed to provide essential array operations with dynamic resizing capabilities. This class supports generic data types, allowing users to create arrays of any type.

## Features
- **Index Access:** Utilize the overloaded `[]` operator for convenient element access.
- **Dynamic Resizing:** The `add` method enables the addition of elements, dynamically resizing the array.
- **Element Removal:** Use the `removeAt` method to remove elements at specific indices.
- **Search Functionality:** The `indexOf` method helps find the index of a specified value.
- **Size Information:** Retrieve the current array length with the `length` method.

## Usage
1. **Include Header File:**
   ```cpp
   #include "array.h"
   ```

2. **Create an Array:**
   ```cpp
   array<int> myArray;
   ```

3. **Access Elements:**
   ```cpp
   int value = myArray[0];
   ```

4. **Dynamic Resizing:**
   ```cpp
   myArray.add(42);
   ```

5. **Remove Elements:**
   ```cpp
   myArray.removeAt(1);
   ```

6. **Search for an Element:**
   ```cpp
   int index = myArray.indexOf(42);
   ```

7. **Get Array Length:**
   ```cpp
   size_t size = myArray.length();
   ```

## Example
```cpp
#include "array.h"

int main() {
    array<double> myArray;
    myArray.add(3.14);
    myArray.add(2.71);
    
    double value = myArray[0];
    
    size_t size = myArray.length();
    
    return 0;
}
```

## Contribution
Feel free to contribute by submitting issues or pull requests. Your feedback and enhancements are highly appreciated.

## License
This Array Template Class is licensed under the MIT License
