#include <unistd.h>
#include <stdio.h>

void ft_hello(){
    write(1, "hello help yourself!", 20);
}


int main(void){
    ft_hello();
}
vfgfree