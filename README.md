# PID Controller

A C++ implementation of a PID Controller.

PID (Proportional, Integral and Derivative) Controllers are widely used
in control systems in many industries. This project applies the controller
to a self-driving car simulator.

### Algorithm explanation

**RUBRIC Reflection Criteria 1**
**Describe the effect each of the P, I, D components had in your implementation.**

Each of the three hyperparameters P, I and D allows to tune the controller in
different ways.

The *P (proportional)* handles 

The *D (derivative)* handles 

The *I (integral)* handles 


My expectations.

**Animation Results.**

Here is a short recording of the simulation with the last version of
the hyperparameters.

![Recorded video](./imgs/pidctrl-final.gif "Recorded Video. 18MB GIF")


### Final Hyperparameters

**RUBRIC Reflection Criteria 1**
**Describe how the final hyperparameters were chosen.**

Explanation

PID for throttle, Decrease speed.

P:

I:

D:




---

### Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Udacity Term-2 Simulator. You can download it from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases).

There's an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3)

### Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 
5. Run the simulator, browse to the "PID Controller Project" with the Next arrow and Select it.

---

### Acknowledgments

Thanks to Udacity for the learning experience.

### License

This project is publish under the [Apache License](http://www.apache.org/licenses/LICENSE-2.0).

### Who do I talk to?

For questions or requests post an issue here or tweet me at @herchu

