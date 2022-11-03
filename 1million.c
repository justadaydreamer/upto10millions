#include <stdio.h>

int main(){
    int x = 1;
    
    
while (x < 10000000) {
    x = x+1;
    printf("%i\n", x);
        if (x == 10000000) 
        {
        break;
        }
    }
}
