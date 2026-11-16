#pragma once 
//need to use contexpr so it evaluates at compile time 
//regular stuff
namespace umaths{
double power(double para, double exp);
double factorial(double para);
int fibonacci(int para);
double fast_sqrt(double para);
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
//copied off geeksforgeeks
double gamma(double para){
    const double p[]={
        676.5203681218851,   -1259.1392167224028,
        771.32342877765313,  -176.61502916214059,
        12.507343278686905,  -0.13857109526572012,
        9.9843695780195716e-6, 1.5056327351493116e-7
};
    if(para < 0.5){
        return PI/(sin(PI+para) * gamma(1-para));
    
    }
    para-=1;
    double temp =-0.99999999999980993;
    for(int i =0; i< 8; ++i){
        temp+=p[i]/(para+1+1);
    }
    double temp2 = temp +7.5;
    return fast_sqrt(2*PI)* power(temp2, para+ 0.5)*unique_exp(-temp2)*temp;
}
//additional functions
//will do later because i need to get the node stuff working first
}