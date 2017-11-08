# Network Security || LabSet || BSCIT

# Basics of C

## File Format
Every file is saved with and extension ".c".
> FileName.c

## Compiling a C program
A c-program needs a c-compiler to compile the user code to convert it to binary file. It is also called an output file and has an extension of ".out"

### Compilation Syntax
Compiling a C program without explicitly specifying the output file name.
In this case the default ouput file's name is "a.out"
> gcc <filename.c>

We can explicitly specify the output file's name as specified the syntax below.
> gcc <filename.c> -o <output.out>


## Running compiled code
In order to run the compiled code (i.e. output file), use the syntax below:

If output file is not explicityly specified.
> ./a.out

If Output file is explicitly specified, then use that explicit file-name.
> ./<output.out>

## Understanding the structure of C Program.
C program follows a top-down approach, meaning it starts to execute instructions starting from the line 1 and follows the order.
So there are few rules that needs to be taken care of.

1. Always add the `imports` in the top.
2. Add `function decaration` followed by the `imports` if you are using additional functions other than just `main()`.
3. Add `main()` function after `function declaration`.
4. Declare `variables` used at the very begining of the function.
5. Add `function definition` after the end of `main()` function.

## Commenting the code
There are 2 ways using which a code can be commented.
### Single Line Comment
This can simply be added by using two forward slashes.
> // This is a comment

### Multi line comment
This type of comment can be added by adding a forward slash(/) followed by an asterisk(*) at the begining of the comment and by adding an asterisk(*) followed by a forward slash(/) at the end of the comment.
	/*
	This is a multi line comment.
	I can add multiple lines here.
	*/
