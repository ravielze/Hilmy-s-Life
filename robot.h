#ifndef _ROBOT_H_
#define _ROBOT_H_

#include "activity.h"
#include "event.h"
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int happiness;
    int money;
    int hygiene;
    int hunger;
    int health;
    int social;
    char * deathCause;
    bool isDead;
} Robot;

/* Constructor Robot */
Robot initRobot();

/* Executor Robot */
bool doAct(Robot *r, Activity a, bool force);
void respondEvent(Robot *r, Event *e);
void showStatus(Robot r);

#endif