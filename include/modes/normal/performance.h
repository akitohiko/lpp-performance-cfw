#ifndef PERFORMANCE_H
#define PERFORMANCE_H

#include "app.h"
#include "modes/mode.h"
#include "send/send.h"

#include "aftertouch/aftertouch.h"
#include "other/conversion.h"

#define mode_performance_r 63
#define mode_performance_g 0
#define mode_performance_b 0

void performance_led(u8 ch, u8 p, u8 v, u8 s);
void performance_led_rgb(u8 ch, u8 p, u8 r, u8 g, u8 b, u8 s);

void performance_init();
void performance_timer_event();
void performance_surface_event(u8 p, u8 v, u8 x, u8 y);
void performance_midi_event(u8 port, u8 t, u8 ch, u8 p, u8 v);
void performance_aftertouch_event(u8 v);
void performance_poly_event(u8 p, u8 v);

#endif
