#include <stdio.h>
#include "libs/data_structures/vector.h"
#define SIZE_MAX 128

void test() {
    test_pushBack_emptyVector();
    test_pushBack_fullVector();
    test_popBack_notEmptyVector();
}


int main() {

    test();

    return 0;
}
