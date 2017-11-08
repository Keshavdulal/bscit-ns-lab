# LabSet Programs
# Network Security
# BSCIT

# Basics of C

## File Format
Every file is saved with and extension ".c".
>> FileName.c

## Compiling a C program
A c-program needs a c-compiler to compile the user code to convert it to binary file. It is also called an output file and has an extension of ".out"

### Compilation Syntax
Compiling a C program without explicitly specifying the output file name.
In this case the default ouput file's name is "a.out"
>> gcc <filename.c>

We can explicitly specify the output file's name as specified the syntax below.
>> gcc <filename.c> -o <output.out>


## Running compiled code
In order to run the compiled code (i.e. output file), use the syntax below:

If output file is not explicityly specified.
>> ./a.out

If Output file is explicitly specified, then use that explicit file-name.
>> ./<output.out>
