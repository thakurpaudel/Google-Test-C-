# Example Project - Google Test C++

This is a simple C++ project that uses **Google Test** for unit testing. The project includes basic mathematical functions (`sum` and `square`) and corresponding unit tests.

## Project Structure
```
Example/
├── Example.cpp      # Implementation file
├── Example.hpp      # Header file
├── Test/
│   ├── ExampleTest.cpp  # Unit tests
├── CMakeLists.txt   # CMake build script
├── googletest/      # Google Test framework (cloned as a submodule)
```

## Cloning the Repository
To set up the project with Google Test, clone the repository and initialize the submodule:
```sh
git clone --recursive https://github.com/thakurpaudel/Google-Test-C-.git
cd Google-Test-C-
```
If you already cloned the repo without `--recursive`, run:
```sh
git submodule update --init --recursive
```

## Building the Project
The project uses **CMake** to build the tests. Follow these steps:
```sh
mkdir build
cd build
cmake ..
make
```

## Running Tests
After a successful build, you can run the tests using:
```sh
./ExampleTest  # Run the compiled test executable
```

## Functions Overview
The project contains the following functions:

### `sum(int a, int b) -> int`
Adds two integers and returns the result.
```cpp
int sum(int a, int b) {
    return a + b;
}
```

### `square(int x) -> int`
Computes the square of a number.
```cpp
int square(int x) {
    return x * x;
}
```

## Writing Unit Tests
Unit tests are written in `ExampleTest.cpp` using Google Test:
```cpp
#include "Example.hpp"
#include <gtest/gtest.h>

struct ExampleTests : public ::testing::Test {
    int *x;
    int GetX() {
        return *x;
    }
    virtual void SetUp() override {
        printf("SetUp\n");
        x = new int(5);
    }
    virtual void TearDown() override {
        printf("TearDown\n");
        delete (x);
    }
};

TEST_F(ExampleTests, SUM) {
    int y = 20;
    int sum = 25;
    int expectedSum = GetX() + y;
    EXPECT_EQ(sum, MAC(GetX(), y));
    EXPECT_EQ(expectedSum, sum);
}

TEST_F(ExampleTests, SQ) {
    int x = GetX();
    int sqNumber = 25;
    int expectedSquare = x * x;
    EXPECT_EQ(sqNumber, square(x));
    EXPECT_EQ(expectedSquare, sqNumber);
}
```

## Running Tests in VS Code
To run tests in **VS Code**, install the **Google Test Adapter** extension and configure your build system properly.

## License
This project is open-source under the MIT License.

---
🚀 Happy Coding!

