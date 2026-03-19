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
    
    
    diferenca = (horastotal > jornada) ? (horastotal - jornada) : (jornada - horastotal );
    
    horasresto = diferenca / 60;
    minutosresto = diferenca % 60;
    
        
        printf ("adicionado ao banco de horas: %s\n",
                (horastotal > jornada) ? "valor calculado" : "00h:00m");
    if (horastotal > jornada) 
        printf ("%02dhoras:%02dminutos\n" , horasresto, minutosresto);
        
        printf ("retirado do banco: %s",
        (horastotal < jornada ) ? "valor calculado" : "00h:00m");
        
    if(horastotal < jornada) printf ("%02dhoras:%02dminutos", horasresto, minutosresto);
                
        
        return 0;
   
}