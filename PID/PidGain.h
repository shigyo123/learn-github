#ifndef PID_GAIN
#define PID_GAIN

class PidGain{

    public:
    double Kp;
    double Ki;
    double Kd;

    PidGain(double Kp_,double Ki_,double Kd_);
    void setPidGain(double Kp_,double Ki_,double Kd_);
  
};

#endif