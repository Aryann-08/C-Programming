//Studio.h is a Standard input output header file.
#include <stdio.h>


int main() {
    // There are many data types in c like.
    int number ; //This stores Whole Numbers.
    char character ; //This stores Character.
    double double_number ; //This Stores decimal numbers from 15 to upto 17 decimal digits.
    float float_number ; //This stores decimal numbers from 6 to 7 digits.

    //Lets give them there values;
    number = 10 ;
    character = 'A' ;
    double_number = 10.1234567;
    float_number = 10.123f ;

    //Here lets print them
    printf("int stores Whole Numbers. = %d\n",number);
    printf("char stores Character. = %c\n",character);
    printf("double provides about 15 - 17 significant decimal digits of precision. = %lf\n",double_number);
    printf("double provides about 15 - 17 significant decimal digits of precision. = %f\n",float_number);

    //Every data type have there own memory size, to check the size we use sizeof(datatype/variable_name)
    printf("\nSize of int is = %zu bytes \n",sizeof(number)); //For int
    printf("Size of char is = %zu bytes \n",sizeof(character)); //For char
    printf("Size of double is = %zu bytes \n",sizeof(double_number)); //For double
    printf("Size of float is = %zu bytes \n",sizeof(float_number)); //For float

}
