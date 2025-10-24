#include <unistd.h>
#include <stdio.h>

void ft_hello(){
    write(1, "hello yourself!", 15);
}


int main(void){
    ft_hello();
}
ferferewfa