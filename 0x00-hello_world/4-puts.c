#!/bin/bash
echo '#include <stdio.h>' > prog.c && echo 'int main(void) { puts("Programming is like building a multilingual puzzle"); return 0; }' >> prog.c && gcc prog.c -o prog && ./prog && rm -f prog.c prog
