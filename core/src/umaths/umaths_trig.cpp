#include "uniquemaths.hpp"
//need to add a part which reduces theta first
namespace umaths{
double sin(double para){
    double temp = 0;
    int terms =10; // will change;
    int k = 1;
    for(int i = 1; i < terms; i+=2){
        temp += k*(power(para,i)/factorial(i));
        k*=-1;
    }
    return temp;
}
double cos(double para){
    double temp = 0;
    int terms =10; // will change;
    int k = 1;
    for(int i = 0; i < terms; i+=2){
        temp += k*(power(para,i)/factorial(i));
        k*=-1;
    }
    return temp;
}
double tan(double para){
    return sin(para)/cos(para);
}
double asin(double para){
        if(para > 0.7){
            return PI/2 - 2* asin(fast_sqrt((1+para)/2));
        }
        if(para < -0.7){
            return -(PI/2 - 2* asin(power((1+para)/2, 0.5)));
        }
        int terms = 15;
        double ans = para;
        double temp = para;
        for(int i =1;i< terms; i++){
            double top = power((2*i -1),2) * power(para,2);
            double bot = (2*i)*(2*i+1);
            temp *=(top/bot);
            ans += temp;
        }
        return ans;
    }

    
}