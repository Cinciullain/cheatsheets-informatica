# C Cheatsheet
**Download PDF: [WIP]()**

## [Exercises](Esercizi/EserciziC.md)

## Table of Contents

- [Environment Setup](#environment-setup)
- [Primitive Data Types](#primitives-data-types)
- [Operators](#operators)
  - [Arithmetics]()
  - [Logical and Relational]()
  - [Bitwise]()
- [Flow Control Structures](#flow-control-structures)
- [Functions](#functions)
  - [Recursion](#recursion)
- [Array](#array)
- [Pointers](#pointers)
- [Strings](#strings)
- [Structs](#strutcs)
- [File Handling](#file-handling)
- [Dynamic Memory Allocation](#dynamic-memory-allocation)
- [Text Formatting](#text-formatting)
  - [Format Specifiers](#format-specifiers)
  - [Escape Sequences](#escape-sequences) 
- [Q & A](#q--a)
- [Extra](#extra)

---

### Environment Setup
To execute C code, you have to compile it. 

- **Linux e MacOS:** you need to execute a few commands:
  - Install the essential packages
    ```
    $ sudo apt-get install build essential
    ```
    
  - Install gcc, the tool to compile and execute the code
    ```
    % sudo apt install gcc
    ```
    
Open the terminal in the folder where your .c is located,  and compile it with the following command
            ```
            $ gcc -o output.o file.c
            ```.
            
Once compiled, execute the code with: ``` $ ./output.o```

- **Windows:** has the necessity to install different packages, I suggest this [guide](https://www.ics.uci.edu/~pattis/common/handouts/mingweclipse/mingw.html).

**NB:** Every OS compile in a different way, so a program compiled and executed on Linux can give different results on MacOS and Windows.

To have more details about the compilation and execution process in C, I suggest this [book](https://www.linuxlinks.com/wp-content/uploads/2019/07/An_Introduction_to_GCC-Brian_Gough.pdf).
            
---

### Primitive Data Types
**char** - Memorize a single character. Dimension: 1 byte

```c
//Definition example
char variable = 'a';
```

**int** - Memorize an integer value. Dimension: 4 bytes

```c
//Definition example
int max = 2147483647;
int min = -2147483648;
```

**short** - As an int, but smaller. Dimension: 2 bytes

```c
//Definition example
short max = 32767;
short min = -32768;
```

**float** - Memorize a floating point value with 6 digits precision. Dimension: 4 bytes

```c
//Definition example
float length = 5.8;
```

**double** - As a float, but bigger, with 14 digits precision. Dimension: 8 bytes.

```c
//Definition example
double var = 12.1531452;
```

**void** - Represents the empty type.

```c
//Definition example
void main(){
    //Nothing to return.
}
```

---

### Operators

#### Arithmetics

| Operators | Example     | Meaning           |
| --------- | :---------: | ----------------- |
| +         | a + b       | Addition          |
| ++        | a++ o ++a   | Increment by 1    |
| -         | a - b       | Subtraction       |
| --        | a-- o --a   | Decrement by 1    |
| *         | a * b       | Multiplication    |
| /         | a / b       | Division          |
| %         | a % b       | Module            |

#### Logical and Relational

d

#### Bitwise

d

---

### Flow Control Structures
wip

#### if-else
wip

#### switch
wip

#### while
wip

#### do-while
wip

#### for
wip

---

### Functions
wip

#### Recursion
wip

---

### Array
wip

---

### Pointers
wip

---

### Strings
wip

---

### Structs
wip

---

### File Handling
wip

---

### Dynamic Memory Allocation
wip

---

### Text Formatting
wip

#### Format Specifiers

v

#### Escape Sequences

v

---

### Q & A
wip

### Extra
wip
