#include <unistd.h>
#include <stdio.h>

void ft_hello(){
    write(1, "hello yourself", 14);
}


int main(void){
    ft_hello();
}