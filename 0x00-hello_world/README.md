Script|Task|
-------|-----|
gcc -E $CFILE > c|script that runs a C file through the preprocessor and save the result into another file., The C file name will be saved in the variable $CFILE, The output should be saved in the file c|
gcc -c $CFILE > $(echo $CFILE\|cut -d"." -f1).o|script that compiles a C file but does not link., The C file name will be saved in the variable $CFILE, The output file should be named the same as the C file, but with the extension .o instead of .c, Example: if the C file is main.c, the output file should be main.o|
gcc $CFILE -S > $(echo $CFILE\|cut -d"." -f1).s|script that generates the assembly code of a C code and save it in an output file., The C file name will be saved in the variable $CFILE, The output file should be named the same as the C file, but with the extension .s instead of .c., Example: if the C file is main.c, the output file should be main.s|
gcc $CFILE -o cisfun|script that compiles a C file and creates an executable named cisfun., The C file name will be saved in the variable $CFILE|
puts("\"Programming is like building a multilingual puzzle");|a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line., Use the function puts|
printf("%s", "with proper grammar, but the outcome is a piece of art,\n");|a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line., Use the function printf|
%lu|a place holder in c l for long u for unsigned decimal integer|
gcc -masm=intel $CFILE -S > $(echo $CFILE\|cut -d"." -f1).s|a script that generates the assembly code (Intel syntax) of a C code and save it in an output file., The C file name will be saved in the variable $CFILE., The output file should be named the same as the C file, but with the extension .s instead of .c., Example: if the C file is main.c, the output file should be main.s|
101-quote.c|a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error., You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts, Your program should return 1|












