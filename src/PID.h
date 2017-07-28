#ifndef PID_H
#define PID_H

#include <vector>

class PID {
public:
    /*
     * Errors
     */
    double p_error;
    double i_error;
    double d_error;

    /*
     * Coefficients
     */
    double Kp;
    double Ki;
    double Kd;

    /*
     * Constructor
     */
    PID();

    /*
     * Destructor.
     */
    virtual ~PID();

    /*
     * Initialize PID.
     */
    void Init(double Kp, double Ki, double Kd);

    /*
     * Update the PID error variables given cross track error.
     */
    void UpdateError(double cte);

    /*
     * Calculate the total PID error.
     */
    double TotalError();

private:
    std::vector<double> rollingaccumulator;
    int rollingindex;
};

#endif /* PID_H */
