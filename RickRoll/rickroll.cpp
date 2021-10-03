#include <stdlib.h>
#include <iostream>

#define SHELLSCRIPT "\
#/bin/bash \n\
firefox \"https://youtu.be/xvFZjo5PgG0\"\
"

int main()
{
    system(SHELLSCRIPT);

    std::cout << "Get Rick Rolled" << std::endl;

    return(0);
}