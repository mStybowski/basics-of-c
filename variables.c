#include <stdio.h>
#include <string.h>

int main(void){

    int binaryAge = 0b10111;
    int octadecimalAge = 027;
    int decimalAge = 23;
    int hexadecimalAge = 0x17;

    printf("Hello world! My age in binary is %i\n", binaryAge);
    printf("Hello world! My age in octa is %i, which is %#o in octa\n", octadecimalAge, octadecimalAge);
    printf("Hello world! My age in decimal is %i, which is %i in decimal\n", decimalAge);
    printf("Hello world! My age in hexa is %i, which is %#x in hexadecimal\n", hexadecimalAge);

    float myFloat = 3.;
    float mySecondFloat = -.0001;

    printf("My first float is %f\n", myFloat);
    printf("My second in hexa is %f\n", mySecondFloat);

    float myBigValue = 1.7e4;
    float mySmallValue = 2.25e-3;

    printf("My big number %e is just %f which results to: %g\n", myBigValue, myBigValue, myBigValue);
    printf("My small number  %e is just %f which results to: %g\n", mySmallValue, mySmallValue, mySmallValue);

    float myStrangeHexaValue = 0x0.3p10;

    printf("My strange hexa value %e is just %f which results to: %g\n", myStrangeHexaValue, myStrangeHexaValue, myStrangeHexaValue);

    char mySingleCharacter = '\n';
    char someLetter = 'C';

    printf("You print single letter like that: %c%c", someLetter, mySingleCharacter);

    char buf[128];

    strcpy(buf, "Hi\n");

    int numberOfCharactersInString = strlen(buf);

    printf("Dlugosc stringa to: %i\n", numberOfCharactersInString); // 3

    // Using <stdbool.h> to ease handling booleans

    _Bool booleanVar = 0;

    printf("BoolVar = %i\n", booleanVar);

    long long int maxAmountOfMemory = 7856785;

    printf("Large number = %lli\n", maxAmountOfMemory);

    unsigned int positiveNumber;

    return 0;
}