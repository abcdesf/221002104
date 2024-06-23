// timer.h
#ifndef TIMER_H
#define TIMER_H

#include <chrono>

extern std::chrono::time_point<std::chrono::high_resolution_clock> start_time;

void initialize_timer();
bool is_timeout();

#endif // TIMER_H

