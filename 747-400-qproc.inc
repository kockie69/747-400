//==========================================
// KonFIGURATION FILE
// 747-SIM.INC
//==========================================

//====================================================================
// Function Definition 
// Name:		AP1Off
// Called by:	defineqproc(142,AP1Off) 
//====================================================================
void AP1Off(void){
	MCP.leds1.led_AP1 = off;
}

//====================================================================
// Function Definition 
// Name:		AP1On
// Called by:	defineqproc(143,AP1On) 
//====================================================================
:AP1On{
	MCP.leds1.led_AP1 = on;
}

//====================================================================
// Function Definition 
// Name:		AP2Off
// Called by:	defineqproc(144,AP2Off) 
//====================================================================
:AP2Off {
	MCP.leds0.led_AP2 = off;
}


//====================================================================
// Function Definition 
// Name:		AP2On
// Called by:	defineqproc(145,AP2On) 
//====================================================================
:AP2On{
	MCP.leds0.led_AP2 = on;
}

//====================================================================
// Function Definition 
// Name:		VSOff
// Called by:	defineqproc(50,VSOff) 
//====================================================================
:VSOff {
	MCP.leds1.led_VS = off;
}

//====================================================================
// Function Definition 
// Name:		VSOn
// Called by:	defineqproc(51,VSOn) 
//====================================================================
:VSOn{
	MCP.leds1.led_VS = on;
}

//====================================================================
// Function Definition 
// Name:		ALTOff
// Called by:	defineqproc(20,ALTOff) 
//====================================================================
:ALTOff {
	MCP.leds0.led_ALT = off;
}

//====================================================================
// Function Definition 
// Name:		ALTOn
// Called by:	defineqproc(21,ALTOn) 
//====================================================================
:ALTOn{
	MCP.leds0.led_ALT = on;
}

//====================================================================
// Function Definition 
// Name:		APPOff


// Called by:	defineqproc(40,APPOff) 
//====================================================================
:APPOff {
	MCP.leds0.led_APP = off;
}

//====================================================================
// Function Definition 
// Name:		APPOn
// Called by:	defineqproc(41,APPOn) 
//====================================================================

:APPOn{
	MCP.leds0.led_APP = on;
}

//====================================================================
// Function Definition 
// Name:		LOCOff
// Called by:	defineqproc(128,LOCOff) 
//====================================================================
:LOCOff {
	MCP.leds0.led_LOC = off;
}

//====================================================================
// Function Definition 
// Name:		LOCOn
// Called by:	defineqproc(129,LOCOn) 
//====================================================================
:LOCOn{
	MCP.leds0.led_LOC = on;
}

//====================================================================
// Function Definition 
// Name:		LNAVOff
// Called by:	defineqproc(132,LNAVOff) 
//====================================================================
:LNAVOff {
	MCP.leds1.led_LNAV = off;
}

//====================================================================
// Function Definition 
// Name:		LNAVOn
// Called by:	defineqproc(133,LNAVOn) 
//====================================================================
:LNAVOn{
	MCP.leds1.led_LNAV = on;
}

//====================================================================
// Function Definition 
// Name:		HDGOff
// Called by:	defineqproc(22,HDGOff) 
//====================================================================
:HDGOff{
	MCP.leds1.led_HDG = off;
}

//====================================================================
// Function Definition 
// Name:		HDGOn
// Called by:	defineqproc(23,HDGOn) 
//====================================================================
:HDGOn{
	MCP.leds1.led_HDG = on;
}

//====================================================================
// Function Definition 
// Name:		FLCHOff
// Called by:	defineqproc(136,FLCHOff) 
//====================================================================
:FLCHOff {
	MCP.leds2.led_FLCH = off;
}

//====================================================================
// Function Definition 
// Name:		FLCHOn
// Called by:	defineqproc(137,FLCHOn) 
//====================================================================
:FLCHOn{
	MCP.leds2.led_FLCH = on;
}

//====================================================================
// Function Definition 
// Name:		SPDOff
// Called by:	defineqproc(46,SPDOff) 
//====================================================================
:SPDOff {
	MCP.leds2.led_SPD = off;
}

//====================================================================
// Function Definition 
// Name:		SPDOn
// Called by:	defineqproc(47,SPDOn) 
//====================================================================
:SPDOn{
	MCP.leds2.led_SPD = on;
}

//====================================================================
// Function Definition 
// Name:		THROff
// Called by:	defineqproc(138,THROff) 
//====================================================================
:THROff {
	MCP.leds3.led_THR = off;
}

//====================================================================
// Function Definition 
// Name:		THROn
// Called by:	defineqproc(139,THROn) 
//====================================================================
:THROn{
	MCP.leds3.led_THR = on;
}

//====================================================================
// Function Definition 
// Name:		ATOff
// Called by:	defineqproc(164,ATOff) 
//====================================================================
:ATOff {
	// TODO: Uitzoeken wat er nog meer moet gebeuren
}

//====================================================================
// Function Definition 
// Name:		ATOn
// Called by:	defineqproc(165,ATOn) 
//====================================================================
:ATOn{
	// TODO: Uitzoeken wat er nog meer moet gebeuren
}

//====================================================================
// Function Definition 
// Name:		FDOff
// Called by:	defineqproc(166,FDOff) 
//====================================================================
:FDOff {
	// TODO: Uitzoeken wat er nog meer moet gebeuren
}

//====================================================================
// Function Definition 
// Name:		FDOn
// Called by:	defineqproc(167,FDOn) 
//====================================================================
:FDOn{
	// TODO: Uitzoeken wat er nog meer moet gebeuren
}

//====================================================================
// Function Definition 
// Name:		AP3Off
// Called by:	defineqproc(146,AP3Off) 
//====================================================================
:AP3Off{
	MCP.leds2.led_AP3 = off;
}

//====================================================================
// Function Definition 
// Name:		AP3On
// Called by:	defineqproc(147,AP3On) 
//====================================================================
:AP3On{
	MCP.leds2.led_AP3 = on;
}

//====================================================================
// Function Definition 
// Name:		VNAVOff
// Called by:	defineqproc(134,VNAVOff) 
//====================================================================
:VNAVOff {
	MCP.leds2.led_VNAV = off;
}

//====================================================================
// Function Definition 
// Name:		VNAVOn
// Called by:	defineqproc(135,VNAVOn) 
//====================================================================
:VNAVOn{
	MCP.leds2.led_VNAV = on;
}

//====================================================================
// Function Definition 
// Name:		MACHOff
// Called by:	defineqproc(172,MACHOff) 
//====================================================================
:MACHOff {
// TODO: Toon wrd_IAS op Display D_AP_IAS
}

//====================================================================
// Function Definition 
// Name:		MACHOn
// Called by:	defineqproc(173,MACHOn) 
//====================================================================
:MACHOn{
// TODO: Toon wrd_MACH op Display D_AP_IAS
}


//==========================================
// QProc definitions MCP (data from FS to EPIC )
//===========================================
defineqproc(142,AP1Off)
defineqproc(143,AP1On)
defineqproc(144,AP2Off)
defineqproc(145,AP2On)
defineqproc(146,AP3Off)
defineqproc(147,AP3On)
defineqproc(50,VSOff)
defineqproc(51,VSOn)
defineqproc(20,ALTOff)
defineqproc(21,ALTOn)
defineqproc(40,APPOff)
defineqproc(41,APPOn)
defineqproc(128,LOCOff)
defineqproc(129,LOCOn)
defineqproc(132,LNAVOff)
defineqproc(133,LNAVOn)
defineqproc(22,HDGOff)
defineqproc(23,HDGOn)
defineqproc(136,FLCHOff)
defineqproc(137,FLCHOn)
defineqproc(46,SPDOff)
defineqproc(47,SPDOn)
defineqproc(138,THROff)
defineqproc(139,THROn)
// defineqproc(164,ATOff)
// defineqproc(165,ATOn)
// defineqproc(166,FDOff)
// defineqproc(167,FDOn)
defineqproc(134,VNAVOff)
defineqproc(135,VNAVOn)
// defineqproc(172,MACHOff)
// defineqproc(173,MACHOn)

