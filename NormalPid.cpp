#include"NormalPid.h"

void NormalPid::NormalPid_setPid(double p, double i, double d){
    p_ = p;
    i_ = i;
    d_ = d;
}

void NormalPid::NormalPid_setExp(double exp,double cur){
    error_ = exp - cur;
    sum_ += error_;
    temp_ = error_ * p_ + sum_ * i_ + (error_ -  error_last_) * d_;
    error_last_ = error_;
}

double NormalPid::NormalPid_getRes(void){
    return temp_;
}





