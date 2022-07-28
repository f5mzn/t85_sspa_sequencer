# t85_sspa_sequencer
SSPA Sequencer for the attiny85 microcontroller (part of a protection board projet).

Project is pure assembly in order to maximize response time and accuracy.
This is why this ino file is empty: all the asm code is in `t85_sspa_sequencer.S`.

* Input:
  - PB3: PTT (tx to ground).

* Outputs:
  - PB2: event#1: switch on the RF relays;
  - PB1: event#2: 50 milliseconds after event#1, turn on ldmos amplifier bias;
  - PB0: event#3: 50 milliseconds after event#2, enable RF output from the driver.

Upon switching back to receive, these events are performed in reverse order, also spaced apart by 50ms in time.
