#include <address.h>
#include <adk.h>
#include <avrpins.h>
#include <BTD.h>
#include <BTHID.h>
#include <cdcacm.h>
#include <cdcftdi.h>
#include <cdcprolific.h>
#include <cdc_XR21B1411.h>
#include <confdescparser.h>
#include <controllerEnums.h>
#include <hexdump.h>
#include <hidboot.h>
#include <hidcomposite.h>
#include <hidescriptorparser.h>
#include <hiduniversal.h>
#include <hidusagestr.h>
#include <macros.h>
#include <masstorage.h>
#include <max3421e.h>
#include <max_LCD.h>
#include <message.h>
#include <parsetools.h>
#include <printhex.h>
#include <PS3BT.h>
#include <PS3Enums.h>
#include <PS3USB.h>
#include <PS4BT.h>
#include <PS4Parser.h>
#include <PS4USB.h>
#include <PSBuzz.h>
#include <settings.h>
#include <sink_parser.h>
#include <SPP.h>
#include <UHS2_gpio.h>
#include <Usb.h>
#include <UsbCore.h>
#include <usbhid.h>
#include <usbhost.h>
#include <usbhub.h>
#include <usbh_midi.h>
#include <usb_ch9.h>
#include <version_helper.h>
#include <Wii.h>
#include <xboxEnums.h>
#include <XBOXOLD.h>
#include <XBOXONE.h>
#include <XBOXRECV.h>
#include <XBOXUSB.h>

//motor connections
int speedL = ;
int Lf = ;
int Lb = ;

int speedR = ;
int Rf = ;
int Rb = ;
int i, j;


void setup() {
pinMode(Lf,OUTPUT);
pinMode(Lb,OUTPUT);
pinMode(Rf,OUTPUT);
pinMode(Rb,OUTPUT);
pinMode(speedL,OUTPUT);
pinMode(speedR,OUTPUT);
}

delay(5000);

void loop() {
  
  digitalWrite(Lf,HIGH);
  digitalWrite(Lb,LOW);
  digitalWrite(Rf,HIGH);
  digitalWrite(Rb,LOW);
  analogWrite(SpeedL,i);
  analogWrite(SpeedR,j);


  

}
