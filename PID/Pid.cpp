#include "Pid.h"

Pid::Pid(double Kp_,double Ki_,double Kd_)
    :gain(Kp_,Ki_,Kd_)
{
}


double Pid::error(double target,double output)
{
    return target-output;
}

double Pid::controll(double target,double output)
{
    return gain.Kp * error(target,output);
}
