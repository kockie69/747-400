//==========================================
// PH Configuration file 747-400-ph.inc
//==========================================
// This file contains the Pigeon hole functions that are used for transmitting data from
// PSX into the EPIC.

//************************************
ph AltnFlapsArm(1)
{
  word W1;
  word W0;
  AltnFlapsArmWord = AltnFlapsArm.W0;
  
  if (AltnFlapsArmWord && 0x0001) {
  	Gear.leds0.led_ARM = on;
  }
  else {
  	Gear.leds0.led_ARM = off;
  }    
};

//************************************
ph AltnGearNoseBody(2)
{
  word W1;
  word W0;
  AltnGearNoseBodyWord = AltnGearNoseBody.W0;
  
  if (AltnGearNoseBodyWord && 0x0001) {
  	Gear.leds0.led_NOSE = on;
  }
  else {
  	Gear.leds0.led_NOSE = off;
  }
};

//************************************
ph AltnGearWings(3)
{
  word W1;
  word W0;
  AltnGearWingsWord = AltnGearWings.W0;
  
  if (AltnGearWingsWord && 0x0001) {
    	Gear.leds0.led_WING = on;
  }
  else {
  	Gear.leds0.led_WING = off;
  }	
};

//************************************
ph RadioPanelLeftHF(4)
{
  word W1;
  word W0;
  preFrac = RadioPanelLeftHF.W0/1000;
  frac = RadioPanelLeftHF.W0 % 1000;
  DisplayLeftHF.active = preFrac;	//display number to PH10
  DisplayLeftHF.activeFrac = frac;
  preFrac = RadioPanelLeftHF.W1/1000;
  frac = RadioPanelLeftHF.W1 % 1000;
  DisplayLeftHF.standby = preFrac;	//display number to PH10
  DisplayLeftHF.standbyFrac = frac;
 
};

//************************************
ph RadioPanelLeftVHF(5)
{
  word W1;
  word W0;
  preFrac = RadioPanelLeftVHF.W0/100;
  frac = RadioPanelLeftVHF.W0 % 100;
  DisplayLeftVHF.active = preFrac;	//display number to PH10
  DisplayLeftVHF.activeFrac = frac;
  preFrac = RadioPanelLeftVHF.W1/100;
  frac = RadioPanelLeftVHF.W1 % 100;
  DisplayLeftVHF.standby = preFrac;	//display number to PH10
  DisplayLeftVHF.standbyFrac = frac;
 
};

//************************************
ph RadioPanelLeftSen(6)
{
  word W1;
  word W0;
  preFrac = RadioPanelLeftSen.W0/1000;
  frac = RadioPanelLeftSen.W0 % 1000;
  DisplayLeftSen.active = preFrac;	//display number to PH10
  DisplayLeftSen.activeFrac = frac;

  frac = 5;
  preFrac = RadioPanelLeftSen.W1;
  DisplayLeftSen.standbySen = preFrac;	//display number to PH10
  DisplayLeftSen.standbySenNr = frac;
};

//************************************
ph GPWSGS(7)
{
  word W1;
  word W0;
  GPWSGSWord = GPWSGS.W0;
  
  if (GPWSGSWord && 0x0001) {
  	GPWS.leds0.led_GS = on;
  }
  else {
  	GPWS.leds0.led_GS = off;
  }
};

//************************************
ph GPWSFlap(8)
{
  word W1;
  word W0;
  GPWSFlapWord = GPWSFlap.W0;
  
  if (GPWSFlapWord && 0x0001) {
  	GPWS.leds0.led_FLAP = on;
  }
  else {
  	GPWS.leds0.led_FLAP = off;
  }
};

//************************************
ph GPWSGear(9)
{
  word W1;
  word W0;
  GPWSGearWord = GPWSGear.W0;
  
  if (GPWSGearWord && 0x0001) {
  	GPWS.leds0.led_GEAR = on;
  }
  else {
  	GPWS.leds0.led_GEAR = off;
  }
};

ph BrtUpr(10)
{
  word W1;
  word W0;
  if (!BrtUprInitialized) {
  	wrd_BrtUpr = BrtUpr.W0;
  }
};

ph BrtLwr(11)
{
  word W1;
  word W0;
  if (!BrtLwrInitialized) {
  	wrd_BrtLwr = BrtLwr.W0;
  }
};
