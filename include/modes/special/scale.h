#ifndef SCALE_H
#define SCALE_H

#include "app.h"
#include "modes/mode.h"
#include "send/send.h"

#include "modes/normal/note.h"
#include "modes/normal/chord.h"

u8 scales(u8 s, u8 i);
u8 scales_length(u8 s);

void scale_setup_init();
void scale_setup_timer_event();
void scale_setup_surface_event(u8 p, u8 v, u8 x, u8 y);
void scale_setup_midi_event(u8 port, u8 t, u8 ch, u8 p, u8 v);
void scale_setup_aftertouch_event(u8 v);
void scale_setup_poly_event(u8 p, u8 v);

#endif
