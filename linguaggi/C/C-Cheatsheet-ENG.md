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
| ++        | a++ or ++a   | Increment by 1    |
| -         | a - b       | Subtraction       |
| --        | a-- or --a   | Decrement by 1    |
| *         | a * b       | Multiplication    |
| /         | a / b       | Division          |
| %         | a % b       | Module            |

#### Logical and Relational

| Operators | Example     | Meaning           |
| --------- | :---------: | ----------------- |
| <         | a < b       | Less than         |
| <=        | a <= b      | Less or equal     |
| >         | a > b       | Greater than      |
| >=        | a >= b      | Greater or equal  |
| &&        | a && b      | Logic AND         |
| &#124;&#124; | a &#124;&#124; b | Logic OR  |
| !            | !a       | Logic NOT |

#### Bitwise

| Operators | Example     | Meaning        |
| --------- | :---------: | ------------------ |
| <<        | a << 1      | Shift a sinistra   |
| >>        | a >> 1      | Shift a destra     |
| &         | a & b       | AND                |
| ^         | a ^ b       | XOR                |
| &#124;    | a &#124; b  | OR                 | 
| ~         | ~ (a)       | C1                 |

---

### Flow Control Structures
These are a fundamental part in programming, they manage the flow of the execution of a program. In C, as other languages, we have 5 of them, explained as follows.

#### if-else
It's a basic, fundamental construct. It is based on the *if* and *else* keywork, and can be used individually, nested, or consecutively.

```c
if(condition)
{
    ...
}
else if(another_condition)
{
    ...   
}
//Gets executed only if the code didn't meet the other conditions
else
{
    ...    
}
```

#### switch
It is used as an alternative to the if-else, to have a cleaner code and easier to maintain. 

```c
switch(expression)
{
    case decision1:
        ...
        //The break lets you exit the switch after executing the code before it
        break; 
        
    case decision2:
        ...
        break;
    .
    .
    .
    case decisionN:
        ...
        break;
        
    /*
    The default case is always the last one in a switch. The code inside it
    gets executed if neither of the indicated cases get activated.
    */
    default:
        //code
}
```

#### while
It's an iterative structure, that executes the code as long as the condition is met

```c
while(condition)
{
    ...
}
```

#### do-while
Like a while, but the difference is that it executes the code at least once.

```c
do
{
    ...
}
while(condition);
```

#### for
A for-loop has two parts: a header specifying the iteration, and a body which is executed once per iteration. The header often declares an explicit loop counter or loop variable, which allows the body to know which iteration is being executed. For-loops are typically used when the number of iterations is known before entering the loop.

```c
for(int i = 0; i < counter; i++)
{
    ...
}
```

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
