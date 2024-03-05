### Stream | Purpose

- std::cout - Printing data to the terminal
- std::cin - Reading data from the terminal
- std::cerr - Printing errors to the terminal
- std::clog - Printing log messages to the terminal

### Data Types / Value Errors

1. int - Stores decimals; Typically occupies 4 bytes or more in memory.
   - unsigned: 0 to 2^n - 1;
   - signed: -2^n-1 to 2^n-1 - 1; (Both are still 4 bytes in memory)
2. long - Stores decimals in either 4 or 8 bytes of memory.
3. short - Stores decimals in 2 bytes of memory.
   (Floating points that is not Double will need a suffix; Otherwise, double will be the default)
4. double - Stores floating point in 8 bytes; Precise in 15 decimal points. (recommended default)
5. float - Stores floating point in 4 bytes; Precise in 7 decimal points.
6. long double - Stores floating point in 12 bytes; > double in precision.
7. chat
8. bool
9. void
10. auto

n(floating point) / 0 === Infinity
0 / 0 === NaN

### Memory Usage

- All data is represented by a bunch of grouped cells of 0's and 1's in memory.
- As the range f your data grows, so will the number of digits you need to represent the data in memory.
- Hexadecimal system makes it a little easier for humans to handle streams of data with 1's and 0's.
- Octal has the same goal as Hexa, but it's almost no longer used in modern times. It's just mentioned here for your awareness.

> To check memory size, can possibly use sizeof() function

### Types of Initialization

- Braced Initialization
- Functional Initilization
- Assignment Initialization
