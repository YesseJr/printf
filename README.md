# _printf 📄
A formatted output conversion C program completed as part of the low-level programming and algorithm track at ALX. The program is a pseudo- recreation of the C standard library function, printf.

#### Synopsis
This repository holds all the code necessary for our custom _printf function to run. Our mini-version currently handles conversion specifiers: c, s, %, d, i, b, o and does not yet support field width, precision, flag characters, or length modifiers. Unique to our _printf is our r reverse conversion and the R rot13 conversion. In essence, you can print any character, string, integer, or decimal number, reverse your strings, transform any number to binary and octal bases, and encrypt your string with rot13 encryption.

#### Syntax:
 * _printf(<format string>, args...)


#### Current features
Implemented specifiers:

* Decimal integers (%d)
* Unsigned decimal integers (%u)
* Strings (%s)
* Hex integers (%x %X)
* Octal integers (%o)
* Binary integers (%b)
* Pointer notation for integers (%p)
* Print a string, but print hidden characters as hex codes (%S)
* Reversed strings (%r)
* Rot13'd strings (%R)


gcc -c \*.c
ar rcs libprintf.a \*.o
After this, copy the resulting printf.a file and printf.h to your project directory. Include printf.h where appropriate in your source files. Then using GCC as an example, when compiling add the -l flag with the library file name like so:

gcc <your stuff here> libprintf.a
Usage Examples
The simplest example is just printing out a string literal as the format string, like so:

#### _printf("Hello printf!");
This will output the text "Hello printf!" to the terminal, like so:

#### Hello printf!
Rountinely, you will want to use printf to print out strings from variables or numbers. We can take in variables passed as further arguments by using %, then flags (optional), then a specifier for the type of thing we are printing. If we have an integer and a string, we will use %d and %s respectively, like so:

char str[] = "world";
int number = 42;
_printf("Hello %s %d!", str, number);
We will get the output:

#### Hello world 42!
Printf takes the specifiers in the order they appear in the format string, so in this case our string variable must be before our integer variable, or else printf will try printing the string like an integer and vice versa, would could cause a crash! There are various options to change how and where the text is output which can be combined together, and a complete readable listing can be found at http://www.cplusplus.com/reference/cstdio/printf/

There are a few non-standard specifiers in this version of printf. One is %S, which prints normally invisible characters as hex codes. Like so:

char str[]="\x14<-I can see you->\x15";
_printf("%S", str);
When this is run we should get:

\x14<-I can see you->\x15
There is a specifiers to print a string in reverse (%S):

char str[] = "SdrakcaB";
_printf(%r,str);
Will net us:

#### Backwards
The rot13 specifier (%R) will shift all characters 13 letters forward, turning every "a" into an "n" and so on. Finally, there is a binary number specifier (%b):

int number = 19;
_printf("%b", number);
This should get us the binary number output:

10011

#### Testing
The tests folder includes a mains.c file which will run a series of pairs of printf statements on many different combinations of specifiers, flag and options using both this version of print and stdlib printf, and output this to stdout. To run these tests, compile the entire project then run the resulting executable:

gcc -o printftest *.c tests/mains.c
./printftest
Authors


### Authors 
 * Waython Yesse
 * Damiano Semufali
