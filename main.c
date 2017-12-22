#pragma config(Sensor, in1,    WoF1,           sensorPotentiometer)
#pragma config(Sensor, in2,    WoF2,           sensorPotentiometer)
#pragma config(Sensor, in3,    MGLP,           sensorPotentiometer)
#pragma config(Sensor, in4,    ElbowPot,       sensorPotentiometer)
#pragma config(Sensor, dgtl1,  QuadLeft,       sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  MGLS,           sensorDigitalIn)
#pragma config(Sensor, dgtl5,  QuadRight,      sensorQuadEncoder)
#pragma config(Sensor, dgtl9,  LedG,           sensorDigitalOut)
#pragma config(Sensor, dgtl10, Red10,          sensorDigitalOut)
#pragma config(Sensor, dgtl11, Red11,          sensorDigitalOut)
#pragma config(Sensor, dgtl12, Red12,          sensorDigitalOut)
#pragma config(Motor,  port1,           Elbow,         tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           FrontLeft,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           MiddleRight,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           Sholder,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           BackRight,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           Sholder2,      tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port7,           MiddleLeft,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           BackLeft,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           FrontRight,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          Wrist,         tmotorNone, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"

#define max(a, b) (a > b) ? a : b
#define min(a, b) (a < b) ? a : b
#define sign(a) (a > 0) - (a < 0)
#define tanh(a) (exp(a) - exp(-a)) / (exp(a) + exp(-a))
#define smooth(value, maxValue, scaler) tanh(value * (scaler / maxValue)) * maxValue
