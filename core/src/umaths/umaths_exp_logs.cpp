#include "uniquemaths.hpp"
//exponential and logs
namespace umaths{
double log(double para,double base){
}

double power(double para, double exp){
    if(para ==0){
        if (exp >0){
            return 0.0;
        }
        //error msg
    }
    double temp = ln(para);
    if(exp < 0.0){
        return 1.0/unique_exp(exp*temp);
    }
    return unique_exp(exp*temp);
}
double ln(double para){
    //using hyperbolic artan series
    double y = (para-1)/(para+1);
    double ans =0;
    double top = y;

    double terms = 100; //will change later just solid approx
    
    for(int i =0; i < terms; i++){
        int bottom = 2*i +1;
        ans += top/bottom;
        top = top* (y*y);
    }
    return 2* ans;

}


double unique_exp(double para){
    int terms = 50; //will change also
    double k = 1;
    double ans =1;
    for(int i =1; i < terms;i++){
        k *= para/i;
        ans += k;

    }
    return ans;

}




}