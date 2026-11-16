#include "uniquemaths.hpp"
namespace umaths{
//regular stuff
double fast_sqrt(double para){
    return __builtin_sqrtf(para);
}
double abs(double  para){
    if(para < 0){
        return -para;
    }
    else{
        return para;}}
double min (double a, double b){
    if(a < b){
        return a;
    }
    else{
        return b;}}
double max (double a, double b){
    if(a > b){
        return a;
    }
    else{
        return b;}}
double floor(double a,double b){
    double temp = a/b;
    return round(a,1);
}

double mod(double a,double b){
    return a-b*(floor(a,b));
}
//*i dont like this much will change
double round(double a,double b){
    double k =power(10,-b);
    int fact =(a*k)+0.5;
    return fact/k;
}
double factorial(double para){}
}
int fibonacci(int para){
    if (para < 2){
        return para;
    }
    return fibonacci(para-1) + fibonacci(para-2);
}