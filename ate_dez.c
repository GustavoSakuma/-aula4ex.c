#include <stdio.h>

int main() {
    
    int v1;
    
    printf ("informe o numero que deseja começar a sequencia:");
    scanf ("%d", &v1);
    
  
while( v1 < 11 ) {
printf("%d ", v1);
v1 = v1 + 1;

}
    return 0;
}