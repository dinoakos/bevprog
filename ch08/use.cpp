#include "my.h"
void swap_v(int a ,int b ){

int temp;
temp = a, a=b;
b=temp; 

}
void swap_r(int& a ,int& b ){

int temp;
temp = a, a=b;
b=temp; 

}
void swap_cr(const int& a ,const int& b ){

int temp;
temp = a;
a=b;
b=temp; 

}
int foo = 7;

int main()
{
    print_foo();
    print(99);
}