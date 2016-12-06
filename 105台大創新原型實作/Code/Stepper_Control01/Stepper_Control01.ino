// Random.pde
// -*- mode: C++ -*-
//
// Make a single stepper perform random changes in speed, position and acceleration
//
// Copyright (C) 2009 Mike McCauley
// $Id: Random.pde,v 1.1 2011/01/05 01:51:01 mikem Exp mikem $

#include <AccelStepper.h>
#define pinStep 8
#define pinDirection 9

// Define a stepper and the pins it will use
//AccelStepper stepper; // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5
AccelStepper mystepper(1, pinStep, pinDirection);
void setup()
{  
  pinMode(pinStep,OUTPUT) ;
  pinMode(pinDirection,OUTPUT) ;
  mystepper.setMaxSpeed(300);
 mystepper.setSpeed(200);
  
}

void loop()
{
	mystepper.move(1000);
  mystepper.setSpeed(200);
    mystepper.run();
}
