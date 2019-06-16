#pragma once
#include<iostream>

class NormalPid {
public:
    void NormalPid_setPid(double p, double i, double d);
    void NormalPid_setExp(double exp,double cur);
    double NormalPid_getRes(void);
private:
    double p_ = 0;
    double i_ = 0;
    double d_ = 0;
    double error_ = 0;
    double error_last_ = 0;
    double sum_ = 0;
    double temp_ = 0;
};
