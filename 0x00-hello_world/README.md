Script|Task|
-------|-----|
0x00-hello_world| script that runs a C file through the preprocessor and save the result into another file., The C file name will be saved in the variable $CFILE, The output should be saved in the file c|
gcc -c $CFILE > $(echo $CFILE|cut -d"." -f1).o|script that compiles a C file but does not link.\nThe C file name will be saved in the variable $CFILE\nThe output file should be named the same as the C file, but with the extension .o instead of .c\n Example: if the C file is main.c, the output file should be main.o|