#include <stdio.h>

int main() {
    
    int v1;
    
    printf ("informe o numero que deseja começar a contagem regreciva:");
    scanf ("%d", &v1);
    
  
while( v1 >= 0 ) {
    printf("%d\n ", v1);
v1 = v1 - 1;
}

printf("LANÇAR...");

    return 0;