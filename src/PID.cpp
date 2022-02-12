#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
  
  Kp_ = Kp;
  Ki_ = Ki;
  Kd_ = Kd;

}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */
  
  d_error_ = cte - p_error_;
  i_error_ += cte;
  p_error_ = cte;

}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  return (-1.0) * (Kp_ * p_error_ + Ki_ * i_error_ + Kd_ * d_error_);  // TODO: Add your total error calc here!
}
