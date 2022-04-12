#include <stdio.h>
#include <sds.h>

int main()
{
    sds mystring1 = sdsnew("Hello World!");
    printf("[mystring1] content: %s, length without \\n: %d\n", mystring1, (int)sdslen(mystring1));

    sdsfree(mystring1);

    sds mystring2 = sdsempty();
    mystring2 = sdscat(mystring2, "Bye ");
    mystring2 = sdscat(mystring2, "World!");
    printf("[mystring2] content: %s, length without \\n: %d\n", mystring2, (int)sdslen(mystring2));

    sdsfree(mystring2);


    sds mystring_10000 = sdsfromlonglong(10000);
    printf("[mystring_10000] \"10000\" length %d\n", (int) sdslen(mystring_10000));
    sdsfree(mystring_10000);

    char str[10];

    gets(str);
    return 0;
}
