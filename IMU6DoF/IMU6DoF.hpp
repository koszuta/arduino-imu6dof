#ifndef _IMU6DoF_H
#define _IMU6DoF_H

#include <glm/vec3.hpp>

class IMU6DoF
{
public:
    typedef enum accel_units
    {
        MPS2,
        G0
    } accel_units;

    typedef enum gyro_units
    {
        RADS,
        DPS
    } gyro_units;

    virtual bool init() = 0;

    virtual void readAccel(glm::vec3 *result, IMU6DoF::accel_units units) = 0;
    virtual void readGyro(glm::vec3 *result, IMU6DoF::gyro_units units) = 0;

    virtual void setAccelBiases(float xBias, float yBias, float zBias, IMU6DoF::accel_units units) = 0;
    virtual void setAccelBiases(glm::vec3 biases, IMU6DoF::accel_units units) = 0;
    virtual void setAccelWeights(float xWeight, float yWeight, float zWeight) = 0;
    virtual void setAccelWeights(glm::vec3 weights) = 0;

    virtual void setGyroBiases(float xBias, float yBias, float zBias, IMU6DoF::gyro_units units) = 0;
    virtual void setGyroBiases(glm::vec3 biases, IMU6DoF::gyro_units units) = 0;
};

#endif
