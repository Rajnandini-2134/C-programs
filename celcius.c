#include<stdio.h>

    float convertfahreneittocelcius(float fahreneit)
    {
        return (fahreneit-32)*5/9;
    }
    float convertcelciustofahreneit(float celcius)
    {
        return (celcius*9/5)+32;
    }
    int main()
    {
        float fahreneit,celcius;

        printf("Enter the temperature in fahreneit:");
        scanf("%f",&fahreneit);
        celcius=convertfahreneittocelcius(fahreneit);
         printf("conversion of fahreneit to celcius is: %.2f\n",celcius);
    

        printf("Enter the temperature in celcius:");
        scanf("%f",&celcius);
         fahreneit=convertcelciustofahreneit(celcius);
             printf("conversion of celcius to fahreniet is: %.2f\n",fahreneit);

        return 0;
    }



