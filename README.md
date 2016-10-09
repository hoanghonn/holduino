TODO: adding the .ino file for arduino
TODO: adding fritzing
TODO: putting folder called MyoConnect into holduino/libraries, so that users can correctly install the libraries

#Holduino

We wanted to make a prosthetic out of a luxury electronic. The Myo is well suited to working alongside arduino, it turns out, given the right library.

To replicate our setup, <ol>
<li>A windows10 laptop running MyoConnect.exe (https://market.myo.com/app/54bd7403e4b00db53ad527a2/myoduino-), with an Arduino UNO hooked up to a servo motor (Parallax standard servo).</li>
<li>To install the MyoController library, unzip the MyoDuino folder, read instructions.pdf, and manually install the library by placing MyoDuino/Arduino/MyoController in Documents/Arduino/libraries.</li>
<li>Run MyoConnect.exe and Arduino IDE, using different COM ports, as both applications make use of that feature.</li>
<li>Connect the Myo and rig up the 3D creation as specified in help.pdf</li>
</ol> 

Download MyoDuino zip file: https://market.myo.com/app/54bd7403e4b00db53ad527a2/myoduino-

Download the Arduino IDE: https://www.arduino.cc/en/Main/Software

Slick interface for testing out the Myo (MyoDiagnostics): http://diagnostics.myo.com/

Date released: Oct 9th 2016 at HackUmass IV.
