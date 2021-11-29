#include <iostream>

#define CHECK_AUTOSYNC_LIST_FILE " \
#!/bin/bash \
if test -e /home/han/autosync; then \
    echo \"file found\" \
fi \
"

int main()
{
    std::cout << system(CHECK_AUTOSYNC_LIST_FILE) << "\r\n";

    return (0);
}