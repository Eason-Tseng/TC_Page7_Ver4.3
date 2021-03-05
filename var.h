#ifndef varH
#define varH
//---------------------------------------------------------------------------

#include <time.h>

// #define ShowInfoToSTD

#define INIPATHFILE "/cct/Data/SETTING/SET.ini"
#define SEGMENTFILE "/Data/SegmentData.ini"
#define VDDATAFILE "/cct/vddata/dev.cfg"

//XML define Arwen 1001006
#define PLANXMLFILE "/tmp/www/xml/planInfo.xml"
#define SEGMENTXMLFILE "/tmp/www/xml/segment.xml"
#define WEEKDAYXMLFILE "/tmp/www/xml/weekday.xml"
#define HOLIDAYXMLFILE "/tmp/www/xml/holiday.xml"
#define DEVIDXMLFILE "/tmp/www/xml/devid.xml"
#define PHASEIDXMLFILE "/tmp/www/xml/phaseid.xml"
#define ACTMODEPLANFILE "/tmp/www/xml/actModeplan.xml"

#define SignalConflictVersion 0                                                 //GreenConflictVersion
#define MaxOpenUDPPort 32

#define BYTE unsigned char                                                      //ANSI C 嚙踝蕭嚙緹嚙踝蕭BYTE嚙緻嚙諉字

#define HI(w) ((BYTE) (((unsigned short int) (w) >> 8) & 0xFF))                 //嚙瘩HI byte
#define LO(w) ((BYTE) (w))                                                      //嚙瘩LO byte

//OT20111020
#define noRcvAckReSend  false                                                    //true:normal false: debug
// #define noRcvAckReSend  true                                                    //true:normal false: debug
//when no receive ack, after 5 sec, resend message again?
#define Protocal5F1CStopStep 0                                                  // only 0, 2 means in green or people Redd
//OT20111128, remove~ #define MACHINELOCATE 0                                                         /* Hsinchu:0 Tainan:1 Yulin:2 */
#define MACHINELOCATEATHSINCHU 0
#define MACHINELOCATEATTAINAN  1
#define MACHINELOCATEATYULIN   2

void SendRequestToKeypad(void);                                              //詢問目前keypad狀態
void BRT_Query8051Status(void);     // jacky20140108 Query 8051 Status
void BRT_QueryKeypadStatus(void);   // jacky20140114 Query Keypad Status

extern unsigned int CheckOnTimeCount;
extern unsigned short int CycleRunCount;
extern unsigned short int CountBF08;
extern unsigned short int TenCycle;

#define BUFFERSIZE          1024
#define MSGINSIZE             64
#define MSGWAITREPONSECOUNT  256
#define cWRITE                81                                                //嚙篇嚙碼
#define cREAD                 82                                                //讀嚙皚
#define cRS232                83                                                //RS232
#define cUDP                  84                                                //UDP

#define cInner                85                                                //嚙踝蕭嚙踝蕭嚙褒選蕭
#define cOutWard              86                                                //I/O

#define cComingFromScreen     87                                                //嚙踝蕭嚙踝蕭嚙盤嚙諉，嚙瞑嚙褕佗蕭cInner嚙踝蕭嚙褊踝蕭
#define cTester               88                                                //嚙賤提嚙踝蕭桴嚙穀uFFFD

//OT Pass
#define cP1ToCenter           91
#define cP2ToCenter           92
#define cP3ToCenter           93
#define cP4ToCenter           94

#define cCenterToP1           101
#define cCenterToP2           102
#define cCenterToP3           103
#define cCenterToP4           104

#define cComingFromAmegidsCrossServer  105


#define INVAILDVALUE         999

#define cHEX                  31                                                //16嚙箠嚙踝蕭s嚙碼
#define cBCD                  32                                                //BCD嚙編嚙碼

//OTCombo
#define TC92_ucControlStrategy  1
#define TC92_iEffectTime        2
#define TC92_iUpdatePhaseData   3                                               //嚙踝蕭Phase嚙踝蕭嚙編嚙褕，嚙踝蕭flag嚙諄迎蕭
#define TC92_TransmitCycle5F0F_Change 4
#define TC92_TransmitCycle5F03_Change 5
#define TC92SignalLightStatus_5F0F_IntervalTime 6
#define TC92SignalStepStatus_5F03_IntervalTime 7
#define TC92_PlanOneTime5F18_Change 8
#define TC92_PlanOneTime5F18_PlanID 9
#define TC_DoorStatus_Change 10
#define TC_SignalConflictError 11
#define TC92_SubPhaseOfPhasePlanIncorrent 12
#define TC92_RedCountVer 13
#define Com2_TYPE 14

#define TC92_5F1C_SPID 15
#define TC92_5F1C_SID 16
#define TC92_5F1C_ET 17

//OT 960425 CHAIN
#define TC92_5F31Manual          301
#define TC92_5F31TOD             302
#define TC92_5F31StartSubPhaseId 303
#define TC92_5F31EndSubPhaseId   304
#define TC92_5F32StartSubPhaseId 305
#define TC92_5F32EndSubPhaseId   306
#define TC_MotherChainStartStepId 307
#define TC_MotherChainEndStepId 308

#define TC_KeyPadP6Value         310

#define TC_ActuateVDID           311

#define TC_TrainChainNOW         312
#define TC_TrainChainLast        313
#define TC_TrainComingBanSubphase 314
#define TC_TrainComingForceJumpSubphase 315
#define TC_TrainChainEnable      316
#define TC_ReverseLane_Control_Mode      317
#define TC_ReverseLane_Manual_Enable_Status      318

//OT980420
#define TC_Redcount_Booting_Display_Enable  319
#define TC_Redcount_Display_Enable  320

#define TC_CSTC_ControlStrategy 321
#define TC_CSTC_FieldOperate    322

//OT980907
#define TC_CCT_ActuateType_By_TOD 323

//OT990419
#define DynShowRedCountForAct 324

#define TC_CCT_Send_ActuateArwen_Protocal 325


//OT990621
#define revSyncEnable 326
#define revSyncInterval 327
#define revSyncTimeDiffTolarence 328
#define revSyncCountineStatusAdj 329
#define revDefaultVehWay 330
#define revLogToFile 331
#define revSendProtocol 332
#define revSyncByteStatus   333

#define amegidsDynEnable  334
#define amegidsDynDevLCN  335

//ARWEN 100/01/21
#define PedestrianModeOpen 336
//ARWEN 100/09/22
#define fixedGreenModeOpen 337
//ARWEN 100/10/07
#define actuateSwitchChange_for_Arwen 338

#define TOD_PLAN_ID       339

//OT20110607
#define TC_CCT_SendCCTPhaseCycleProtocalForCenter 340
#define CSTC_SegmentNoRunning 341

//OT20110624
#define CSTC_RedcountRepeatCount 342

//OT20111128
#define TC_CCT_MachineLocation 343

//ARWEN++1001207
#define ArwenActRedCountSec 344

//Chou++2012/10/01
#define TC_Actuateautoswitch 345

//jacky20140115 BRT
#define BRT_Light_Display_Enable 346

//OT20111201
#define TC_TrainComingBanSubphase2 347
//OT20131225
#define CCJ_HeartBeatCount 348

//OT20140415
// #define TCDynSegAdjustType  349
#define TCDynSegAdjustKeepTime   350
#define TCDynSegRemainSec   351
#define TCDynSegAdjustHour   352
#define TCDynSegAdjustMin   353

//CCJ 20140526 ActType
#define ActType 354
#define ActPlan 355
#define ActComp 356

//OT Debug 0523
#define TC_CCT_In_LongTanu_ActuateType_Switch 18
#define TC_CCT_In_LongTanu_ActuateType_FunctionEnable 19

//OT Debug Signal 951116
#define TC_SIGNAL_NEXT_STEP_OK 20
#define TC_SIGNAL_DRIVER_UNIT  21

#define TC_GreenConflictDetFromCSTC 30
#define TC_GreenConflictDetFromDIO 31

#define TC_Actuate_By_TFD         25
#define TC_CCTActuate_TOD_Running 26
#define TC_CCT_TFD_ActuateType_ExtenCount 27
#define TC_CCT_TFD_ActuateType_Switch 28
#define TC_CCT_TFD_ActuateType_FunctionEnable 29

#define CCJ_SendStepToCCJ         30

//OT070402
#define GPS_SYNC                  33

#define NextStepForceEnable       34

#define EnableUpdateRTC           35
#define IFGetResetTCSignal        36

#define TCSegmentTypeUpdate       37

//OT20140415
#define TCDynSegSwitch            38
#define TCDynSegStatus            39
#define TCDynSegNextPlanIdSendToCCJ   40

#define TC_Phase 0
#define TC_Plan 1
#define TC_SegType 2

#define TC_RedCountNA 0
#define TC_RedCountVerHK 1
#define TC_RedCountVer94 2
#define TC_RedCountVer94v2 3
#define TC_RedCountVerCCT97  4

#define Com2IsGPSPort 0
#define Com2IsTesterPort 1
#define Com2IsPassingPort 3
#define Com2IsRedCount 4
#define Com2IsTainanPeopleLight 5
#define Com2IsPedestrianPushButton 6 //add arwen
#define Com2IsRedCountAndCom1IsPedPushButton 7 //add arwen
#define Com2IsHOLUXGPSPort 8

//CSTC VAR=================================================
#define CSTC_exec_phase_current_subphase      0
#define CSTC_exec_phase_current_subphase_step 1
#define CSTC_exec_segment_current_seg_no      2
#define CSTC_exec_plan_phase_order 3
#define CSTC_exec_plan_plan_ID 4
#define CSTC_exec_plan_green_time 5
#define CSTC_exec_plan_pedgreenflash_time 6
#define CSTC_exec_plan_pedred_time 7
#define CSTC_exec_plan_yellow_time 8
#define CSTC_exec_plan_allred_time 9
#define CSTC_exec_segment_type 10 //110802arwen++
//OT20140214
#define CSTC_exec_plan_maxgreen_time 11
#define CSTC_exec_plan_mingreen_time 12
#define CSTC_exec_plan_green_time_compesated 13
//jacky20140813
#define CSTC_exec_BF13plan_Extend_East 14
#define CSTC_exec_BF13plan_Extend_West 15

//OT20140415
#define CSTC_exec_plan_cycle 16

#define TC_CHAIN_SIGNAL_IN_START_SUB_PAHSE   true
#define TC_CHAIN_SIGNAL_IN_END_SUB_PAHSE     false

//---------------------------------------------------------------------------
//Copy From ParseTraffic
typedef struct BCD{
        BYTE b1:4;
        BYTE b2:4;
}BCD;
typedef union BCDSW{
        BCD bcdHiLo;
        BYTE bcdCode;
}BCDSW;

//-----------------------------------------------
typedef struct MESSAGEOK {
        int protocol;                                                           //嚙誕用迎蕭嚙緬嚙確嚙踝蕭w嚙踝蕭嚙踝蕭,嚙請參佗蕭var.h嚙緩嚙緬嚙箠嚙賞的嚙踝蕭w
        BYTE packet[BUFFERSIZE];                                                //嚙踝蕭琩嚙緩嚙褊包嚙踝蕭嚙箴
        int packetLcn;                                                          //嚙踝蕭嚙踝蕭w嚙踝蕭嚙踝蕭f嚙編嚙踝蕭,嚙線嚙璀嚙諄抬蕭PTRAFFIC(嚙踝蕭q嚙踝蕭嚙緬嚙確嚙踝蕭w)嚙諄永琦CMS...嚙踝蕭
        int packetLength;                                                       //嚙踝蕭嚙踝蕭w嚙踝蕭嚙穀uFFFD
        bool cksStatus;                                                         //嚙瞑嚙瞌嚙踝蕭嚙褊包嚙踝蕭checkSum嚙踝蕭嚙確嚙瞑嚙稻,嚙箠嚙窮嚙踝蕭
        bool success;                                                           //嚙瞑嚙瞌嚙踝蕭嚙褊包嚙踝蕭嚙踝蕭w嚙踝蕭袢嚙踝蕭嚙盤嚙諂哨蕭嚙踝蕭嚙瞑嚙瞌,嚙箠嚙窮嚙踝蕭
        int UDPorRS232;                                                         //嚙踝蕭嚙褊包嚙諉自佗蕭B
        int ReadorWrite;                                                        //嚙瞎嚙緩嚙踝蕭嚙褊包嚙瞌讀嚙皚嚙踝蕭嚙諄寫嚙碼嚙踝蕭嚙褊包 read or write
        int InnerOrOutWard;                                                     //嚙踝蕭嚙踝蕭嚙褒選蕭嚙誶是嚙緲嚙盤I/O mtyu
        int packetint[BUFFERSIZE];                                              //packect for int chou++ 2013/06/05
        bool bGetDLE;
        bool bGetSOH; //the same with STX
        bool bGetACK;
        bool bGetNAK;
        unsigned int uiPacketTEXTLEN;


} MESSAGEOK;

typedef struct SwitchBIT {
        BYTE b1:1;
        BYTE b2:1;
        BYTE b3:1;
        BYTE b4:1;
        BYTE b5:1;
        BYTE b6:1;
        BYTE b7:1;
        BYTE b8:1;
} SwitchBIT;
typedef union  DATA_Bit{
        SwitchBIT switchBit;
        BYTE DBit;
} DATA_Bit;

typedef struct sChildChain{
        bool bHaveReasonableChildChainSignal;
        time_t oldStartTime;
        time_t newStartTime;
        time_t oldEndTime;
        time_t newEndTime;
        int iChainCycle;
        int iStartKeepTime;
        int iEndKeepTime;
} sChildChain;


typedef struct sRevSyncStatus{
  bool bYMD_OK;
  bool bTime_OK;
  bool bRevStep_OK;
  bool bRevSegSet_OK;
  bool bRevTime_OK;
} sRevSyncStatus;


//---------------------------------------------------------------------------
//---------------------------------------------------------------------------   //嚙緩嚙緬嚙箠嚙踝蕭s嚙踝蕭嚙踝蕭嚙稽嚙踝蕭
#define DEVICEUNKNOW          99                                                //嚙踝蕭嚙踝蕭嚙踝蕭O嚙踝蕭嚙瘤嚙瘤
#define DEVICEMUTILPROTOCOL  100                                                //嚙箠嚙賞有嚙篁嚙諍剁蕭w嚙緬嚙緻嚙踝蕭port嚙箠嚙踝蕭
#define DEVICECENTER77       101                                                //77嚙羯嚙踝蕭嚙賣控嚙踝蕭嚙踝蕭
#define DEVICECENTER87       102                                                //87嚙羯嚙踝蕭嚙賣控嚙踝蕭嚙踝蕭
#define DEVICECENTER92       103                                                //92嚙羯嚙踝蕭嚙賣控嚙踝蕭嚙踝蕭
#define DEVICECENTERNTCIP    104                                                //NTCIP嚙羯嚙踝蕭嚙賣控嚙踝蕭嚙踝蕭
#define DEVICETESTER77       105                                                //77嚙羯嚙踝蕭嚙緹嚙踝蕭嚙穀uFFFD嚙踝蕭嚙調橘蕭
#define DEVICETESTER87       106                                                //87嚙羯嚙踝蕭嚙緹嚙踝蕭嚙穀uFFFD嚙踝蕭嚙調橘蕭
#define DEVICETESTER92       107                                                //92嚙羯嚙踝蕭嚙緹嚙踝蕭嚙穀uFFFD嚙踝蕭嚙調橘蕭
#define DEVICETESTERNTCIP    108                                                //NTCIP嚙羯嚙踝蕭嚙緹嚙踝蕭嚙穀uFFFD嚙踝蕭嚙調橘蕭
#define DEVICE77TC           109                                                //77嚙羯嚙踝蕭嚙踝蕭嚙綞嚙踝蕭嚙踐器
#define DEVICE87TC           110                                                //87嚙羯嚙踝蕭嚙踝蕭嚙綞嚙踝蕭嚙踐器
#define DEVICE87CMS          111                                                //87嚙羯嚙踝蕭嚙踝蕭T嚙箠嚙豌梧蕭嚙踐器
#define DEVICE87VD           112                                                //87嚙羯嚙踝蕭嚙踝蕭嚙踝蕭嚙踐器
#define DEVICE92TC           113                                                //92嚙羯嚙踝蕭嚙踝蕭嚙綞嚙踝蕭嚙踐器
#define DEVICE92CMS          114                                                //92嚙羯嚙踝蕭嚙踝蕭T嚙箠嚙豌梧蕭嚙踐器
#define DEVICE92VD           115                                                //92嚙羯嚙踝蕭嚙踝蕭嚙踝蕭嚙踐器
#define DEVICENTCIPTC        116                                                //NTCIP嚙踝蕭嚙綞嚙踝蕭嚙踐器
#define DEVICENTCIPCMS       117                                                //NTCIP嚙踝蕭T嚙箠嚙豌梧蕭嚙踐器
#define DEVICENTCIPVD        118                                                //NTCIP嚙踝蕭嚙踝蕭嚙踐器
#define DEVICEKEYPAD         119                                                //嚙瘤嚙談哨蕭嚙瞌嚙踝蕭嚙踝蕭嚙踝蕭L
#define DEVICERTMS           120                                                //RTMS
#define DEVICESS             121                                                //SMART SENSOR
#define DEVICEOWNWAY         122                                                //嚙踝蕭嚙踝蕭嚙踝蕭O嚙誼潘蕭
#define DEVICEEOI            123                                                //嚙踝蕭贗嚙瞌嚙誼潘蕭
#define DEVICELISCMS         124                                                //嚙綞嚙稻嚙衛琦CMS
/*OTCombo0713*/
#define DEVICETRAFFICLIGHT   125                                                //嚙諍程嚙踝蕭嚙瞌嚙踝蕭嚙踝蕭O
#define DEVICEREDCOUNTVER94  126                                                //嚙踝蕭O嚙誼數裝置 (嚙踝蕭嚙穀uFFFD
#define DEVICEREDCOUNTVERHK  127                                                //嚙踝蕭O嚙誼數裝置 (嚙踝蕭嚙踝蕭)
//#define DEVICEGPS            128
#define DEVICETAINANPEOPLELIGHT 129

#define DEVICECCJDYNCTL      130
#define DEVICEREDCOUNTVERCCT97  131
#define DEVICEREVMANUALPAD   132

#define DEVICEREVSYNC   133
#define DEVICEAMEGIDS   134
#define DEVICEPEDESTRIAN 135//add Arwen
#define DEVICEARWENVDINFO 136//add Arwen
#define DEVICEWEBSET 137//add Arwen
#define DEVICEGPS    138 //add chou 2013/03/22           //NEWcom5 GPS
#define DEVICENSPREDCOUNT    139 //add chou 2013/03/22      //NEWcom6 REDCOUNT
#define DEVICEGREENMANCOUNT 140//add chou 2013/05/23     //NEWcom7 GREENMAN
#define DEVICEBRT           141 //OT20140224
#define DEVICEJSON          142 //jacky20140327
#define DEVICECOUNTDOWN     143  //jacky20140426
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------   //嚙緩嚙緬嚙箠嚙賞的嚙踝蕭w
#define PROTOCOLUNKNOW       200                                                //嚙踝蕭嚙瞎嚙踝蕭嚙踝蕭嚙踝蕭w
#define PROTOCOL77           201                                                //嚙踝蕭q嚙踝蕭77嚙羯嚙踝蕭嚙緬嚙確嚙踝蕭w
#define PROTOCOL87           202                                                //嚙踝蕭q嚙踝蕭87嚙羯嚙踝蕭嚙緬嚙確嚙踝蕭w
#define PROTOCOL92           203                                                //嚙踝蕭q嚙踝蕭92嚙羯嚙踝蕭嚙緬嚙確嚙踝蕭w
#define PROTOCOLNTCIP        204                                                //嚙踝蕭q嚙踝蕭NTCIP嚙緬嚙確嚙踝蕭w
#define PROTOCOLKEYPAD       205                                                //嚙瘤嚙談哨蕭嚙瞌嚙踝蕭嚙踝蕭嚙踝蕭L嚙緬嚙確嚙踝蕭w
#define PROTOCOLRTMS         206                                                //RTMS嚙緬嚙確嚙踝蕭w
#define PROTOCOLSS           207                                                //SMART SENSOR嚙緬嚙確嚙踝蕭w
#define PROTOCOLOWNWAY       208                                                //嚙踝蕭嚙踝蕭嚙踝蕭O嚙誼數通嚙確嚙踝蕭w
#define PROTOCOLEOI          209                                                //嚙踝蕭贗嚙瞌嚙誼數通嚙確嚙踝蕭w
#define PROTOCOLLISCMS       210                                                //嚙綞嚙稻嚙衛琦CMS嚙緬嚙確嚙踝蕭w
#define PROTOCOLTRAFFICLIGHT 211
#define PROTOCOLREDCOUNTVER94 212                                               //94嚙羯嚙踝蕭O嚙誼潘蕭
#define PROTOCOLREDCOUNTVERHK 213                                               //93嚙羯嚙踝蕭O嚙誼潘蕭 (嚙踝蕭嚙踝蕭)

#define PROTOCOLCCJ        214
#define PROTOCOLREDCOUNTVERCCT97  215
#define PROTOCOLREVMANUALPAD  216

#define PROTOCOLREVSYNC      217
#define PROTOCOLAMEGIDS      218
#define PROTOCOLPEDESTRIAN      219//add Arwen
#define PROTOCOLARWENVD      220//add Arwen
#define PROTOCOLWEBSET      221//add Arwen
#define PROTOCOLNSPREDCOUNT 222//add chou 2013/05/23 南科紅燈倒數用
#define PROTOCOLGREENMANCOUNT 223//add chou 2013/05/23南科行人倒數用
//OT20140224
#define PROTOCOLBRT 224
//jacky20140426
#define PROTOCOLCOUNTDOWN 225

//---------------------------------------------------------------------------
//---------------------------------------------------------------------------   //嚙緩嚙緬嚙箠嚙賞的LCD嚙箴嚙踝蕭
#define cNONE                300                                                //嚙褐白哨蕭嚙踝蕭(嚙踝蕭嚙瞌嚙瑾)
#define cLOGO                301                                                //嚙踝蕭嚙踝蕭LOGO
#define cLOGIN               302                                                //嚙緯嚙皚嚙箴嚙踝蕭
#define cLOGINERR            303                                                //嚙緯嚙皚嚙踝蕭~嚙箴嚙踝蕭
#define cMAIN                304                                                //嚙瘩嚙踝蕭嚙穀uFFFD
#define cCTLSETUP            305                                                //嚙踝蕭嚙踐器嚙稽嚙緩嚙瘩嚙踝蕭嚙穀uFFFD
#define cCTLNO               306                                                //嚙稽嚙複編嚙踝蕭
#define cLASTDOWN            307                                                //嚙磕嚙踝蕭嚙稻嚙緬嚙褕塚蕭
#define cMODIFYDT            308                                                //嚙踝蕭n伅嚙踝蕭瑊z
#define cFWVERDT             309                                                //嚙箭嚙賡版嚙踝蕭嚙踝蕭嚙穀uFFFD
#define cHWCYCLE             310                                                //嚙緩嚙踝蕭^嚙踝蕭g嚙編]嚙緩
#define cMODIFYPWD           311                                                //嚙踝蕭嚙皺嚙碼
#define cDBSETUP             312                                                //嚙踝蕭s嚙緣嚙諄密嚙碼
#define cOPERSTAT            313                                                //嚙畿嚙瑾嚙踝蕭嚙緘
#define cOPERMODE            314                                                //嚙豬作嚙課佗蕭
#define cCOMMSTAT            315                                                //嚙緬嚙確嚙踝蕭嚙璀

#define cCARLENGTH           316                                                //嚙踝蕭嚙踝蕭]嚙緩
#define cSENDCYCLE           317                                                //嚙褒選蕭g嚙編]嚙緩
#define cRECORDCYCLE         318                                                //嚙瞌嚙踝蕭g嚙編]嚙緩
#define cUPDATEDB            319                                                //嚙踝蕭s嚙踝蕭w
#define cLANESET             320                                                //嚙踝蕭嚙瘩嚙踝蕭茠嚙穀uFFFD
#define cREALSTAT            321                                                //嚙踝蕭嚙緙嚙磐嚙褕賂蕭T
#define cREALEVENT           322                                                //嚙磐嚙褕事伐蕭

#define cONLINE              323                                                //嚙踝蕭嚙賠佗蕭嚙編嚙線嚙踝蕭嚙緯嚙皚嚙箴嚙踝蕭
#define cOFFLINE             324                                                //嚙踝蕭嚙賠沒嚙踝蕭嚙編嚙線嚙踝蕭嚙緯嚙皚嚙箴嚙踝蕭
#define cLOCKDB              325                                                //嚙踝蕭嚙瞌嚙踝蕭讀嚙踝蕭嚙箴嚙踝蕭
#define cTOTALRUN            326                                                //嚙窯嚙罷嚙踝蕭伅嚙穀uFFFD

#define cABOERROR            327                                                //嚙確嚙踝蕭嚙稽嚙緩嚙緞嚙踝蕭嚙踝蕭嚙踝蕭
#define cCMDSET              328                                                //嚙確嚙踝蕭嚙稽嚙緩
#define cHWRESET             329                                                //嚙緩嚙賡重嚙練
#define cLCNENCODE           330                                                //嚙稽嚙複編嚙踝蕭嚙編嚙碼

//OTADD
#define cSEGTYPE             331                                                //嚙褕段嚙踝蕭嚙璀
#define cSEGTYPEMENU         332
#define cWEEKDAY             333
#define cSPECIALDAY          334
#define cSEGTYPESEL          335
#define cPLANMENU            336
#define cPLANSEL             337
#define cPLAN                338
#define cRUNTABLE            339
#define cSTRATEGY            340
#define cRTMSInfo            341
#define cCURRENTLIGHTSTATUS  342
#define cCURRENTCOMMPACKET   343
#define cPLANEditStep1       344
#define cPLANEditStep2       345
#define cPLANEditStep3       346
#define cPLANEditStep4       347
#define cREDCOUNTMENU        348
#define cREDCOUNTHWCHECKSEL  349
#define cREDCOUNTHWCHECK     350
#define cREDCOUNTHWVERMENU   351
#define cREDCOUNTMAPPING     352
#define cCOMSETMENU          353
#define cPEDGREENCOUNTMAPPING 354
#define cSegTypeEditStep1    360
#define cSegTypeEditStep2    361
#define cSegTypeEditStep3    362

#define cREVERSETIMTMENU     363
#define cREVWEEKDAY          364
#define cREVSPECIALDAY       365
#define cREVERSE             366

#define cPLAN0523            370
#define cPLANF2              371
#define cSEGTYPEEDITF2       372
#define cWEEKDAYEDITF2       373
#define cSPECIALDAYVIEW      374
#define cSPECIALDAYEDITF2    375
#define cSEGTYPEPREVIEW      376
#define cPLANPREVIEW         377
#define cPHASEPREVIEW        378

#define cActuateEdit         380

//OT Pass
#define cPassModeSet         381
//OT Debug Direct
#define cDIRMAPPING          382
#define cLIGHTBOARDMAPPING   383
#define cDIRLIGHTBOARDMAPPINGMENU   384

#define cPHASESEL            385

#define cLAST92TCPLANSEGMENTUPDATE 386

//OT CHAIN
#define cCHAINMENU           387
#define cMOTHERCHAINSET      388
#define cCHILDCHAINSET       389
#define cCHAINSTATUS         390

//Light Edit
#define cLIGHTPREVIEW        391
#define cLIGHTEDIT           392
#define cLIGHTEMULATOR       393

//IP Editor
#define cNETWORKSET          394
#define cNETWORKSETCONFIRM   395

#define cMBSELECT            396
#define cUART2SELECT         397
#define cWARNING             398

#define cTFDSTATUS           399

#define cREDCOUNTHWCHECKDEVID     400
#define cREDCOUNTHWCHECKCYCLENUM  401
#define cREDCOUNTHWCHECKNUM88     402

#define cRAILWAYCHAINSET     403

#define cACTUATEARWENSTATUS 410




//arwen++
#define cSYSTEMINFO 411
#define cV3RELATED 412
#define cCTRLSTRATEGY 413
#define cACTUATEARWENMANYSTATUS 414
#define cVDPHASEMAP 415
#define cVDPHASEMAPEDIT 416
#define cACTSTRATEGY 417
#define cVDActPhaseEdit 418
#define cFLASHMODE 419
#define cACTSTRATEGY_CLOSE 420
#define cFLASHMODE_SETTING 421
#define cVDActPhaseGreen 422
#define cNETWORKSET_MAIN 423
#define cACTARWENMENU 424
#define cACTUATEARWENFLASHMANYSTATUS 425
#define cPedSignalMenu 426
#define cPedSignalHW 427
#define cPEDSWITCH 428
#define cACTDetector 429
#define cACTUATEPLAYSWITCH 430

#define cNETMASKSET         431
#define cACTUATEARWENMANYSTATUS2         432

//--------------Chou ++ ------------------------------
#define cActuateBUSEdit 433
//-----------------------------------------------------------
//jacky20140324    BRT priority
#define cBRTPRIORITY 434
#define cCompensation 435
#define cBRTExtendsec 436
#define cCommunication 437
#define cPrioritymenu 438
#define cCarLearn 439
#define cCountdownProperty 440
#define cCarCountdownProperty 441
#define cPedCountdownProperty 442
#define cPedLearn 443

//smem.vSetACK_W2W / smem.vGetACK_W2W
#define cTCToCenter          0
#define cVD01ToCenter        1
#define cVD02ToCenter        2
#define cVD03ToCenter        3
#define cVD04ToCenter        4
#define cVD05ToCenter        5
#define cVD06ToCenter        6
#define cVD07ToCenter        7
#define cVD08ToCenter        8
#define cVD09ToCenter        9
#define cVD10ToCenter        10
#define cVD11ToCenter        11
#define cVD12ToCenter        12
#define cVD13ToCenter        13
#define cVD14ToCenter        14
#define cVD15ToCenter        15
#define cVD16ToCenter        16
#define cVD17ToCenter        17
#define cVD18ToCenter        18
#define cVD19ToCenter        19
#define cVD20ToCenter        20
#define cVD21ToCenter        21
#define cVD22ToCenter        22
#define cVD23ToCenter        23
#define cVD24ToCenter        24
#define cVD25ToCenter        25
#define cVD26ToCenter        26
#define cVD27ToCenter        27
#define cVD28ToCenter        28
#define cVD29ToCenter        29
#define cVD30ToCenter        30
#define cVD31ToCenter        31
#define cVD32ToCenter        32
#define cVD33ToCenter        33
#define cVD34ToCenter        34
#define cVD35ToCenter        35
#define cVD36ToCenter        36
#define cVD37ToCenter        37
#define cVD38ToCenter        38
#define cVD39ToCenter        39
#define cVD40ToCenter        40

#define cCenterToTC          100
#define cCenterToVD01        101
#define cCenterToVD02        102
#define cCenterToVD03        103
#define cCenterToVD04        104
#define cCenterToVD05        105
#define cCenterToVD06        106
#define cCenterToVD07        107
#define cCenterToVD08        108
#define cCenterToVD09        109
#define cCenterToVD10        110
#define cCenterToVD11        111
#define cCenterToVD12        112
#define cCenterToVD13        113
#define cCenterToVD14        114
#define cCenterToVD15        115
#define cCenterToVD16        116
#define cCenterToVD17        117
#define cCenterToVD18        118
#define cCenterToVD19        119
#define cCenterToVD20        120
#define cCenterToVD21        121
#define cCenterToVD22        122
#define cCenterToVD23        123
#define cCenterToVD24        124
#define cCenterToVD25        125
#define cCenterToVD26        126
#define cCenterToVD27        127
#define cCenterToVD28        128
#define cCenterToVD29        129
#define cCenterToVD30        130
#define cCenterToVD31        131
#define cCenterToVD32        132
#define cCenterToVD33        133
#define cCenterToVD34        134
#define cCenterToVD35        135
#define cCenterToVD36        136
#define cCenterToVD37        137
#define cCenterToVD38        138
#define cCenterToVD39        139
#define cCenterToVD40        140
//OT Pass uPassServer
#define cNoPassMode          0
#define cPassServerMode      1
#define cTermPassMode        2

//OT Debug Direct
#define dirN                 0
#define dirNE                1
#define dirE                 2
#define dirES                3
#define dirS                 4
#define dirSW                5
#define dirW                 6
#define dirWN                7
#define lightOut1            0
#define lightOut2            1
#define lightOut3            2
#define lightOut4            3
#define lightOut5            4
#define lightOut6            5
#define lightOut7            6
#define lightOut8            7

//---------------------------------------------------------------------------
#define ViewScreen    0
#define PreviewScreen 1
#define EditScreen    2

//---------------------------------------------------------------------------
#define MB_ARBOR      0
#define MB_ICOP6047   1
#define MB_ICOP6115   2
//---------------------------------------------------------------------------


typedef struct YMDHMS {
        BYTE Year;
        BYTE Month;
        BYTE Day;
        BYTE Hour;
        BYTE Min;
        BYTE Sec;
} YMDHMS;


typedef struct st92VDLaneContent {
        short int BigVolume;                                                    //嚙篌嚙踝蕭嚙緙嚙緬
        short int BigSpeed;                                                     //嚙篌嚙踝蕭嚙緣嚙踝蕭
        short int CarVolume;                                                    //嚙瑾嚙趟車嚙緙嚙緬
        short int CarSpeed;                                                     //嚙瑾嚙趟車嚙緣嚙踝蕭
        short int MotorVolume;                                                  //嚙踝蕭y嚙緬
        short int MotorSpeed;
        short int AvgSpeed;                                                     //嚙篌嚙緘嚙踝蕭嚙踝蕭嚙踝蕭嚙緣嚙踝蕭
        short int LaneOccupy;                                                   //嚙踝蕭嚙瘩嚙踝蕭v
        short int AvgInt;                                                       //嚙踝蕭嚙踝蕭嚙賣車嚙踝蕭嚙稿 1/10嚙踝蕭  嚙磐AvgInt>250 -> AvgInt = 250

        short int TotalOccupyTime;
} st92VDLaneContent;

typedef struct SeqNoContent {
        st92VDLaneContent DataLane[8];  //嚙踝蕭嚙踝蕭嚙課佗蕭嚙踝蕭嚙踝蕭嚙瘩嚙踝蕭
} SeqNoContent;

typedef struct SmartSensorINFO {
        unsigned char cSerialNumber[18];
        unsigned char cModemIP[17];
        unsigned char cServerIP[17];
        unsigned char cServerIPPort[4];
        unsigned char cDataScript[10];
        unsigned char cConfigScript[8];
        unsigned char cRtmsID[6];
        unsigned char cMultiDropID[6];
        unsigned char cVarName[8];
        unsigned char cOrientation[4];
        unsigned char cLocation[34];
        unsigned char cDescription[32];
        unsigned char cTimeInterval[10];
        unsigned char cBufferFlag[3];
        unsigned char cBCRStr[6];
        unsigned char cDACRStr[6];
        unsigned char cDirection[10];
} SmartSensorINFO;

typedef struct SSXDLaneContent {
       short int Volume;
       float AverageSpeed;
       float Occupancy;
       float SmallClass;
       float MediumClass;
       float LargeClass;
}SSXDLaneContent;

typedef struct tsUDPMappingLCN {
        char cLocalIP[15];
        int iListenPort;
        char cRemoteIP[15];
        int iSendPort;
        int iMachineLCN;
}tsUDPMappingLCN;

/*OT990618*/
typedef struct tsUDPInfo {
        char *cLocalIP;
        int iListenPort;
        char *cRemoteIP;
        int iSendPort;
        int iMachineLCN;
} tsUDPInfo;

#define messageInBuf 20

#define dCmToFt 0.03281
#define mphToKmhr 1.6093                                                        //mph嚙賞成km/hr
#define TwoKBaseSec 946656000                                                   //UNIX TIME in year2000 00:00:00

#define RTSIGNAL_Timer 52                                                       //InterVal Timer嚙諄迎蕭RT signal
#define RTSIGNAL_RECODE_SMEM 53                                                 //嚙踝蕭嚙踝蕭嚙瞌嚙踝蕭嚙確嚙諄迎蕭

#define simulationNum 720                                                       //VD嚙踝蕭嚙穀uFFFD嚙複記嚙踝蕭嚙穀uFFFD
#define realRecordNum 1000
#define cSTOPSENDTIME 14400

// #define RTSIGNAL_WDT_PLAN 51
#define RTSIGNAL_WDT_PLAN 56

const char *const ColorRed = "\033[0;40;31m";
const char *const ColorGreen = "\033[0;40;32m";
const char *const ColorBlue = "\033[0;40;34m";
const char *const ColorWhiteBlue = "\033[0;40;36m";
const char *const ColorNormal = "\033[0m";

#endif
