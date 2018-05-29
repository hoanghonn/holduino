
# holduino :clubs:

We wanted to make a prosthetic out of a luxury electronic. The Myo is well suited to working alongside arduino, it turns out, given the right library.

To replicate our setup, <ol>
<li>A windows computer running MyoConnect.exe (https://market.myo.com/app/54bd7403e4b00db53ad527a2/myoduino-), with an Arduino UNO hooked up to a servo motor (Parallax standard servo).</li>
<li>Load holduino/MyoConnect/holduino-src/holduino/holduino.ino to the Arduino UNO, and keep the UNO plugged in via USB, as it needs to communicate with the Myo through the computer.</li>
<li>To install the MyoController library, unzip the MyoDuino folder, read instructions.pdf, and manually install the library by placing MyoDuino/Arduino/MyoController in Documents/Arduino/libraries.</li>
<li>Run MyoConnect.exe and Arduino IDE, using different COM ports, as both applications make use of that feature.</li>
<li>Connect the Myo.</li>
<li>Wrap a rubber band around the outside of the claw creation.</li>
<li>Rig the servo motor such that it opposes the action of the rubber bands by conencting to any of a number of arrangments of string.</li>
</ol> 

Download MyoDuino zip file: https://market.myo.com/app/54bd7403e4b00db53ad527a2/myoduino-

Download the Arduino IDE: https://www.arduino.cc/en/Main/Software

Slick interface for testing out the Myo (MyoDiagnostics): http://diagnostics.myo.com/

Date released: Oct 9th 2016 at HackUmass IV.
