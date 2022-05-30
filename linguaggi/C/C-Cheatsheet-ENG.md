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
| ++        | a++ or ++a  | Increment by 1   |
| -         | a - b       | Subtraction       |
| --        | a-- or --a  | Decrement by 1   |
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

| Operators | Example     | Meaning            |
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
They are used to divide the code in smaller pieces, to avoid repetition, make it easier to maintain and modify, and *cleaner*. 

```c
return_type function_name(parameter_type parameter_name)
{
    ...
    return result
}
```

An example can be a function to do an addition:

```c
int addition(int a, int b)
{
    return a + b;
}
```

#### Recursion
It is a very powerfull programming technique, based on the idea of diving a problem in similar, smaller problems, but easier.

```c
int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    
    return (fibonacci(n - 1) + fibonacci(n - 2));
}
```

---

### Array
Arrays are a static collection of datas of the same type. The declaration is as follows:

```c
type array_name[size];
```

Try to use it with some characters:

```c
//Declaring the array with it's content, with a capacity of 3
char array = {a, b, c};
/*
The printf is a function that prints on the monitor what we indicate inside it, in our case the %c
indicates that it is going to take a character from a variable, the one after the comma.
The variable that will be shown is the letter 'a', as the first element of our array is called, 
while the last one will always be in the size -1 position.
*/
printf("%c", array[0]);
```

---

### Pointers
It's a particular type of variable.
There are two fundamental symbols associated to them:
  - `*` Needed to declare or have the value of a pointer.
  - `&` Needed to have the memory address and access the pointer.

They are very versatile in C, and can be used along with arrays:

```c
/*
I declare and array and a pointer. Then, the pointer will have the value of the address of the third object of the array.
*/
int array[4];
int *pointer;
pointer = &array[3];
```

<p align="center">
  <img src="https://publications.gbdirect.co.uk//c_book/figures/5.4.png" />
</p>

---

### Strings
Strings don't exist in C as a type, so they get represented as an array of char, and the last element must always be `\0`.
Some of the most important functions to operate with strings:
  - Length of a string 
  ```c 
  strlen(s); 
  ```
  
  - Compare two stringhs
  ```c
  strcmp(s1, s2);
  ```
  
  - Copy a string inside another one
  ```c
  strcpy(s1, s2);
  ```
  
  - Concatenate a string to another one
  ```c
  strcat(s1, s2);
  ```
---

### Structs
With structures you can create particular types of data, that may contain different types inside of it.

```c
struct student
{
    char name[30];
    char surname[20];
    int id;
    int age;
}; 
```
---

### File Handling
Using and handling files is a very important part in C, I will show the base of it as follows.

- Create a pointer to access the file
```c
FILE *fPtr;
```

- Open the file
```c
fPtr = fopen("file_path", condition);
/*
The condition can be of 6 typpes:
    - r: Open the file in read; It must exist.
    - r+: Open the file in read/write; It must exist.
    - w: Create a new file in write; If it exists it gets overwritten.
    - w+: Create a new file in write/read; If it exists it gets overwritten.
    - a: Append to the file; If it doesn't exist it gets created. 
    - a+: Append to the file and read it; If it doesn't exist it gets created.
*/ 
```

- Read the content of a file
```c
fscanf(FILE *fPtr, format, arguments);

//An example of use can be
fscanf(fPtr, "%s %s %d", &name, &surname, &age);
```

- Write in a file
```c
fprintf(FILE *fPtr, format, arguments);
```

An use example of a file is as follows:
```c
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    FILE *fPtr;
 
    if((fPtr = fopen("file.txt", "r")) == NULL)
    {
        printf("File not found");
        exit(1);
    }
 
 
    char string[100];
    while (fscanf(fPtr, "%s", string) != EOF)
    {
        printf("%s \n", string);
    }
 
    return 0;
}
```
---

### Dynamic Memory Allocation
wip

---

### Text Formatting
wip

#### Format Specifiers

v

#### Escape Sequences

| Sequence           | Output                   |
| ------------------ | ------------------------ |
| \a                 | Produces a beep          |
| \b                 | Backspace                |
| \f                 | Form Feed                |
| \n                 | New Line                 |
| \t                 | Tab (4 spaces)           |
| \v                 | Tab (vertical)           |
| &#92;&#92;         | Backslash                |
| &#92;"             | Quotation marks          |
| &#92;'             | Quotation mark           |
| &#92;?             | Question mark            |

---

### Q & A
wip

### Extra
- C Open source books:
  - [The C book](https://publications.gbdirect.co.uk//c_book/)
  - [C Elements of Style](http://www.oualline.com/books.free/style/index.html)
