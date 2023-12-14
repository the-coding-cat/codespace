#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //one line comment
    /*
    Writitng essays here
    google doc? Word? nah, I prefer IDE's
    Why not its like my life isn't hard enough
    Cringe
    */
   /* Escape sequence  = characters combination consisting of a backslash \
   followed by a letter or combination of digits.
   They follow specifu actions within a line or string of text.
   \n = newline
   \t = tab
   */
    //printf("I like pizza!\n");
    //printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    //printf("\"Four Scores and Seven years ago\" - Abe Lincoln");
    /*if you need to print literal quotes put an escape sequence
    before each of the backslashes.

    If you need to print out "/" just put two // and it will print out one */

    //int x; //decelaration
    //x = 123; //initailization
    //int y = 321; //d + i

    //int age = 21; //intiger
    //float gpa = 3.7; //floating point number
    //char grade = 'B'; //when declaring a char you have to put it in sigal qoutes when I
    //char name[] = "Amy"; //not object orented and stings are objects. So you use an array
    // of chars to make a name, rememeber double quotes.

    //printf("hello %s\n", name); //s for string
    //printf("you are %d years old\n", age); //d for decimal or digit
    //printf("Your average garde is %c\n", grade); //c for character
    //printf("Your GPA is %f\n", gpa); //f for float

    char a = 'c' //store a single character %c
    char b[] = "Panda" // array of characters %s

    float c = 3.141592 //4 bytes (32 bits of precision) 6-7 digits %f
    double d = 3.14592653589793 //8 bytes (64 bits of precision) 15-16 digits %lf
    //to add more digits than the cut off in the %f or %lf you can use a 0.
    // and the specify how many digits after the decimal to print for example %0.15dl
    //to print 15 digits after the decimal

    bool e = true; //1 byte (true or false) %d inlude <stdbool.h> to work with them
    // 1 = true, 0 = flase

    char f = 100; //1 byte you can store a whol int for -128 to +127
    //%d to print out '100' or %c to print out the ascii table character that
    //is represented by 100 or d.
    unsigned char g = 225; //1 byte (0 to +255) we direguad nagtive numbers %d or %c
    // if you go over the limit it will overflow and go back to 0.

    short int h = 32756; //2 bytes (-32,768 to +32,767) %d
    // overflow rested the value to the minimunm value.
    //you dont have to delcare them as ints you can just use "short"
    unsigned short int = 65535; //2 bytes (0 to +65,535)

    int j = 2146354; //4 bytes (-2,147,483 to +2,147,483,467) %d
    unsigned int k = 4294967295 //4 bytes (0 to +4,294,967,295) %u
    //need to be refrenced as an unsigned int

    long long int l = 9223372036854775807; //8bytes (-9 quintillion to +9 quintillion) %lld
    // normal ints are already considered long ints thus we need to specify long long here
    unsigned long long int m = 18446744073709551615U; //8 bytes (0 to +18 quintillion) %llu
    //the U is there to prevent a warning reguarding the legnth of the number

    return 0;
}