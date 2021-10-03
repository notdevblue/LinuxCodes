//#include <stdlib.h>
//#include <stdio.h>



#define SHELLSCRIPT "\
#/bin/bash \n\
echo -e \"\" \n\
echo -e \"This is a test shell script inside C code!!\" \n\
read -p \"press <enter> to continue\" \n\
clear\
"

int main()
{
    system(SHELLSCRIPT);

    return (0);
}