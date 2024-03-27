#include <iostream>
#include "person.hpp"

int main(){
    person* p = new person(12, "qwt");
    printf("%d", p->getAge());
    printf("\n");
    return 0;
}