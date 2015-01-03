//==========================================
// Qproc Configuration file 747-400-qproc.inc
//==========================================
// This file contains the functions that are used for handling events that are raised by PSX
// and that need some action in EPIC. No data is sent, for this we have Pigeon Holes.

void RadioPanelLeftOff(void);
void RadioPanelCenterOff(void);
void RadioPanelRightOff(void);

//====================================================================
// Function Definition 
// Name:		RadioPanelLeftOff
// Called by:	defineqproc(1,RadioPanelLeftOff) 
//====================================================================
defineqproc(1,RadioPanelLeftOff)

void RadioPanelLeftOff()
{
// Check if next lines are ok. Purpose is to simulate displays off
	DisplayLeftOff.standby = blank;	
	DisplayLeftOff.active = blank;
}

//====================================================================
// Function Definition 
// Name:		RadioPanelCenterOff
// Called by:	defineqproc(1,RadioPanelCenterOff) 
//====================================================================
defineqproc(2,RadioPanelCenterOff)

void RadioPanelCenterOff()
{
// Check if next lines are ok. Purpose is to simulate displays off
	DisplayLeftOff.standby = blank;	
	DisplayLeftOff.active = blank;
}

//====================================================================
// Function Definition 
// Name:		RadioPanelRightOff
// Called by:	defineqproc(1,RadioPanelRightOff) 
//====================================================================
defineqproc(3,RadioPanelRightOff)

void RadioPanelRightOff()
{
// Check if next lines are ok. Purpose is to simulate displays off
	DisplayLeftOff.standby = blank;	
	DisplayLeftOff.active = blank;
}



