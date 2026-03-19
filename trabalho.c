#include <stdio.h>

int main() {
    int horas;
    int minutos;
    int horastotal;
    int diferenca;
    int horasresto;
    int minutosresto;
    int jornada = 8 * 60;
    
    printf ("digite as horas trabalhadas:");
    scanf ("%d" , &horas);
    
    printf ("digite os minutos trabalhados:");
    scanf ("%d" , &minutos);
    
    horastotal = (horas * 60) + minutos;
    
    if (horastotal > jornada ) {
        diferenca = horastotal - jornada;
        horasresto = diferenca / 60 ;
        minutosresto = diferenca % 60 ;
        
        printf("adicionado ao banco de horas: %02dhoras:%02dminutos\n", horasresto , minutosresto);
        printf ("retirado do banco: 00h:00m \n");
        
    }
    
    
    else {
        diferenca = jornada = horastotal;
        horasresto = diferenca / 60 ;
        minutosresto = diferenca % 60 ;
        
        printf("adicionado ao banco de horas: 00h:00m");
        printf ("retirado do banco: %02dhoras:%02dminutos\n", horasresto, minutosresto);
        return 0;
        
}

}