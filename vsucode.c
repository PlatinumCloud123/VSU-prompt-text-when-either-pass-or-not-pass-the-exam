#include <stdio.h>
#include <stdbool.h>

int main(){

    char passers[] = "6,593";
    char nonpassers[] = "12,348";
    int  date = 10;
    char month[] = "April";
    int year = 2026;
    char cong = '!';
    char name[] = "Juan Dela Cruz";
    char univ[] = "VSU";
    char vsu[] = "Visayas State University";
    char pass[] = "PASSED";
    char notpass[] = "DID NOT PASSED"; 

    bool isPassed = 0; // Can be changed either 1 or 0. 

    // KUNG KAPASARA
    if (isPassed) {
        printf("Dear Mr. %s, \nSince you took the exam scheduled on %s %d, %d and the results are out.\nI sincerly congratulate you that you %s the %s (%s)'s entrance exam or known as VSUCAT %d.\n", name, month, date, year, pass, univ, vsu, year);
        printf("Therefore, you have been qualified for the next process of admission%c\n", cong);
        printf("Out of %s of %s takers has passed the exam. Luckily you have been part of it%c \n", passers, nonpassers, cong);
        printf("Keep your fighthing spirit up for the next journey of your life%c", cong);
    }

    // KUNG DI KAPASAR
    else {
        printf("Dear Mr. %s, \nSince you took the exam scheduled on %s %d, %d and the results are out.\n", name, month, date, year);
        printf("We regret to inform you that %s the %s (%s)'s or known as VSUCAT %d\n", notpass, univ, vsu, year); 
        printf("We wish you goodluck to keep striving your dreams, aside from this university you've applied for. \nAs you did not meet the %s's standards.", univ);
        
    }

    return 0;
}


    // NOTES Guide - padayon future engineer, ahead nako sa ko mga classmates sa second semester bleeh. 

    // variable = A reaudable container for a value 

    // int = whole numbers - whole number rani like pilay edad, int means integer. so to plug/insert the variable
    // on the printf mag butang ug % together with d (d means decimal) like %d. does not include decimal 

    // float = single precision decimal number 
    // float kay dili siya whole number, with decimal siya with 6 zeroes but ma adjust rani by putting %f.1 or %f.2
    // so again to plug this variable to the printf. use %f and to adjust the decimals, include .1.2 and so on.

    // double = double-precision decimal number
    // on other hand kung ang decimal is taas na kaayo like ang value sa pi. then use double. %.15lf
    
    // char = single character
    // char means character. so usa rana ka character like A B C D. means usa raka letter ang pwede ibutang. so
    // to plug the variable, i insert ang "%c". 

    // char[] = array of characters 
    // More than a character. It can be words or phrases. Unlike sa char with no bracket, nga usa ra ka letter imo mabutang
    // use %s to plug the variable. s meaning string. string character

    // bool = true or false (thus requires <stdbool.h>)
    // true or false,  0 or 1. use "if" and "else" to work it out.