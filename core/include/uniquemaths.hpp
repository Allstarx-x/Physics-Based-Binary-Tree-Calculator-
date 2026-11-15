#pragma once 
//need to use contexpr so it evaluates at compile time 
//regular stuff
namespace umaths{
double power(double para, double exp);
double factorial(double para);
int fibonacci(int para);
//
double floor(double para);
double ceil(double para);
double round(double a, double b); //b represents how many significant figures
double mod(double a, double b);
double min( double a, double b);
double max( double a, double b);
double abs(double  para);
double fmod(double para);
//trig functions (in radians)
double sin(double para);
double cos(double para);
double tan(double para);
double asin(double para);
double acos(double para);
double atan(double para);
double sec(double para);
double csc(double para);
double cot(double para);
//exponential and logarithmic functions
double unique_exp(double para);
double log(double para, double base = 10.0);
//decided to use an all puprose log function since it was easier imo
//automatically at base 10 but can be changed to any base by passing a second argument
double ln(double para);
//constants
const double PI = 3.14159265358979323846;
const double E = 2.71828182845904523536;
const double GOLDEN_RATIO = 1.61803398874989484820;

//additional functions
//will do later because i need to get the node stuff working first
}