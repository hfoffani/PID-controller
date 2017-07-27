#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
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
}

void PID::UpdateError(double cte) {

    d_error = cte - p_error;
    p_error = cte;
    i_error += cte;
}


double PID::TotalError() {
}

