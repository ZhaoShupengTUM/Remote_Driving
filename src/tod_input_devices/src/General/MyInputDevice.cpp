// Copyright 2020 Simon Hoffmann
#include "MyInputDevice.h"

MyInputDevice::MyInputDevice(
    std::function<void(const int, const double)> axisCb, std::function<void(const int, const int)> buttonCb) {
    axisCallback = axisCb;
    buttonCallback = buttonCb;
}
MyInputDevice::MyInputDevice(
    std::function<void(const int, const double)> axisCb, std::function<void(const int, const int)> buttonCb,
    std::function<void(const std::string&)> errorCb) {
    errorCallback = errorCb;
    axisCallback = axisCb;
    buttonCallback = buttonCb;
}

void MyInputDevice::setAxisCallback(std::function<void(const int, const double)> f) {
    axisCallback = f;
}
void MyInputDevice::setButtonCallback(std::function<void(const int, const int)> f) {
    buttonCallback = f;
}

void MyInputDevice::terminate() {
    deactivate();
}

void MyInputDevice::set_correction(const std::string& correction) {
    _correction = correction;
}

double MyInputDevice::scaleValue(int nValue, int nMinInput, int nMaxInput, double dMinOutput, double dMaxOutput) {
    double dValue;
    dValue = dMinOutput + (double)(nValue - nMinInput)*(dMaxOutput - dMinOutput) / (double)(nMaxInput - nMinInput);
    if (dValue > dMaxOutput)
        return dMaxOutput;
    else if (dValue < dMinOutput)
        return dMinOutput;
    else
        return dValue;
}

int MyInputDevice::get_number_of_axes() {
    return _numberOfAxes;
}
int MyInputDevice::get_number_of_buttons() {
    return _numberOfButtons;
}
