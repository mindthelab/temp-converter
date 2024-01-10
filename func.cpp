#include "func.h"

//celsius--------------------------------------
//celsius para fahrenheit
float ctof(float temperatura){
    return (temperatura * 9 / 5) + 32;
}

//celsius para kelvin
float ctok(float temperatura){
    return (temperatura + 273.15);
}

//fahrenheit-----------------------------------
//fahrenheit para celsius
float ftoc(float temperatura){
    return (temperatura - 32) * 5 / 9;
}

//fahrenheit para kelvin
float ftok(float temperatura){
    return (temperatura - 32) * 5 / 9 + 273.15;
}

//kelvin---------------------------------------
//kelvin para celsius
float ktoc(float temperatura){
    return (temperatura - 273.15);
}

//kelvin para fahrenheit
float ktof(float temperatura){
    return (temperatura - 273.15) * 9 / 5 + 32;
}
