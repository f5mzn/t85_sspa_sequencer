/* SSPA sequencer
   Designed for attiny85 microcontroller

   MIT License

   Copyright (c) 2022 Olivier Le Cam <olecam@f5mzn.org>
    
   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:
    
   The above copyright notice and this permission notice shall be included in all
   copies or substantial portions of the Software.
    
   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
   SOFTWARE.
  
   Project is pure assembly in order to maximize response time and accuracy.
   This is why this ino file is empty: all the asm code is in t85_sspa_sequencer.S

   Input:
   PB3: PTT (tx to ground)

   Outputs:
   PB2: event#1: switch on the RF relays
   PB1: event#2: 50 milliseconds after event#1, turn on ldmos amplifier bias
   PB0: event#3: 50 milliseconds after event#2, enable RF output from the driver

   Upon switching back to receive, these events are performed in reverse order, also spaced apart by 50ms in time.
 
*/
   
