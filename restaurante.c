#include <stdio.h>

int main() {
    
        
        char escolha;
        
        printf ("informe qual tipo de mesa você se enquadra? \n (a) casal \n (b) familia com crianca \n (c) familia sem crianca ou grupo \n ") ;
        
        printf("escolha seu tipo de mesa:");
        scanf ("%c", &escolha);
        
        
        
switch(escolha) {
    
 case 'a':
 printf("mesa para casal");
break;

 case 'b':
 printf("mesa com area de brinquedo");
break;

 default:
 printf("area VIP");
break;

}
   
}