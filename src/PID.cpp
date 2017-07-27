#include "PID.h"

#include <iostream>

#define WINDOWSIZE 30

using namespace std;

/*
* : Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    PID::Kp = Kp;
    PID::Ki = Ki;
    PID::Kd = Kd;

    p_error = 0.0;
    i_error = 0.0;
    d_error = 0.0;

    rollingaccumulator.resize(WINDOWSIZE);
    rollingindex = WINDOWSIZE - 1;
}

void PID::UpdateError(double cte) {

    d_error = cte - p_error;
    p_error = cte;
    // i_error += cte;

    rollingindex = (rollingindex + 1) % WINDOWSIZE;
    double head  = rollingaccumulator[rollingindex];
    rollingaccumulator[rollingindex] = cte ;
    i_error += cte - head;
}


double PID::TotalError() {
    return 0.0;
}

