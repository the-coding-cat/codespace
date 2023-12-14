#include <stdio.h>

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

    bool e = true; //1 byte (true or false) %d

    int j = 2146354; //4 bytes (-2,147,483 to +2,147,483,467) %d


    return 0;
}