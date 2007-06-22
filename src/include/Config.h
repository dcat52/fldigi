// generated by Fast Light User Interface Designer (fluid) version 1.0107

#ifndef Config_h
#define Config_h
#include <FL/Fl.H>
#include "globals.h"
#include "modem.h"
#include "configuration.h"
extern Fl_Double_Window *dlgConfig;
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Tabs.H>
extern Fl_Tabs *tabsConfigure;
#include <FL/Fl_Group.H>
extern Fl_Group *tabOperator;
#include <FL/Fl_Input.H>
extern Fl_Input *inpMyCallsign;
extern Fl_Input *inpMyName;
extern Fl_Input *inpMyQth;
extern Fl_Input *inpMyLocator;
#include <FL/Fl_Check_Button.H>
extern Fl_Check_Button *btnUseLeadingZeros;
#include <FL/Fl_Value_Input.H>
extern Fl_Value_Input *nbrContestStart;
extern Fl_Value_Input *nbrContestDigits;
extern Fl_Group *tabWaterfall;
extern Fl_Check_Button *btnBlackman;
extern Fl_Check_Button *btnHamming;
extern Fl_Check_Button *btnHanning;
extern Fl_Check_Button *btnTriangular;
extern Fl_Check_Button *btnUseCursorLines;
extern Fl_Check_Button *btnUseBWTracks;
extern Fl_Check_Button *btnUseCursorCenterLine;
extern Fl_Check_Button *btnViewXmtSignal;
#include "colorbox.h"
extern colorbox *Palette;
#include <FL/Fl_Button.H>
extern Fl_Button *btnColor[9];
extern Fl_Button *btnLoadPalette;
extern Fl_Button *btnSavePalette;
extern Fl_Group *tabInterface;
#include <FL/Fl_Round_Button.H>
extern Fl_Input *inpTTYdev;
extern Fl_Round_Button *btnRTSptt;
extern Fl_Round_Button *btnDTRptt;
extern Fl_Round_Button *btnRTSplusV;
extern Fl_Round_Button *btnDTRplusV;
#include <FL/Fl_Box.H>
extern Fl_Round_Button *btnPTT[5];
extern Fl_Check_Button *chkUSEHAMLIB;
extern Fl_Check_Button *chkUSEMEMMAP;
extern Fl_ComboBox *cboHamlibRig;
extern Fl_Input *inpRIGdev;
#include <FL/Fl_Choice.H>
extern Fl_Choice *mnuBaudRate;
extern Fl_Check_Button *chkUSERIGCAT;
extern Fl_Button *btnInit_Interface;
extern Fl_Check_Button *btnQRZnotavailable;
extern Fl_Check_Button *btnQRZsocket;
extern Fl_Check_Button *btnQRZcdrom;
extern Fl_Group *tabSoundCard;
extern Fl_Tabs *tabsSoundCard;
extern Fl_Group *tabMixer;
#include <FL/Fl_Light_Button.H>
extern void setMixerInput(int);
extern Fl_Light_Button *btnLineIn;
extern Fl_Light_Button *btnMicIn;
#include <FL/Fl_Value_Slider.H>
extern void setPCMvolume(double);
extern Fl_Value_Slider *valPCMvolume;
#include <FL/Fl_Input_Choice.H>
extern Fl_Input_Choice *menuMix;
extern void resetMixerControls();
extern Fl_Check_Button *btnMixer;
extern Fl_Group *tabAudio;
#include <FL/Fl_Spinner.H>
extern Fl_Spinner *cntRxRateCorr;
extern Fl_Spinner *cntTxRateCorr;
extern Fl_Spinner *cntTxOffset;
extern Fl_Group *AudioIO;
extern Fl_Round_Button *btnAudioIO[2];
extern Fl_Input_Choice *menuOSSDev;
extern Fl_Input_Choice *menuPADev;
extern Fl_Value_Input *valCWsweetspot;
extern Fl_Value_Input *valRTTYsweetspot;
extern Fl_Value_Input *valPSKsweetspot;
extern Fl_Check_Button *btnStartAtSweetSpot;
extern Fl_Check_Button *btnsendid;
extern Fl_Group *tabModems;
extern Fl_Tabs *tabsModems;
extern Fl_Group *tabCW;
extern Fl_Value_Slider *sldrCWbandwidth;
#include <FL/Fl_Counter.H>
extern Fl_Counter *cntCWrange;
extern Fl_Check_Button *btnCWrcvTrack;
#include <FL/Fl_Value_Output.H>
extern Fl_Value_Output *valCWrcvWPM;
#include <FL/Fl_Progress.H>
extern Fl_Progress *prgsCWrcvWPM;
extern Fl_Value_Slider *sldrCWxmtWPM;
extern Fl_Counter *cntCWlowerlimit;
extern Fl_Counter *cntCWupperlimit;
extern Fl_Counter *cntCWweight;
extern Fl_Counter *cntCWdash2dot;
extern Fl_Counter *cntCWrisetime;
extern Fl_Counter *cntCWdefWPM;
extern Fl_Group *tabCWQSK;
extern Fl_Check_Button *btnQSK;
extern Fl_Counter *cntPreTiming;
extern Fl_Counter *cntPostTiming;
extern Fl_Group *tabDomEX;
extern Fl_Input *txtSecondary;
extern Fl_Button *btnRestartDomEX;
extern Fl_Counter *valDominoEX_BW;
extern Fl_Group *tabFeld;
#include "fontdef.h"
extern Fl_Choice *selHellFont;
extern Fl_Value_Slider *sldrHellBW;
extern Fl_Check_Button *btnHellXmtWidth;
extern Fl_Check_Button *btnHellRcvWidth;
extern Fl_Check_Button *btnBlackboard;
extern Fl_Check_Button *btnHellFastAttack;
extern Fl_Check_Button *btnHellSlowAttack;
extern Fl_Check_Button *btnFeldHellIdle;
extern Fl_Group *tabOlivia;
extern Fl_Choice *mnuOlivia_Tones;
extern Fl_Choice *mnuOlivia_Bandwidth;
extern Fl_Button *btnRestartOlivia;
extern Fl_Check_Button *btnPSKmailSweetSpot;
extern Fl_Group *tabRTTY;
extern Fl_Choice *selShift;
extern Fl_Choice *selBaud;
extern Fl_Choice *selBits;
extern Fl_Choice *selParity;
extern Fl_Choice *selStopBits;
extern Fl_Check_Button *chkPseudoFSK;
extern Fl_Button *btnRestartRtty;
extern Fl_Check_Button *btnCRCRLF;
extern Fl_Check_Button *btnAUTOCRLF;
extern Fl_Counter *cntrAUTOCRLF;
extern Fl_Check_Button *btnRTTY_USB;
extern Fl_Round_Button *btnRTTYafc[3];
extern Fl_Check_Button *btnPreferXhairScope;
#include <FL/Fl_Return_Button.H>
extern Fl_Return_Button *btnCloseConfig;
extern Fl_Button *btnSaveConfig;
Fl_Double_Window* ConfigureDialog();
void openConfig();
void closeDialog();
void createConfig();
#endif
