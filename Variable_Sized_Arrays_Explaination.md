
# Array of Vectors in C++

## Introduction
In C++, arrays and vectors are both data structures used to store collections of elements. An array of vectors is a powerful combination that allows us to create a fixed-size array, where each element of the array is a variable-sized vector. This combination is particularly useful in scenarios where we need to store multiple lists or sequences, but each sequence can have a different size.

In this document, we will explain the concept of an array of vectors in C++, how to declare and initialize it, and how to work with it using practical code examples.

## Table of Contents
- [What is an Array of Vectors?](#what-is-an-array-of-vectors)
- [Declaration and Initialization](#declaration-and-initialization)
- [Accessing Elements](#accessing-elements)
- [Adding Elements](#adding-elements)
- [Iterating Over an Array of Vectors](#iterating-over-an-array-of-vectors)
- [Example Code](#example-code)
- [Common Use Cases](#common-use-cases)

## What is an Array of Vectors?

An array of vectors is a C++ construct where:
- We have a fixed-size array.
- Each element in the array is a dynamic-size vector.

This combination gives us the best of both worlds:
- Arrays provide fast, constant-time access to elements.
- Vectors can dynamically resize, allowing flexibility in the number of elements stored.

An array of vectors can be visualized as a 2D structure, where the number of rows is fixed, but the number of columns in each row can vary.

## Declaration and Initialization

### Declaration
An array of vectors can be declared in the following way:

```cpp
#include <vector>

std::vector<int> arr[5];  // Declares an array of 5 vectors of integers
```

Here, `arr` is an array with 5 elements, where each element is a vector of integers (`std::vector<int>`).

### Initialization
You can initialize an array of vectors as follows:

```cpp
arr[0] = {1, 2, 3};
arr[1] = {4, 5};
arr[2] = {6, 7, 8, 9};
arr[3] = {10};
arr[4] = {};  // Empty vector
```

This initializes the array with vectors of varying sizes. The vector at `arr[0]` has 3 elements, the vector at `arr[1]` has 2 elements, and so on.

## Accessing Elements

You can access the elements of the vectors in the array using standard array and vector indexing.

### Accessing a Vector
To access a specific vector, you can simply use the array index:

```cpp
std::vector<int> vec = arr[2];  // Accesses the vector at index 2
```

### Accessing an Element of a Vector
To access a specific element inside a vector, you use two indices: one for the array and one for the vector.

```cpp
int element = arr[2][3];  // Accesses the 4th element (index 3) in the vector at index 2
```

## Adding Elements

You can add elements to the vectors inside the array using the `push_back()` function provided by the `std::vector` class.

```cpp
arr[1].push_back(6);  // Adds 6 to the vector at index 1
```

After this operation, the vector at `arr[1]` will contain `{4, 5, 6}`.

## Iterating Over an Array of Vectors

You can iterate over an array of vectors using a combination of loops.

### Example of Iterating Over an Array of Vectors:
```cpp
for (int i = 0; i < 5; i++) {
    std::cout << "Vector at index " << i << ": ";
    for (int j = 0; j < arr[i].size(); j++) {
        std::cout << arr[i][j] << " ";
    }
    std::cout << std::endl;
}
```

This code will print each vector's elements in the array.

## Example Code

Here is a complete example that demonstrates the creation and manipulation of an array of vectors:

```cpp
#include <iostream>
#include <vector>

int main() {
    // Declare an array of 5 vectors
    std::vector<int> arr[5];
    
    // Initialize vectors
    arr[0] = {1, 2, 3};
    arr[1] = {4, 5};
    arr[2] = {6, 7, 8, 9};
    arr[3] = {10};
    arr[4] = {};  // Empty vector

    // Adding an element to the second vector
    arr[1].push_back(6);

    // Iterating through the array of vectors
    for (int i = 0; i < 5; i++) {
        std::cout << "Vector at index " << i << ": ";
        for (int j = 0; j < arr[i].size(); j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

## Common Use Cases

An array of vectors is useful in various situations such as:
- Storing adjacency lists in graph representations.
- Handling rows of data where each row has a different number of columns.
- Representing variable-length sequences, such as when processing user input or dynamic datasets.

## Conclusion

In this guide, we've covered the basics of working with arrays of vectors in C++. This combination provides a flexible and efficient way to manage collections of variable-sized data sequences. With the ability to dynamically resize vectors and the fixed-size array structure, you can efficiently handle various use cases, including graphs, matrices, and more.
