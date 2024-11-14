#include <stdio.h>

int main(){
    int Hora, minutos;
    int HoraMin, MinTotal, SegTotal;

    printf("Digite a hora seguido dos minutos: ");
    scanf("%i %i", &Hora, &minutos);

    HoraMin = Hora * 60;
    MinTotal = HoraMin + minutos;
    SegTotal = MinTotal * 60;

    printf("A hora convertida em minutos e: %i\n", HoraMin);
    printf("O total de minutos: %i\n", MinTotal);
    printf("O total em segundos e: %i", SegTotal);

    return 0;
}