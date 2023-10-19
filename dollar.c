#include<stdio.h>>
int main()
{
    int dollar,fee;
    printf("Enter your amount:" );
    scanf("%lf",dollar);
    fee = dollar/100*10;
    fee = dollar -fee;
    printf("your fee for the exchange is %.1lf",fee);

    double pound = (0.5*dollar)*0.79;
    double japanese = (0.5*dollar)*127.65;

    printf("\nyou get: \n %.2lf GDP\n%.2lf JPY",pound, japanese);

}