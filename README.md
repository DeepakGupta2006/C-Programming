# C Programming Practice

A collection of C programs written while learning the language. Each program lives in its own folder and covers one concept: basic input/output, operators, number checks, loops, functions, structures and dynamic memory.

## Table of Contents

- [Repository Structure](#repository-structure)
- [Programs](#programs)
- [Getting Started](#getting-started)
- [Concepts Practiced](#concepts-practiced)
- [Work in Progress](#work-in-progress)
- [Author](#author)

## Repository Structure

Every program is a separate Code::Blocks project:

```text
C-Programming/
├── factorial/
│   ├── main.c            # source code
│   ├── factorial.cbp     # Code::Blocks project file
│   └── ...
├── prime.no/
│   ├── main.c
│   └── prime.no.cbp
└── ...
```

The source for each program is always the `main.c` inside its folder.

## Programs

### Basics and Input/Output

| Folder      | Description                                                         |
| ----------- | ------------------------------------------------------------------- |
| `heloworld` | Hello World program                                                 |
| `arryas`    | Character arrays (strings) and variables printed with `%s` and `%d` |
| `roll.no`   | Reads marks of 3 subjects and prints the total                      |

### Arithmetic and Unit Conversion

| Folder                             | Description                                                                 |
| ---------------------------------- | --------------------------------------------------------------------------- |
| `kilometer`                        | Converts kilometers to meters                                               |
| `hours`                            | Converts hours to minutes                                                   |
| `sqr`                              | Square of a number                                                          |
| `project`                          | Basic arithmetic on two numbers                                             |
| `GrossSalary`                      | Gross salary from basic pay, AGP and DA percentage                          |
| `temperature`                      | Celsius to Fahrenheit                                                       |
| `fahrenheittocelciustempconverter` | Fahrenheit to Celsius                                                       |
| `trig`                             | Converts degrees to radians and applies a trigonometric function (`math.h`) |

### Geometry

| Folder                | Description                        |
| --------------------- | ---------------------------------- |
| `areaofcircle`        | Area of a circle                   |
| `Areaofcircumference` | Area and circumference of a circle |
| `areaofsquare`        | Area of a square                   |

### Operators

| Folder                     | Description               |
| -------------------------- | ------------------------- |
| `incrementoperator`        | Post-increment (`a++`)    |
| `decrement`                | Post-decrement (`a--`)    |
| `decrementoperator`        | Post-decrement (`a--`)    |
| `areaoftriangle`           | Post-decrement (`a--`)    |
| `bitwiseandoperator`       | Bitwise AND (`&`)         |
| `bitwiseleftshiftoperator` | Bitwise left shift (`<<`) |

### Number Programs

| Folder                | Description                                   |
| --------------------- | --------------------------------------------- |
| `oddeven`             | Checks whether a number is odd or even        |
| `prime.no`            | Checks whether a number is prime              |
| `PerfectNumber`       | Checks whether a number is a perfect number   |
| `leapyear`            | Leap year check using the ternary operator    |
| `factorial`           | Factorial using recursion                     |
| `naivemodularinverse` | Modular multiplicative inverse by brute force |

### Swapping Values

| Folder         | Technique                         |
| -------------- | --------------------------------- |
| `swap1`        | Using a temporary variable        |
| `swap2`        | Using addition and subtraction    |
| `Swapintegers` | Using addition and subtraction    |
| `swapraise`    | Using XOR, with no third variable |

### Characters

| Folder                          | Description                               |
| ------------------------------- | ----------------------------------------- |
| `uppercasetolowercase`          | Converts an uppercase letter to lowercase |
| `Uppercasetolowercasecharacter` | Converts an uppercase letter to lowercase |

### Loops and Patterns

| Folder                      | Description                               |
| --------------------------- | ----------------------------------------- |
| `simplemultiplicationtable` | Multiplication table of a number up to 10 |
| `starpattern`               | Right-angled triangle star pattern        |

### Structures and Memory

| Folder                    | Description                                                        |
| ------------------------- | ------------------------------------------------------------------ |
| `struct`                  | A `student` structure with name, age and grade                     |
| `dynamicmemoryallocation` | Allocating memory with `malloc()` and formatting with `snprintf()` |

## Getting Started

### Prerequisites

- A C compiler such as [GCC](https://gcc.gnu.org/) (on Windows, [MinGW](https://www.mingw-w64.org/))
- Optional: [Code::Blocks](https://www.codeblocks.org/) to open the `.cbp` project files directly

### Clone the repository

```bash
git clone https://github.com/YOUR-USERNAME/C-Programming.git
cd C-Programming
```

### Compile and run a program

Pick any folder, then compile its `main.c`:

```bash
cd factorial
gcc main.c -o factorial
```

Run it:

```bash
# Linux / macOS
./factorial

# Windows
factorial.exe
```

Programs that include `math.h` (such as `trig`) need the math library linked:

```bash
gcc main.c -o trig -lm
```

### Using Code::Blocks

Open the `.cbp` file inside any folder (for example `factorial/factorial.cbp`), then press **F9** to build and run.

> **Note:** `PerfectNumber` uses `<conio.h>`, which is only available on Windows compilers (MinGW, Turbo C). On Linux or macOS, remove the `#include<conio.h>` and `getch();` lines before compiling.

## Concepts Practiced

- Variables, data types and format specifiers (`%d`, `%f`, `%c`, `%s`)
- Input and output with `printf()` and `scanf()`
- Arithmetic, increment/decrement, bitwise and ternary operators
- Conditional statements (`if` / `else`)
- Loops (`for`) and nested loops
- Functions and recursion
- Strings and character arrays
- Structures (`struct`)
- Dynamic memory allocation (`malloc`)
- Using the math library (`math.h`)

## Work in Progress

Some folders are unfinished experiments that don't compile yet: `first`, `multiplication`, `bitwisecomplementoperator`, `temp c`, `seprate`, `substract` and `areaandcircumference`. The `division`, `muitiple` and `substraction` folders still contain the default Code::Blocks "Hello world" template.

## Author

**Deepak**

---

If this repository helped you, consider giving it a ⭐
