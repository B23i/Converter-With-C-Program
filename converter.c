#include <stdio.h>
void FahrenheitToCentigrade(){
    float Fahrenheit;
    printf("Enter the Fahernheit degree:");
    scanf("%f", &Fahrenheit);
    float Centigrade = (Fahrenheit-32)*5.0/9.0;
    printf("From Fahrenheit to Centigarde=%f", Centigrade);
}
void CentigardeToFahernheit(){
    float Centigarde;
    printf("Enter the Centigrade:");
    scanf("%f", &Centigarde);
    float Fahernheit = (Centigarde*9.0/5.0)+32;
    printf("From Centigrade to Fehrenheit=%f", Fahernheit);
}
void KMToMiles(){
    float km;
    printf("Enter the kilometer:");
    scanf("%f", &km);
    float miles = km/1.609344;
    printf("From Kilometer to Mİles=%f", miles);
}
void MilesToKm(){
    float miles;
    printf("Enter the Miles:");
    scanf("%f", &miles);
    float km = miles*1.609344;
    printf("From Miles to Kilometer=%f", km);
}
void MinuteToSec(){
    float Minute;
    printf("Enter the Minute:");
    scanf("%f", &Minute);
    float second = Minute*60;
    printf("From Minute To Second:%f", second);
}
void SecToMinute(){
    float Second;
    printf("Enter the second:");
    scanf("%f", &Second);
    float minute = Second/60;
    printf("From Second To Minute:%f", minute);
}
void MinToHour(){
    float Minute;
    printf("Enter the Minute:");
    scanf("%f", &Minute);
    float Hour = Minute*60;
    printf("From Minute To Hour:%f", Hour);
}
void HourToMİn(){
    float Hour;
    printf("Enter the Hour:");
    scanf("%f", &Hour);
    float Minute = Hour/60;
    printf("From Hour to Minute:%f", Minute);
}
void SecondToHour(){
    float Second;
    printf("Enter the Second:");
    scanf("%f", &Second);
    float Hour = (Second/60)/60;
    printf("From Second To Hour:%f", Hour);
}
void HourToSecond(){
    float Hour;
    printf("Enter the Hour:");
    scanf("%f", &Hour);
    float Second = (Hour*60)*60;
    printf("From Second To Hour:%f", Second);
}
int main(void){
    int select;
    printf("Select the convert process you whant to do:\nFahrenheit to Centigrade: 1\nCentigraden to Fahrenhei: 2\nkilometers per hour to miles per hour: 3\nMiles per hour to Kilometers per hour: 4\nMinute to second: 5\nSecond to minute: 6\nMinute to Hour: 7\nHour to Minute: 8\nSecond to Hour: 9\nHour to second: 10\n");
    printf("Put your select:");
    scanf("%d", &select);
    switch (select)
    {
    case 1:
        FahrenheitToCentigrade();
        break;
    case 2:
        CentigardeToFahernheit();
        break;
    case 3:
        KMToMiles();
        break;
    case 4:
        MilesToKm();
        break;
    case 5:
        MinuteToSec();
        break;
    case 6:
        SecToMinute();
        break;
    case 7:
        MinToHour();
        break;
    case 8:
        HourToMİn();
        break;
    case 9:
        SecondToHour();
        break;
    case 10:
        HourToSecond();
        break;
    default:
        break;
    }
    return 0;
}
