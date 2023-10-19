
# Computer Science I 
## Lab 2.0 Worksheet

Name(s) and Login(s):



1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.


error

2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?


error

3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.

error


4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
* `short int`
  size:2 byte
  range:-32,768 to 32,767
* `int`
  size:4 byte
  range:-2,147,483,648 to 2,147,483,647
* `long int`
  size:8 bytes 
  range:-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
* `float`
  size: 4 bytes  
  range: 7 digits of accuracy
* `double`
  size: 4 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25
     £205.65
  b) $1,000.52
     £822.19
  c) $968,410.12
     £795805.54


6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?
Yes, we can convert it but it wouldn't be absoluetly accurate because we will need some numbers in decimal point too which is a convineance provided by the int data type.



7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?
The answer we ger is 0.000000 and that is wrong.

b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?
I'm still getting it wrong 

c) Fix the program by editing the `area.c` source
code so that the program produces correct results.
