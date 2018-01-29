/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_19;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_SystemCtrl;
    QGridLayout *gridLayout_31;
    QFormLayout *formLayout_2;
    QLabel *label_API;
    QLabel *label_ApiVersion;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_Connect;
    QPushButton *pushButton_Reset;
    QFormLayout *formLayout_8;
    QLabel *label_firmwareTag;
    QLabel *label_firmwareTagInfo;
    QGridLayout *gridLayout_10;
    QLabel *label_statusSeqRun;
    QPushButton *indicatorButton_statusSeqRun;
    QPushButton *indicatorButton_statusSeqErr;
    QLabel *label_statusInitDone;
    QSpacerItem *horizontalSpacer;
    QPushButton *indicatorButton_statusForcedSwap;
    QLabel *label_statusForcedSwap;
    QPushButton *indicatorButton_statusInitDone;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_statusSeqErr;
    QPushButton *indicatorButton_statusDmdParked;
    QLabel *label_statusDrcErr;
    QLabel *label_statusDMDParked;
    QPushButton *indicatorButton_statusDrcErr;
    QLabel *label_statusBufSwap;
    QPushButton *indicatorButton_statusBufFreeze;
    QPushButton *indicatorButton_statusSeqAbort;
    QLabel *label_statusSeqAbort;
    QCheckBox *checkBox_updateStatus;
    QVBoxLayout *verticalLayout_16;
    QGroupBox *groupBox_modeControl;
    QGridLayout *gridLayout_11;
    QRadioButton *radioButton_VideoMode;
    QRadioButton *radioButton_StandbyMode;
    QRadioButton *radioButton_VariableExpSLMode;
    QRadioButton *radioButton_SLMode;
    QGroupBox *groupBox_ImageSetting;
    QVBoxLayout *verticalLayout_38;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *checkBox_shortAxisFlip;
    QCheckBox *checkBox_longAxisFlip;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *pushButton_GetFlip;
    QPushButton *pushButton_SetFlip;
    QGroupBox *groupBox_LEDDriverCtrl;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_LEDCurrentCtrl;
    QGridLayout *gridLayout_15;
    QFormLayout *formLayout;
    QLabel *label_LEDRed;
    QLineEdit *lineEdit_RedLEDCurrent;
    QLabel *label_LEDGreen;
    QLineEdit *lineEdit_GreenLEDCurrent;
    QLabel *label_LEDBlue;
    QLineEdit *lineEdit_BlueLEDCurrent;
    QCheckBox *checkBox_LedPwmInvert;
    QGroupBox *groupBox_LEDEnSelect;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_ColorDisplayAuto;
    QRadioButton *radioButton_ColorDisplayManual;
    QCheckBox *checkBox_RedEnable;
    QCheckBox *checkBox_GreenEnable;
    QCheckBox *checkBox_BlueEnable;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_GetLEDConfiguration;
    QPushButton *pushButton_SetLEDConfiguration;
    QVBoxLayout *verticalLayout_46;
    QLabel *label_task1_firmware;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_26;
    QPushButton *pushButton_ApplySolution;
    QPushButton *pushButton_SaveSolution;
    QPushButton *pushButton_ApplyDefaultSolution;
    QTabWidget *tabWidget;
    QWidget *tab_Video_Mode;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_21;
    QGroupBox *groupBox_InputConfiguration;
    QGridLayout *gridLayout_12;
    QGroupBox *groupBox_ClockSelect;
    QVBoxLayout *verticalLayout_17;
    QComboBox *comboBox_PortClockList;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton_GetPortClock;
    QPushButton *pushButton_SetPortClock;
    QGroupBox *groupBox_PixelFormat;
    QVBoxLayout *verticalLayout_13;
    QComboBox *comboBox_PixelFormatList;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_GetPortPixelFormat;
    QPushButton *pushButton_SetPortPixelFormat;
    QGroupBox *groupBox_SourceSelect;
    QVBoxLayout *verticalLayout_30;
    QVBoxLayout *verticalLayout_20;
    QComboBox *comboBox_InputSourceList;
    QComboBox *comboBox_InputSourceOptionList;
    QSplitter *splitter;
    QPushButton *pushButton_GetPortSource;
    QPushButton *pushButton_SetPortSource;
    QGroupBox *groupBox_PortDataSwap;
    QVBoxLayout *verticalLayout_32;
    QComboBox *comboBox_SwapSelectList;
    QVBoxLayout *verticalLayout_14;
    QSplitter *splitter_2;
    QPushButton *pushButton_GetPortSwap;
    QPushButton *pushButton_SetPortSwap;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_23;
    QGroupBox *groupBox_DisplayDimension;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_14;
    QLabel *label_DispLinesPerFrame;
    QLineEdit *lineEdit_CropAreaLinesPerFrame;
    QLineEdit *lineEdit_DispAreaPixPerFrame;
    QLabel *label_DispFirstPix;
    QLineEdit *lineEdit_DispAreaFirstLine;
    QLineEdit *lineEdit_DispAreaLinesPerFrame;
    QLineEdit *lineEdit_CropAreaPixelsPerLine;
    QLineEdit *lineEdit_CropAreaFirstLine;
    QLineEdit *lineEdit_CropAreaFirstPix;
    QLineEdit *lineEdit_DispAreaFirstPixel;
    QLabel *label_DispArea;
    QLabel *label_CropArea;
    QLabel *label_DispFirstLine;
    QLabel *label_DispPixPerLine;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_GetDisplayConfiguration;
    QPushButton *pushButton_SetDisplayConfiguration;
    QGroupBox *groupBox_TPG;
    QVBoxLayout *verticalLayout_15;
    QGridLayout *gridLayout_9;
    QSpinBox *spinBox_TPGForegroundColorGreen;
    QSpinBox *spinBox_TPGBackgroundColorBlue;
    QSpinBox *spinBox_TPGBackgroundColorGreen;
    QSpinBox *spinBox_TPGForegroundColorRed;
    QLabel *label_TPGColorForeground;
    QLabel *label_TPGColorBlue;
    QLabel *label_TPGColorGreen;
    QLabel *label_TPGColorRed;
    QSpinBox *spinBox_TPGBackgroundColorRed;
    QLabel *label_TPGColorBackground;
    QSpinBox *spinBox_TPGForegroundColorBlue;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_GetTPGColor;
    QPushButton *pushButton_SetTPGColor;
    QGroupBox *groupBox_FPDModeAndFieldSelect;
    QVBoxLayout *verticalLayout_18;
    QComboBox *comboBox_FPDFieldSelectList;
    QCheckBox *checkBox_FPDInvPol;
    QHBoxLayout *horizontalLayout_16;
    QSpinBox *spinBox_FPDPixMode;
    QLabel *label_FPDPixMode;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *pushButton_GetFPDMode;
    QPushButton *pushButton_SetFPDMode;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *verticalLayout_40;
    QGroupBox *groupBox_VideoSignalInfo;
    QFormLayout *formLayout_10;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_25;
    QLineEdit *lineEdit_VidActvFirstPix;
    QLabel *label_VidRsvd;
    QLabel *label_VidActvFirstPix;
    QLabel *label_VidActvPxPerLineInPix;
    QLabel *label_VidHPol;
    QLineEdit *lineEdit_VidActvLinesPerFrame;
    QLineEdit *lineEdit_VidVFreq;
    QLabel *label_VidHResInPix;
    QLabel *label_VidPixPerLineInPix;
    QLabel *label_VidPixClkinMHz;
    QLabel *label_VidVFreInHz;
    QLineEdit *lineEdit_VidRsvd;
    QLineEdit *lineEdit_VidActvPixPerLine;
    QPushButton *pushButton_GetVideoSingalInfo;
    QLabel *label_VidActvPixPerLine;
    QLabel *label_VidActvPixPerFrameInPix;
    QLabel *label_VidActvFirstLine;
    QLabel *label_VidSigStatus;
    QLineEdit *lineEdit_VidLinesPerFrame;
    QLabel *label_VidVPol;
    QLabel *label_VidVFreq;
    QLabel *label_VidActvLinesPerFrame;
    QLabel *label_VidPixClk;
    QLabel *label_VidPixPerLine;
    QLabel *label_VidLinesPerFrame;
    QLineEdit *lineEdit_VidPixPerLine;
    QLabel *label_VidHFreq;
    QLabel *label_VidHFreInKHz;
    QLabel *label_VidStatus;
    QLineEdit *lineEdit_VidVRes;
    QComboBox *comboBox_VidLockSatus;
    QLabel *label_VidVRes;
    QLabel *label_VidHRes;
    QLabel *label_VidLinesPerFramInPix;
    QLineEdit *lineEdit_VidHRes;
    QLabel *label_VResInPix;
    QLineEdit *lineEdit_VidHFreq;
    QComboBox *comboBox_VidHPol;
    QLineEdit *lineEdit_VidActvFirstLine;
    QComboBox *comboBox_VidVPol;
    QLineEdit *lineEdit_VidPixClk;
    QLabel *label_VidActvFirstPixPos;
    QLabel *label_VidActvFirsLinePos;
    QSpacerItem *verticalSpacer_15;
    QWidget *tab_Pattern_Seq;
    QVBoxLayout *verticalLayout_25;
    QTabWidget *tabWidget_2;
    QWidget *tab_pat_seq_seq_settings;
    QHBoxLayout *horizontalLayout_36;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_PatSeqSel;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_21;
    QComboBox *comboBox_PatSeqSelPatColor;
    QComboBox *comboBox_PatSeqSelTrigType;
    QGroupBox *groupBox_PatSeqBitPlaneSel;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_PatSeqFrmOrImgIndex;
    QSpinBox *spinBox_PatSeqFrameImgIndex;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_PatSeqPatBitDepthSel;
    QComboBox *comboBox_PatSeqPatBitDepthSel;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_PatSeqBitPlaneNum;
    QComboBox *comboBox_PatSeqBitPlaneNum;
    QSpacerItem *horizontalSpacer_26;
    QHBoxLayout *horizontalLayout_22;
    QListWidget *listWidget_PatSeqBitPlanes;
    QHBoxLayout *horizontalLayout_39;
    QCheckBox *checkBox_PatSeqInvPatData;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBox_PatSeqInsBlackPat;
    QSpacerItem *horizontalSpacer_28;
    QPushButton *pushButton_PatSeqAddPatToLut;
    QSpacerItem *horizontalSpacer_27;
    QGroupBox *groupBox_PatSeqDispLUT;
    QHBoxLayout *horizontalLayout_12;
    QListWidget *listWidget_PatSeqLUT;
    QVBoxLayout *verticalLayout_24;
    QPushButton *pushButton_PatSeqSendLUT;
    QPushButton *pushButton_PatSeqReadLUTFrmHW;
    QPushButton *pushButton_PatSeqClearLUTFrmGUI;
    QHBoxLayout *horizontalLayout_25;
    QRadioButton *radioButton_PatSeqDispRunOnce;
    QRadioButton *radioButton_PatSeqDispRunContinuous;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupBox_PatSeqSourceAndTrigSel;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_23;
    QGroupBox *groupBox_PatSeqPatSrc;
    QGridLayout *gridLayout_16;
    QRadioButton *radioButton_PatSeqSrcFrmFlash;
    QRadioButton *radioButton_PatSeqSrcFrmVideoPort;
    QGroupBox *groupBox_PatSeqTrigMode;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_PatSeqTrigTypeIntExt;
    QRadioButton *radioButton_PatSeqTrigTypeVSync;
    QVBoxLayout *verticalLayout_44;
    QGroupBox *groupBox_PatSeqPatDispTiming;
    QFormLayout *formLayout_4;
    QLabel *label_PatSeqPatPeriod;
    QLineEdit *lineEdit_PatSeqPatPeriod;
    QLabel *label_PatSeqPatExpTime;
    QLineEdit *lineEdit_PatSeqPatExpTime;
    QLabel *label_PatSeqNote;
    QSpacerItem *verticalSpacer_11;
    QWidget *tab_8;
    QGridLayout *gridLayout_27;
    QVBoxLayout *verticalLayout_37;
    QGroupBox *groupBox_VarExpPatSeqSel;
    QVBoxLayout *verticalLayout_51;
    QHBoxLayout *horizontalLayout_49;
    QComboBox *comboBox_VarExpPatSeqSelPatColor;
    QSpacerItem *horizontalSpacer_21;
    QComboBox *comboBox_VarExpPatSeqSelTrigType;
    QSpacerItem *horizontalSpacer_22;
    QLabel *label_VarExpPatSeqFrmOrImgIndex;
    QSpinBox *spinBox_VarExpPatSeqFrameImgIndex;
    QSpacerItem *horizontalSpacer_20;
    QLabel *label_VarExpPatSeqPatBitDepthSel;
    QComboBox *comboBox_VarExpPatSeqPatBitDepthSel;
    QSpacerItem *horizontalSpacer_29;
    QHBoxLayout *horizontalLayout_33;
    QListWidget *listWidget_VarExpPatSeqBitPlanes;
    QHBoxLayout *horizontalLayout_48;
    QLabel *label_VarExpPatSeqPatExpTime;
    QLineEdit *lineEdit_VarExpPatSeqPatExpTime;
    QSpacerItem *horizontalSpacer_30;
    QLabel *label_VarExpPatSeqPatPeriod;
    QLineEdit *lineEdit_VarExpPatSeqPatPeriod;
    QSpacerItem *horizontalSpacer_31;
    QHBoxLayout *horizontalLayout_50;
    QCheckBox *checkBox_VarExpPatSeqInvPatData;
    QCheckBox *checkBox_VarExpPatSeqInsBlackPat;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_VarExpPatSeqAddPatToLut;
    QSpacerItem *horizontalSpacer_19;
    QGroupBox *seqGroupBox_4;
    QHBoxLayout *horizontalLayout_51;
    QListWidget *listWidget_VarExpPatSeqLUT;
    QVBoxLayout *verticalLayout_53;
    QPushButton *pushButton_VarExpPatSeqSendLUT;
    QPushButton *pushButton_VarExpPatSeqReadLUTFrmHW;
    QPushButton *pushButton_VarExpPatSeqClearLUTFrmGUI;
    QHBoxLayout *horizontalLayout_52;
    QRadioButton *radioButton_VarExpPatSeqDispRunOnce;
    QRadioButton *radioButton_VarExpPatSeqDispRunContinuous;
    QSpacerItem *verticalSpacer_16;
    QVBoxLayout *verticalLayout_33;
    QGroupBox *groupBox_VarExpPatSeqSourceAndTrigSel;
    QVBoxLayout *verticalLayout_48;
    QHBoxLayout *horizontalLayout_46;
    QGroupBox *groupBox_VarExpPatSeqPatSrc;
    QGridLayout *gridLayout_18;
    QRadioButton *radioButton_VarExpPatSeqSrcFrmFlash;
    QRadioButton *radioButton_VarExpPatSeqSrcFrmVideoPort;
    QGroupBox *groupBox_VarExpPatSeqTrigMode;
    QVBoxLayout *verticalLayout_49;
    QRadioButton *radioButton_VarExpPatSeqTrigTypeIntExt;
    QRadioButton *radioButton_VarExpPatSeqTrigTypeVSync;
    QLabel *label_VarExpPatSeqNote;
    QSpacerItem *verticalSpacer_6;
    QWidget *tab;
    QFormLayout *formLayout_14;
    QGroupBox *groupBox_PatSeqCtrl;
    QGridLayout *gridLayout_26;
    QFormLayout *formLayout_5;
    QPushButton *pushButton_PatSeqValIndExpOOR;
    QLabel *label_PatSeqValIndExpOOR;
    QPushButton *pushButton_PatSeqValIndPatNumOOR;
    QLabel *label_PatSeqValIndPatNumOOR;
    QPushButton *pushButton_PatSeqValIndTrigOutOverlap;
    QLabel *label_PatSeqValIndTrigOutOverlap;
    QPushButton *pushButton_PatSeqValIndBlkVecMiss;
    QLabel *label_PatSeqValIndBlkVecMiss;
    QPushButton *pushButton_PatSeqValPatPeriodShort;
    QLabel *label_PatSeqValPatPeriodShort;
    QLabel *label_PatSeqValStatus;
    QPushButton *pushButton_PatSeqValStatus;
    QPushButton *pushButton_ValidatePatSeq;
    QHBoxLayout *horizontalLayout_38;
    QPushButton *pushButton_PatSeqCtrlStart;
    QPushButton *pushButton_PatSeqCtrlPause;
    QPushButton *pushButton_PatSeqCtrlStop;
    QHBoxLayout *horizontalLayout_35;
    QCheckBox *checkBox_PatSeqCtrlGlobalDataInvert;
    QSpacerItem *horizontalSpacer_32;
    QWidget *tab_img_load_timing;
    QGridLayout *gridLayout_13;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_ImgLoadTiming;
    QGridLayout *gridLayout_28;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_ImgLdTmImgIndex;
    QSpinBox *spinBox_ImgLdTmImgIndex;
    QPushButton *pushButton_GetImgLoadTimingInfo;
    QHBoxLayout *horizontalLayout_31;
    QLineEdit *lineEdit_ImgLoadTmInMs;
    QLabel *label_ImgLdTmInMs;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_18;
    QVBoxLayout *verticalLayout_34;
    QLabel *label_ImgLdTmNote1;
    QLabel *label_ImgLdTmNote2;
    QSpacerItem *horizontalSpacer_8;
    QWidget *tab_pat_seq_trig_ctrl;
    QFormLayout *formLayout_15;
    QGridLayout *gridLayout_21;
    QSlider *horizontalSlider_Trig1OutFDly;
    QLabel *label_TrigOut1FDly;
    QLabel *label_Trig1OutFDlyVal;
    QLabel *label_Trig2OutRDlyVal;
    QCheckBox *checkBox_InvertTrig2Out;
    QLabel *label_TrigOut2PulsePerNumPat;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_GetTrigConfig;
    QPushButton *pushButton_SetTrigConfig;
    QSpinBox *spinBox_TrigOut2PulsePerNumPat;
    QLabel *label_TrigOut2RDly;
    QSpinBox *spinBox_Trig1OutFDly;
    QSpacerItem *verticalSpacer_26;
    QSpinBox *spinBox_Trig2OutRDly;
    QSlider *horizontalSlider_Trig2OutRDly;
    QSpinBox *spinBox_Trig1OutRDly;
    QLabel *label_TrigIn1;
    QLabel *label_TrigOut1RDly;
    QLabel *label_TrigIn2Pol;
    QLabel *label_TrigIn1Value;
    QCheckBox *checkBox_InvertTrig1Out;
    QLabel *label_Trig1OutRDlyVal;
    QComboBox *comboBox_TrigIn2Pol;
    QSlider *horizontalSlider_TrigIn1;
    QSpinBox *spinBox_TrigIn1;
    QLabel *label_TrigIn2PolDesc;
    QSpacerItem *verticalSpacer_25;
    QSlider *horizontalSlider_Trig1OutRDly;
    QSpacerItem *horizontalSpacer_15;
    QTextEdit *textEdit_TriggerCtrlNote;
    QWidget *tab_pat_seq_led_dly;
    QFormLayout *formLayout_16;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_27;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_GetLEDDlyCtrlConfig;
    QPushButton *pushButton_SetLedDlyCtrlConfig;
    QLabel *label_LedDlyCtrlRedREdgeDlyVal;
    QSpinBox *spinBox_LedDlyCtrlGreenREdgeDly;
    QSlider *horizontalSlider_LedDlyCtrlBlueREdgeDly;
    QLabel *label_LedDlyCtrlBlueREdgeDlyVal;
    QLabel *label_LedDlyCtrlGreenREdgeDlyVal;
    QSlider *horizontalSlider_LedDlyCtrlGreenREdgeDly;
    QLabel *label_LedDlyCtrlRedFEdgeDlyVal;
    QLabel *label_LedDlyCtrlRedREdgeDly;
    QSlider *horizontalSlider_LedDlyCtrlBlueFEdgeDly;
    QSpinBox *spinBox_LedDlyCtrlGreenFEdgeDly;
    QLabel *label_LedDlyCtrlGreenREdgeDly;
    QSpinBox *spinBox_LedDlyCtrlBlueFEdgeDly;
    QLabel *label_LedDlyCtrlBlueFEdgeDly;
    QSpinBox *spinBox_LedDlyCtrlBlueREdgeDly;
    QSpinBox *spinBox_LedDlyCtrlRedREdgeDly;
    QLabel *label_LedDlyCtrlRedFEdgeDly;
    QLabel *label_LedDlyCtrlGreenFEdgeDlyVal;
    QLabel *label_LedDlyCtrlBlueFEdgeDlyVal;
    QSlider *horizontalSlider_LedDlyCtrlRedREdgeDly;
    QSlider *horizontalSlider_LedDlyCtrlGreenFEdgeDly;
    QSpinBox *spinBox_LedDlyCtrlRedFEdgeDly;
    QLabel *label_LedDlyCtrlGreenFEdgeDly;
    QSlider *horizontalSlider_LedDlyCtrlRedFEdgeDly;
    QLabel *label_LedDlyCtrlBlueREdgeDly;
    QSpacerItem *verticalSpacer_28;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *verticalSpacer_14;
    QWidget *tab_Peripheral_Ctrl;
    QGridLayout *gridLayout_33;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_I2C0_Master;
    QVBoxLayout *verticalLayout_42;
    QGridLayout *gridLayout_32;
    QLabel *label_i2cDevAddr;
    QLineEdit *lineEdit_i2cReadData;
    QLineEdit *lineEdit_i2cBytesToRead;
    QComboBox *comboBox_i2cAddrMode;
    QLineEdit *lineEdit_i2cClockRate;
    QLabel *label_i2cBytesToRead;
    QLabel *label_i2cAddrMode;
    QLabel *label_i2cWriteData;
    QLineEdit *lineEdit_i2cDevAddr;
    QLineEdit *lineEdit_i2cWriteData;
    QLabel *label_i2cReadData;
    QLabel *label_i2cClockRate;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_32;
    QPushButton *pushButton_i2cRead;
    QPushButton *pushButton_i2cWrite;
    QGroupBox *groupBox_PWMSetup;
    QVBoxLayout *verticalLayout_27;
    QGridLayout *gridLayout_22;
    QLineEdit *lineEdit_PWMPeriod;
    QLabel *label_PWMPulsePeriod;
    QLabel *label_PWMDutyCycle;
    QSpinBox *spinBox_PWMDutyCycle;
    QCheckBox *checkBox_PWMEnable;
    QComboBox *comboBox_PWMChannel;
    QSpacerItem *verticalSpacer_23;
    QHBoxLayout *horizontalLayout_27;
    QPushButton *pushButton_GetPWMConfig;
    QPushButton *pushButton_SetPWMConfig;
    QGroupBox *groupBox_GPIOConfig;
    QVBoxLayout *verticalLayout_29;
    QGridLayout *gridLayout_24;
    QCheckBox *checkBox_GPIOEnAltFun;
    QLabel *label_GPIOSelPin;
    QLabel *label_GPIOPinDir;
    QComboBox *comboBox_GPIOPinDir;
    QLabel *label_GPIOPinState;
    QComboBox *comboBox_GPIOPinState;
    QComboBox *comboBox_GPIOPin;
    QLabel *label_GPIOOutputType;
    QComboBox *comboBox_GPIOOutType;
    QSpacerItem *verticalSpacer_21;
    QHBoxLayout *horizontalLayout_29;
    QPushButton *pushBox_GetGPIOConfig;
    QPushButton *pushBox_SetGPIOConfig;
    QGroupBox *groupBox_PWMCapSetup;
    QVBoxLayout *verticalLayout_28;
    QGridLayout *gridLayout_23;
    QLabel *label_PWMCapSampleRate;
    QLineEdit *lineEdit_PWMCapSampleRate;
    QLabel *label_PWMCapDutyCycleReadback;
    QCheckBox *checkBox_PWMCapEnable;
    QComboBox *comboBox_PWMCapChannel;
    QLineEdit *lineEdit_PWMCapDutyCycleReadback;
    QPushButton *pushButton_PWMCapRead;
    QSpacerItem *verticalSpacer_19;
    QHBoxLayout *horizontalLayout_28;
    QPushButton *pushButton_GetPWMCapConfig;
    QPushButton *pushButton_SetPWMCapConfig;
    QGroupBox *groupBox_GPClk;
    QVBoxLayout *verticalLayout_26;
    QCheckBox *checkBox_GpClk;
    QComboBox *comboBox_GpClk;
    QGridLayout *gridLayout_20;
    QSpinBox *spinBox_GpClk;
    QLabel *label_GpClkDiv;
    QLabel *label_GpClkFreq;
    QLabel *label_GpClkFreqVal;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *pushButton_GetGpClk;
    QPushButton *pushButton_SetGpClk;
    QTextEdit *textEdit_i2c0_port_usage;
    QWidget *tab_Image_Firmware;
    QVBoxLayout *verticalLayout_11;
    QTabWidget *tabWidget_3;
    QWidget *tab_Create_Splash;
    QGridLayout *gridLayout_6;
    QLabel *label_CreaImgInputBMPFileName;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_17;
    QLabel *label_CreaImgInputBMPFileImgPreview;
    QLabel *label_CreaImgOutImgPreview;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_CreaImgClearOutFileContents;
    QLabel *label_CreaImgOutputBMPFileName;
    QHBoxLayout *horizontalLayout_19;
    QLineEdit *lineEdit_CreaImgInputBmpFileName;
    QPushButton *pushButton_CreaImgSelectBMPFile;
    QGridLayout *gridLayout_29;
    QLabel *label_CreaImgPattPosition;
    QLabel *label_CreaImgBitDepth;
    QComboBox *comboBox_CreaImgFileBitDepth;
    QPushButton *pushButton_CreaImgAddToOutFile;
    QComboBox *comboBox_CreaImgFilePatPos;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_20;
    QLineEdit *lineEdit_CreaImgOutputBmpFileName;
    QPushButton *pushButton_CreaImgSelectDestFileName;
    QWidget *tab_Create_Firmware;
    QFormLayout *formLayout_17;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_FWDwldLatFWLink;
    QGridLayout *gridLayout_4;
    QProgressBar *progressBar_FWFileParsing;
    QLabel *label_FWFileParseStatus;
    QLineEdit *lineEdit_FWFileSelected;
    QPushButton *pushButton_FWSelectFWBin;
    QLabel *label_FWSelectFWFile;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_FWIniFile;
    QLineEdit *lineEdit_FWIniFileSelected;
    QPushButton *pushButton_FWClearSelIniFile;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_add_fw_tag;
    QLineEdit *lineEdit_firmwareTagName;
    QPushButton *pushButton_FWClearFWTag;
    QLabel *label_NewFWBuildPath;
    QHBoxLayout *horizontalLayout_30;
    QVBoxLayout *verticalLayout_39;
    QLabel *label_FWOrgSplashImageCount;
    QLabel *label_FWNewSplashImageAddedCount;
    QLabel *label_FWSplashImageRemovedCount;
    QLabel *label_FWAvaSplashImageCount;
    QSpacerItem *verticalSpacer_9;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_FWRemoveSplashImage;
    QComboBox *comboBox_FWSplashImageIndex;
    QPushButton *pushButton_FWAddSplashImage;
    QPushButton *pushButton_FWChangeSplashImage;
    QPushButton *pushButton_FWSelectIniFile;
    QPushButton *pushButton_FWBuildNewFrmwImage;
    QPushButton *pushButton_FWSplashImageUpload;
    QLabel *label_FWPreviewSelImage;
    QGroupBox *groupBox_FWIllumModSelect;
    QVBoxLayout *verticalLayout_36;
    QVBoxLayout *verticalLayout_35;
    QRadioButton *radioButton_FWIllumSelColor;
    QRadioButton *radioButton_FWIllumSelMono;
    QHBoxLayout *horizontalLayout_42;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_41;
    QCheckBox *checkBox_FWIllumSelMonoRedCh;
    QCheckBox *checkBox_FWIllumSelMonoGreenCh;
    QCheckBox *checkBox_FWIllumSelMonoBlueCh;
    QSpacerItem *verticalSpacer_12;
    QWidget *tab_FirmwareUpload;
    QFormLayout *formLayout_12;
    QLabel *label_FWUploadLatestFWLink;
    QPushButton *pushButton_Connect_2;
    QTextEdit *textEdit_FWUpdate;
    QGroupBox *groupBox_FWUpload;
    QVBoxLayout *verticalLayout_31;
    QGridLayout *gridLayout_5;
    QLineEdit *FirmwareFile_2;
    QPushButton *pushButton_FWFileSelect;
    QProgressBar *prorgessBar_FWUpload;
    QLabel *label_FWUploadProgressBar;
    QPushButton *pushButton_FWUpload;
    QLabel *label_FWFileSelect;
    QCheckBox *checkBox_FastFlashUpdate;
    QCheckBox *checkBox_SkipBootLoader;
    QWidget *tab_Additional_Resources;
    QFormLayout *formLayout_11;
    QGridLayout *gridLayout_17;
    QLabel *label_AddResE2ELink;
    QLabel *label_AddResEVMLink;
    QLabel *label_AddResEVM;
    QLabel *label_AddResDHLink;
    QLabel *label_AddResDH;
    QLabel *label_AddResE2E;
    QSpacerItem *horizontalSpacer_11;
    QWidget *tab_task1;
    QPushButton *pushButton_task1_firmware;
    QPushButton *pushButton_task1_pattern;
    QPushButton *pushButton_statInfo;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_34;
    QPushButton *pushButton_task2_firmware_make;
    QLineEdit *lineEdit_task2_FWtag;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1584, 1055);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Icons/LCr4500.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_19 = new QGridLayout(centralWidget);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1558, 1029));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_SystemCtrl = new QGroupBox(scrollAreaWidgetContents);
        groupBox_SystemCtrl->setObjectName(QStringLiteral("groupBox_SystemCtrl"));
        sizePolicy.setHeightForWidth(groupBox_SystemCtrl->sizePolicy().hasHeightForWidth());
        groupBox_SystemCtrl->setSizePolicy(sizePolicy);
        gridLayout_31 = new QGridLayout(groupBox_SystemCtrl);
        gridLayout_31->setSpacing(6);
        gridLayout_31->setContentsMargins(11, 11, 11, 11);
        gridLayout_31->setObjectName(QStringLiteral("gridLayout_31"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_API = new QLabel(groupBox_SystemCtrl);
        label_API->setObjectName(QStringLiteral("label_API"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_API);

        label_ApiVersion = new QLabel(groupBox_SystemCtrl);
        label_ApiVersion->setObjectName(QStringLiteral("label_ApiVersion"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, label_ApiVersion);


        gridLayout_31->addLayout(formLayout_2, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(2);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        pushButton_Connect = new QPushButton(groupBox_SystemCtrl);
        pushButton_Connect->setObjectName(QStringLiteral("pushButton_Connect"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_Connect->sizePolicy().hasHeightForWidth());
        pushButton_Connect->setSizePolicy(sizePolicy1);
        pushButton_Connect->setAcceptDrops(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/Icons/Led_G.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/new/prefix1/Icons/Led_R.png"), QSize(), QIcon::Disabled, QIcon::Off);
        icon1.addFile(QStringLiteral(":/new/prefix1/Icons/Led_R.png"), QSize(), QIcon::Disabled, QIcon::On);
        pushButton_Connect->setIcon(icon1);

        horizontalLayout_8->addWidget(pushButton_Connect);

        pushButton_Reset = new QPushButton(groupBox_SystemCtrl);
        pushButton_Reset->setObjectName(QStringLiteral("pushButton_Reset"));
        sizePolicy1.setHeightForWidth(pushButton_Reset->sizePolicy().hasHeightForWidth());
        pushButton_Reset->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(pushButton_Reset);


        gridLayout_31->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        formLayout_8 = new QFormLayout();
        formLayout_8->setSpacing(6);
        formLayout_8->setObjectName(QStringLiteral("formLayout_8"));
        formLayout_8->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_firmwareTag = new QLabel(groupBox_SystemCtrl);
        label_firmwareTag->setObjectName(QStringLiteral("label_firmwareTag"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_firmwareTag);

        label_firmwareTagInfo = new QLabel(groupBox_SystemCtrl);
        label_firmwareTagInfo->setObjectName(QStringLiteral("label_firmwareTagInfo"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, label_firmwareTagInfo);


        gridLayout_31->addLayout(formLayout_8, 2, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(2);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_statusSeqRun = new QLabel(groupBox_SystemCtrl);
        label_statusSeqRun->setObjectName(QStringLiteral("label_statusSeqRun"));

        gridLayout_10->addWidget(label_statusSeqRun, 0, 4, 1, 1);

        indicatorButton_statusSeqRun = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusSeqRun->setObjectName(QStringLiteral("indicatorButton_statusSeqRun"));
        indicatorButton_statusSeqRun->setEnabled(false);
        indicatorButton_statusSeqRun->setMaximumSize(QSize(28, 24));
        indicatorButton_statusSeqRun->setAcceptDrops(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Icons/Led_G.png"), QSize(), QIcon::Normal, QIcon::Off);
        indicatorButton_statusSeqRun->setIcon(icon2);

        gridLayout_10->addWidget(indicatorButton_statusSeqRun, 0, 3, 1, 1);

        indicatorButton_statusSeqErr = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusSeqErr->setObjectName(QStringLiteral("indicatorButton_statusSeqErr"));
        indicatorButton_statusSeqErr->setEnabled(false);
        indicatorButton_statusSeqErr->setMaximumSize(QSize(28, 24));
        indicatorButton_statusSeqErr->setAcceptDrops(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/Icons/Led_R.png"), QSize(), QIcon::Normal, QIcon::Off);
        indicatorButton_statusSeqErr->setIcon(icon3);

        gridLayout_10->addWidget(indicatorButton_statusSeqErr, 1, 3, 1, 1);

        label_statusInitDone = new QLabel(groupBox_SystemCtrl);
        label_statusInitDone->setObjectName(QStringLiteral("label_statusInitDone"));

        gridLayout_10->addWidget(label_statusInitDone, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer, 0, 2, 1, 1);

        indicatorButton_statusForcedSwap = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusForcedSwap->setObjectName(QStringLiteral("indicatorButton_statusForcedSwap"));
        indicatorButton_statusForcedSwap->setEnabled(false);
        indicatorButton_statusForcedSwap->setMaximumSize(QSize(28, 24));
        indicatorButton_statusForcedSwap->setAcceptDrops(false);
        indicatorButton_statusForcedSwap->setIcon(icon3);

        gridLayout_10->addWidget(indicatorButton_statusForcedSwap, 1, 0, 1, 1);

        label_statusForcedSwap = new QLabel(groupBox_SystemCtrl);
        label_statusForcedSwap->setObjectName(QStringLiteral("label_statusForcedSwap"));
        label_statusForcedSwap->setToolTipDuration(-1);

        gridLayout_10->addWidget(label_statusForcedSwap, 1, 1, 1, 1);

        indicatorButton_statusInitDone = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusInitDone->setObjectName(QStringLiteral("indicatorButton_statusInitDone"));
        indicatorButton_statusInitDone->setEnabled(false);
        indicatorButton_statusInitDone->setMaximumSize(QSize(28, 24));
        indicatorButton_statusInitDone->setAcceptDrops(false);
        indicatorButton_statusInitDone->setIcon(icon2);

        gridLayout_10->addWidget(indicatorButton_statusInitDone, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(5, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_6, 0, 5, 1, 1);

        label_statusSeqErr = new QLabel(groupBox_SystemCtrl);
        label_statusSeqErr->setObjectName(QStringLiteral("label_statusSeqErr"));

        gridLayout_10->addWidget(label_statusSeqErr, 1, 4, 1, 1);

        indicatorButton_statusDmdParked = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusDmdParked->setObjectName(QStringLiteral("indicatorButton_statusDmdParked"));
        indicatorButton_statusDmdParked->setEnabled(false);
        indicatorButton_statusDmdParked->setMaximumSize(QSize(28, 24));
        indicatorButton_statusDmdParked->setAcceptDrops(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/Icons/Led_Y.png"), QSize(), QIcon::Normal, QIcon::Off);
        indicatorButton_statusDmdParked->setIcon(icon4);

        gridLayout_10->addWidget(indicatorButton_statusDmdParked, 1, 6, 1, 1);

        label_statusDrcErr = new QLabel(groupBox_SystemCtrl);
        label_statusDrcErr->setObjectName(QStringLiteral("label_statusDrcErr"));

        gridLayout_10->addWidget(label_statusDrcErr, 0, 7, 1, 1);

        label_statusDMDParked = new QLabel(groupBox_SystemCtrl);
        label_statusDMDParked->setObjectName(QStringLiteral("label_statusDMDParked"));

        gridLayout_10->addWidget(label_statusDMDParked, 1, 7, 1, 1);

        indicatorButton_statusDrcErr = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusDrcErr->setObjectName(QStringLiteral("indicatorButton_statusDrcErr"));
        indicatorButton_statusDrcErr->setEnabled(false);
        indicatorButton_statusDrcErr->setMaximumSize(QSize(28, 24));
        indicatorButton_statusDrcErr->setAcceptDrops(false);
        indicatorButton_statusDrcErr->setIcon(icon3);

        gridLayout_10->addWidget(indicatorButton_statusDrcErr, 0, 6, 1, 1);

        label_statusBufSwap = new QLabel(groupBox_SystemCtrl);
        label_statusBufSwap->setObjectName(QStringLiteral("label_statusBufSwap"));
        label_statusBufSwap->setEnabled(true);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        label_statusBufSwap->setFont(font);
        label_statusBufSwap->setAutoFillBackground(false);

        gridLayout_10->addWidget(label_statusBufSwap, 2, 1, 1, 1);

        indicatorButton_statusBufFreeze = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusBufFreeze->setObjectName(QStringLiteral("indicatorButton_statusBufFreeze"));
        indicatorButton_statusBufFreeze->setEnabled(false);
        indicatorButton_statusBufFreeze->setMaximumSize(QSize(28, 24));
        indicatorButton_statusBufFreeze->setAcceptDrops(false);
        indicatorButton_statusBufFreeze->setIcon(icon4);

        gridLayout_10->addWidget(indicatorButton_statusBufFreeze, 2, 0, 1, 1);

        indicatorButton_statusSeqAbort = new QPushButton(groupBox_SystemCtrl);
        indicatorButton_statusSeqAbort->setObjectName(QStringLiteral("indicatorButton_statusSeqAbort"));
        indicatorButton_statusSeqAbort->setEnabled(false);
        indicatorButton_statusSeqAbort->setMaximumSize(QSize(28, 24));
        indicatorButton_statusSeqAbort->setAcceptDrops(false);
        indicatorButton_statusSeqAbort->setIcon(icon3);
        indicatorButton_statusSeqAbort->setCheckable(false);

        gridLayout_10->addWidget(indicatorButton_statusSeqAbort, 2, 3, 1, 1);

        label_statusSeqAbort = new QLabel(groupBox_SystemCtrl);
        label_statusSeqAbort->setObjectName(QStringLiteral("label_statusSeqAbort"));

        gridLayout_10->addWidget(label_statusSeqAbort, 2, 4, 1, 1);

        checkBox_updateStatus = new QCheckBox(groupBox_SystemCtrl);
        checkBox_updateStatus->setObjectName(QStringLiteral("checkBox_updateStatus"));
        checkBox_updateStatus->setChecked(true);

        gridLayout_10->addWidget(checkBox_updateStatus, 2, 6, 1, 2);

        gridLayout_10->setColumnStretch(0, 1);

        gridLayout_31->addLayout(gridLayout_10, 3, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_SystemCtrl);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        groupBox_modeControl = new QGroupBox(scrollAreaWidgetContents);
        groupBox_modeControl->setObjectName(QStringLiteral("groupBox_modeControl"));
        gridLayout_11 = new QGridLayout(groupBox_modeControl);
        gridLayout_11->setSpacing(2);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(5, 5, 5, 5);
        radioButton_VideoMode = new QRadioButton(groupBox_modeControl);
        radioButton_VideoMode->setObjectName(QStringLiteral("radioButton_VideoMode"));
        radioButton_VideoMode->setChecked(true);

        gridLayout_11->addWidget(radioButton_VideoMode, 2, 0, 1, 1);

        radioButton_StandbyMode = new QRadioButton(groupBox_modeControl);
        radioButton_StandbyMode->setObjectName(QStringLiteral("radioButton_StandbyMode"));

        gridLayout_11->addWidget(radioButton_StandbyMode, 3, 0, 1, 1);

        radioButton_VariableExpSLMode = new QRadioButton(groupBox_modeControl);
        radioButton_VariableExpSLMode->setObjectName(QStringLiteral("radioButton_VariableExpSLMode"));

        gridLayout_11->addWidget(radioButton_VariableExpSLMode, 1, 0, 1, 1);

        radioButton_SLMode = new QRadioButton(groupBox_modeControl);
        radioButton_SLMode->setObjectName(QStringLiteral("radioButton_SLMode"));
        radioButton_SLMode->setChecked(false);

        gridLayout_11->addWidget(radioButton_SLMode, 0, 0, 1, 1);


        verticalLayout_16->addWidget(groupBox_modeControl);

        groupBox_ImageSetting = new QGroupBox(scrollAreaWidgetContents);
        groupBox_ImageSetting->setObjectName(QStringLiteral("groupBox_ImageSetting"));
        verticalLayout_38 = new QVBoxLayout(groupBox_ImageSetting);
        verticalLayout_38->setSpacing(2);
        verticalLayout_38->setContentsMargins(11, 11, 11, 11);
        verticalLayout_38->setObjectName(QStringLiteral("verticalLayout_38"));
        verticalLayout_38->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        checkBox_shortAxisFlip = new QCheckBox(groupBox_ImageSetting);
        checkBox_shortAxisFlip->setObjectName(QStringLiteral("checkBox_shortAxisFlip"));

        horizontalLayout_13->addWidget(checkBox_shortAxisFlip);

        checkBox_longAxisFlip = new QCheckBox(groupBox_ImageSetting);
        checkBox_longAxisFlip->setObjectName(QStringLiteral("checkBox_longAxisFlip"));

        horizontalLayout_13->addWidget(checkBox_longAxisFlip);


        verticalLayout_38->addLayout(horizontalLayout_13);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        pushButton_GetFlip = new QPushButton(groupBox_ImageSetting);
        pushButton_GetFlip->setObjectName(QStringLiteral("pushButton_GetFlip"));

        horizontalLayout_18->addWidget(pushButton_GetFlip);

        pushButton_SetFlip = new QPushButton(groupBox_ImageSetting);
        pushButton_SetFlip->setObjectName(QStringLiteral("pushButton_SetFlip"));

        horizontalLayout_18->addWidget(pushButton_SetFlip);


        verticalLayout_38->addLayout(horizontalLayout_18);


        verticalLayout_16->addWidget(groupBox_ImageSetting);


        horizontalLayout_3->addLayout(verticalLayout_16);

        groupBox_LEDDriverCtrl = new QGroupBox(scrollAreaWidgetContents);
        groupBox_LEDDriverCtrl->setObjectName(QStringLiteral("groupBox_LEDDriverCtrl"));
        sizePolicy.setHeightForWidth(groupBox_LEDDriverCtrl->sizePolicy().hasHeightForWidth());
        groupBox_LEDDriverCtrl->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(groupBox_LEDDriverCtrl);
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_LEDCurrentCtrl = new QGroupBox(groupBox_LEDDriverCtrl);
        groupBox_LEDCurrentCtrl->setObjectName(QStringLiteral("groupBox_LEDCurrentCtrl"));
        sizePolicy.setHeightForWidth(groupBox_LEDCurrentCtrl->sizePolicy().hasHeightForWidth());
        groupBox_LEDCurrentCtrl->setSizePolicy(sizePolicy);
        gridLayout_15 = new QGridLayout(groupBox_LEDCurrentCtrl);
        gridLayout_15->setSpacing(2);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setContentsMargins(2, 2, 2, 2);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(2);
        formLayout->setVerticalSpacing(2);
        formLayout->setContentsMargins(5, 5, 5, 5);
        label_LEDRed = new QLabel(groupBox_LEDCurrentCtrl);
        label_LEDRed->setObjectName(QStringLiteral("label_LEDRed"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_LEDRed);

        lineEdit_RedLEDCurrent = new QLineEdit(groupBox_LEDCurrentCtrl);
        lineEdit_RedLEDCurrent->setObjectName(QStringLiteral("lineEdit_RedLEDCurrent"));
        sizePolicy.setHeightForWidth(lineEdit_RedLEDCurrent->sizePolicy().hasHeightForWidth());
        lineEdit_RedLEDCurrent->setSizePolicy(sizePolicy);
        lineEdit_RedLEDCurrent->setMaximumSize(QSize(85, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_RedLEDCurrent);

        label_LEDGreen = new QLabel(groupBox_LEDCurrentCtrl);
        label_LEDGreen->setObjectName(QStringLiteral("label_LEDGreen"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_LEDGreen);

        lineEdit_GreenLEDCurrent = new QLineEdit(groupBox_LEDCurrentCtrl);
        lineEdit_GreenLEDCurrent->setObjectName(QStringLiteral("lineEdit_GreenLEDCurrent"));
        sizePolicy.setHeightForWidth(lineEdit_GreenLEDCurrent->sizePolicy().hasHeightForWidth());
        lineEdit_GreenLEDCurrent->setSizePolicy(sizePolicy);
        lineEdit_GreenLEDCurrent->setMaximumSize(QSize(85, 16777215));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_GreenLEDCurrent);

        label_LEDBlue = new QLabel(groupBox_LEDCurrentCtrl);
        label_LEDBlue->setObjectName(QStringLiteral("label_LEDBlue"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_LEDBlue);

        lineEdit_BlueLEDCurrent = new QLineEdit(groupBox_LEDCurrentCtrl);
        lineEdit_BlueLEDCurrent->setObjectName(QStringLiteral("lineEdit_BlueLEDCurrent"));
        sizePolicy.setHeightForWidth(lineEdit_BlueLEDCurrent->sizePolicy().hasHeightForWidth());
        lineEdit_BlueLEDCurrent->setSizePolicy(sizePolicy);
        lineEdit_BlueLEDCurrent->setMaximumSize(QSize(85, 16777215));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_BlueLEDCurrent);

        checkBox_LedPwmInvert = new QCheckBox(groupBox_LEDCurrentCtrl);
        checkBox_LedPwmInvert->setObjectName(QStringLiteral("checkBox_LedPwmInvert"));

        formLayout->setWidget(3, QFormLayout::FieldRole, checkBox_LedPwmInvert);


        gridLayout_15->addLayout(formLayout, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_LEDCurrentCtrl);

        groupBox_LEDEnSelect = new QGroupBox(groupBox_LEDDriverCtrl);
        groupBox_LEDEnSelect->setObjectName(QStringLiteral("groupBox_LEDEnSelect"));
        sizePolicy.setHeightForWidth(groupBox_LEDEnSelect->sizePolicy().hasHeightForWidth());
        groupBox_LEDEnSelect->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox_LEDEnSelect);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        radioButton_ColorDisplayAuto = new QRadioButton(groupBox_LEDEnSelect);
        radioButton_ColorDisplayAuto->setObjectName(QStringLiteral("radioButton_ColorDisplayAuto"));
        radioButton_ColorDisplayAuto->setChecked(true);

        gridLayout->addWidget(radioButton_ColorDisplayAuto, 0, 0, 1, 1, Qt::AlignLeft);

        radioButton_ColorDisplayManual = new QRadioButton(groupBox_LEDEnSelect);
        radioButton_ColorDisplayManual->setObjectName(QStringLiteral("radioButton_ColorDisplayManual"));

        gridLayout->addWidget(radioButton_ColorDisplayManual, 1, 0, 1, 1, Qt::AlignLeft);

        checkBox_RedEnable = new QCheckBox(groupBox_LEDEnSelect);
        checkBox_RedEnable->setObjectName(QStringLiteral("checkBox_RedEnable"));
        checkBox_RedEnable->setEnabled(false);

        gridLayout->addWidget(checkBox_RedEnable, 1, 1, 1, 1);

        checkBox_GreenEnable = new QCheckBox(groupBox_LEDEnSelect);
        checkBox_GreenEnable->setObjectName(QStringLiteral("checkBox_GreenEnable"));
        checkBox_GreenEnable->setEnabled(false);

        gridLayout->addWidget(checkBox_GreenEnable, 2, 1, 1, 1);

        checkBox_BlueEnable = new QCheckBox(groupBox_LEDEnSelect);
        checkBox_BlueEnable->setObjectName(QStringLiteral("checkBox_BlueEnable"));
        checkBox_BlueEnable->setEnabled(false);

        gridLayout->addWidget(checkBox_BlueEnable, 3, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox_LEDEnSelect);


        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_GetLEDConfiguration = new QPushButton(groupBox_LEDDriverCtrl);
        pushButton_GetLEDConfiguration->setObjectName(QStringLiteral("pushButton_GetLEDConfiguration"));

        horizontalLayout->addWidget(pushButton_GetLEDConfiguration);

        pushButton_SetLEDConfiguration = new QPushButton(groupBox_LEDDriverCtrl);
        pushButton_SetLEDConfiguration->setObjectName(QStringLiteral("pushButton_SetLEDConfiguration"));

        horizontalLayout->addWidget(pushButton_SetLEDConfiguration);


        verticalLayout_6->addLayout(horizontalLayout);

        verticalLayout_6->setStretch(0, 1);

        horizontalLayout_3->addWidget(groupBox_LEDDriverCtrl);

        verticalLayout_46 = new QVBoxLayout();
        verticalLayout_46->setSpacing(6);
        verticalLayout_46->setObjectName(QStringLiteral("verticalLayout_46"));
        verticalLayout_46->setContentsMargins(0, -1, -1, -1);
        label_task1_firmware = new QLabel(scrollAreaWidgetContents);
        label_task1_firmware->setObjectName(QStringLiteral("label_task1_firmware"));
        label_task1_firmware->setAutoFillBackground(true);
        label_task1_firmware->setWordWrap(true);

        verticalLayout_46->addWidget(label_task1_firmware);


        horizontalLayout_3->addLayout(verticalLayout_46);

        horizontalSpacer_14 = new QSpacerItem(0, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_14);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 2);

        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(2);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        pushButton_ApplySolution = new QPushButton(scrollAreaWidgetContents);
        pushButton_ApplySolution->setObjectName(QStringLiteral("pushButton_ApplySolution"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_ApplySolution->sizePolicy().hasHeightForWidth());
        pushButton_ApplySolution->setSizePolicy(sizePolicy2);

        horizontalLayout_26->addWidget(pushButton_ApplySolution);

        pushButton_SaveSolution = new QPushButton(scrollAreaWidgetContents);
        pushButton_SaveSolution->setObjectName(QStringLiteral("pushButton_SaveSolution"));
        sizePolicy2.setHeightForWidth(pushButton_SaveSolution->sizePolicy().hasHeightForWidth());
        pushButton_SaveSolution->setSizePolicy(sizePolicy2);

        horizontalLayout_26->addWidget(pushButton_SaveSolution);

        pushButton_ApplyDefaultSolution = new QPushButton(scrollAreaWidgetContents);
        pushButton_ApplyDefaultSolution->setObjectName(QStringLiteral("pushButton_ApplyDefaultSolution"));

        horizontalLayout_26->addWidget(pushButton_ApplyDefaultSolution);


        verticalLayout_3->addLayout(horizontalLayout_26);

        tabWidget = new QTabWidget(scrollAreaWidgetContents);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setFocusPolicy(Qt::WheelFocus);
        tab_Video_Mode = new QWidget();
        tab_Video_Mode->setObjectName(QStringLiteral("tab_Video_Mode"));
        verticalLayout_9 = new QVBoxLayout(tab_Video_Mode);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        groupBox_InputConfiguration = new QGroupBox(tab_Video_Mode);
        groupBox_InputConfiguration->setObjectName(QStringLiteral("groupBox_InputConfiguration"));
        sizePolicy.setHeightForWidth(groupBox_InputConfiguration->sizePolicy().hasHeightForWidth());
        groupBox_InputConfiguration->setSizePolicy(sizePolicy);
        gridLayout_12 = new QGridLayout(groupBox_InputConfiguration);
        gridLayout_12->setSpacing(2);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(5, 5, 5, 5);
        groupBox_ClockSelect = new QGroupBox(groupBox_InputConfiguration);
        groupBox_ClockSelect->setObjectName(QStringLiteral("groupBox_ClockSelect"));
        sizePolicy.setHeightForWidth(groupBox_ClockSelect->sizePolicy().hasHeightForWidth());
        groupBox_ClockSelect->setSizePolicy(sizePolicy);
        verticalLayout_17 = new QVBoxLayout(groupBox_ClockSelect);
        verticalLayout_17->setSpacing(2);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(5, 5, 5, 5);
        comboBox_PortClockList = new QComboBox(groupBox_ClockSelect);
        comboBox_PortClockList->setObjectName(QStringLiteral("comboBox_PortClockList"));
        sizePolicy2.setHeightForWidth(comboBox_PortClockList->sizePolicy().hasHeightForWidth());
        comboBox_PortClockList->setSizePolicy(sizePolicy2);

        verticalLayout_17->addWidget(comboBox_PortClockList);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        pushButton_GetPortClock = new QPushButton(groupBox_ClockSelect);
        pushButton_GetPortClock->setObjectName(QStringLiteral("pushButton_GetPortClock"));

        horizontalLayout_14->addWidget(pushButton_GetPortClock);

        pushButton_SetPortClock = new QPushButton(groupBox_ClockSelect);
        pushButton_SetPortClock->setObjectName(QStringLiteral("pushButton_SetPortClock"));

        horizontalLayout_14->addWidget(pushButton_SetPortClock);


        verticalLayout_17->addLayout(horizontalLayout_14);


        gridLayout_12->addWidget(groupBox_ClockSelect, 2, 0, 1, 1);

        groupBox_PixelFormat = new QGroupBox(groupBox_InputConfiguration);
        groupBox_PixelFormat->setObjectName(QStringLiteral("groupBox_PixelFormat"));
        sizePolicy.setHeightForWidth(groupBox_PixelFormat->sizePolicy().hasHeightForWidth());
        groupBox_PixelFormat->setSizePolicy(sizePolicy);
        verticalLayout_13 = new QVBoxLayout(groupBox_PixelFormat);
        verticalLayout_13->setSpacing(2);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(5, 5, 5, 5);
        comboBox_PixelFormatList = new QComboBox(groupBox_PixelFormat);
        comboBox_PixelFormatList->setObjectName(QStringLiteral("comboBox_PixelFormatList"));
        sizePolicy2.setHeightForWidth(comboBox_PixelFormatList->sizePolicy().hasHeightForWidth());
        comboBox_PixelFormatList->setSizePolicy(sizePolicy2);

        verticalLayout_13->addWidget(comboBox_PixelFormatList);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(2);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        pushButton_GetPortPixelFormat = new QPushButton(groupBox_PixelFormat);
        pushButton_GetPortPixelFormat->setObjectName(QStringLiteral("pushButton_GetPortPixelFormat"));

        horizontalLayout_9->addWidget(pushButton_GetPortPixelFormat);

        pushButton_SetPortPixelFormat = new QPushButton(groupBox_PixelFormat);
        pushButton_SetPortPixelFormat->setObjectName(QStringLiteral("pushButton_SetPortPixelFormat"));

        horizontalLayout_9->addWidget(pushButton_SetPortPixelFormat);


        verticalLayout_13->addLayout(horizontalLayout_9);


        gridLayout_12->addWidget(groupBox_PixelFormat, 3, 0, 1, 1);

        groupBox_SourceSelect = new QGroupBox(groupBox_InputConfiguration);
        groupBox_SourceSelect->setObjectName(QStringLiteral("groupBox_SourceSelect"));
        sizePolicy.setHeightForWidth(groupBox_SourceSelect->sizePolicy().hasHeightForWidth());
        groupBox_SourceSelect->setSizePolicy(sizePolicy);
        verticalLayout_30 = new QVBoxLayout(groupBox_SourceSelect);
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setContentsMargins(11, 11, 11, 11);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        comboBox_InputSourceList = new QComboBox(groupBox_SourceSelect);
        comboBox_InputSourceList->setObjectName(QStringLiteral("comboBox_InputSourceList"));
        sizePolicy2.setHeightForWidth(comboBox_InputSourceList->sizePolicy().hasHeightForWidth());
        comboBox_InputSourceList->setSizePolicy(sizePolicy2);

        verticalLayout_20->addWidget(comboBox_InputSourceList);

        comboBox_InputSourceOptionList = new QComboBox(groupBox_SourceSelect);
        comboBox_InputSourceOptionList->setObjectName(QStringLiteral("comboBox_InputSourceOptionList"));
        sizePolicy2.setHeightForWidth(comboBox_InputSourceOptionList->sizePolicy().hasHeightForWidth());
        comboBox_InputSourceOptionList->setSizePolicy(sizePolicy2);

        verticalLayout_20->addWidget(comboBox_InputSourceOptionList);

        splitter = new QSplitter(groupBox_SourceSelect);
        splitter->setObjectName(QStringLiteral("splitter"));
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        pushButton_GetPortSource = new QPushButton(splitter);
        pushButton_GetPortSource->setObjectName(QStringLiteral("pushButton_GetPortSource"));
        splitter->addWidget(pushButton_GetPortSource);
        pushButton_SetPortSource = new QPushButton(splitter);
        pushButton_SetPortSource->setObjectName(QStringLiteral("pushButton_SetPortSource"));
        splitter->addWidget(pushButton_SetPortSource);

        verticalLayout_20->addWidget(splitter);


        verticalLayout_30->addLayout(verticalLayout_20);


        gridLayout_12->addWidget(groupBox_SourceSelect, 0, 0, 1, 1);

        groupBox_PortDataSwap = new QGroupBox(groupBox_InputConfiguration);
        groupBox_PortDataSwap->setObjectName(QStringLiteral("groupBox_PortDataSwap"));
        sizePolicy.setHeightForWidth(groupBox_PortDataSwap->sizePolicy().hasHeightForWidth());
        groupBox_PortDataSwap->setSizePolicy(sizePolicy);
        verticalLayout_32 = new QVBoxLayout(groupBox_PortDataSwap);
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setContentsMargins(11, 11, 11, 11);
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        comboBox_SwapSelectList = new QComboBox(groupBox_PortDataSwap);
        comboBox_SwapSelectList->setObjectName(QStringLiteral("comboBox_SwapSelectList"));
        sizePolicy2.setHeightForWidth(comboBox_SwapSelectList->sizePolicy().hasHeightForWidth());
        comboBox_SwapSelectList->setSizePolicy(sizePolicy2);

        verticalLayout_32->addWidget(comboBox_SwapSelectList);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(2);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        splitter_2 = new QSplitter(groupBox_PortDataSwap);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        sizePolicy.setHeightForWidth(splitter_2->sizePolicy().hasHeightForWidth());
        splitter_2->setSizePolicy(sizePolicy);
        splitter_2->setOrientation(Qt::Horizontal);
        pushButton_GetPortSwap = new QPushButton(splitter_2);
        pushButton_GetPortSwap->setObjectName(QStringLiteral("pushButton_GetPortSwap"));
        sizePolicy.setHeightForWidth(pushButton_GetPortSwap->sizePolicy().hasHeightForWidth());
        pushButton_GetPortSwap->setSizePolicy(sizePolicy);
        splitter_2->addWidget(pushButton_GetPortSwap);
        pushButton_SetPortSwap = new QPushButton(splitter_2);
        pushButton_SetPortSwap->setObjectName(QStringLiteral("pushButton_SetPortSwap"));
        sizePolicy.setHeightForWidth(pushButton_SetPortSwap->sizePolicy().hasHeightForWidth());
        pushButton_SetPortSwap->setSizePolicy(sizePolicy);
        splitter_2->addWidget(pushButton_SetPortSwap);

        verticalLayout_14->addWidget(splitter_2);


        verticalLayout_32->addLayout(verticalLayout_14);


        gridLayout_12->addWidget(groupBox_PortDataSwap, 1, 0, 1, 1);


        verticalLayout_21->addWidget(groupBox_InputConfiguration);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_21->addItem(verticalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout_21);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        groupBox_DisplayDimension = new QGroupBox(tab_Video_Mode);
        groupBox_DisplayDimension->setObjectName(QStringLiteral("groupBox_DisplayDimension"));
        sizePolicy.setHeightForWidth(groupBox_DisplayDimension->sizePolicy().hasHeightForWidth());
        groupBox_DisplayDimension->setSizePolicy(sizePolicy);
        verticalLayout_8 = new QVBoxLayout(groupBox_DisplayDimension);
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(5, 5, 5, 5);
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(2);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        label_DispLinesPerFrame = new QLabel(groupBox_DisplayDimension);
        label_DispLinesPerFrame->setObjectName(QStringLiteral("label_DispLinesPerFrame"));

        gridLayout_14->addWidget(label_DispLinesPerFrame, 4, 0, 1, 1);

        lineEdit_CropAreaLinesPerFrame = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_CropAreaLinesPerFrame->setObjectName(QStringLiteral("lineEdit_CropAreaLinesPerFrame"));
        lineEdit_CropAreaLinesPerFrame->setMaximumSize(QSize(40, 16777215));
        lineEdit_CropAreaLinesPerFrame->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_CropAreaLinesPerFrame, 4, 2, 1, 1, Qt::AlignHCenter);

        lineEdit_DispAreaPixPerFrame = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_DispAreaPixPerFrame->setObjectName(QStringLiteral("lineEdit_DispAreaPixPerFrame"));
        lineEdit_DispAreaPixPerFrame->setMaximumSize(QSize(40, 16777215));
        lineEdit_DispAreaPixPerFrame->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_DispAreaPixPerFrame, 2, 1, 1, 1, Qt::AlignHCenter);

        label_DispFirstPix = new QLabel(groupBox_DisplayDimension);
        label_DispFirstPix->setObjectName(QStringLiteral("label_DispFirstPix"));

        gridLayout_14->addWidget(label_DispFirstPix, 1, 0, 1, 1);

        lineEdit_DispAreaFirstLine = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_DispAreaFirstLine->setObjectName(QStringLiteral("lineEdit_DispAreaFirstLine"));
        lineEdit_DispAreaFirstLine->setMaximumSize(QSize(40, 16777215));
        lineEdit_DispAreaFirstLine->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_DispAreaFirstLine, 3, 1, 1, 1, Qt::AlignHCenter);

        lineEdit_DispAreaLinesPerFrame = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_DispAreaLinesPerFrame->setObjectName(QStringLiteral("lineEdit_DispAreaLinesPerFrame"));
        lineEdit_DispAreaLinesPerFrame->setMaximumSize(QSize(40, 16777215));
        lineEdit_DispAreaLinesPerFrame->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_DispAreaLinesPerFrame, 4, 1, 1, 1, Qt::AlignHCenter);

        lineEdit_CropAreaPixelsPerLine = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_CropAreaPixelsPerLine->setObjectName(QStringLiteral("lineEdit_CropAreaPixelsPerLine"));
        lineEdit_CropAreaPixelsPerLine->setMaximumSize(QSize(40, 16777215));
        lineEdit_CropAreaPixelsPerLine->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_CropAreaPixelsPerLine, 2, 2, 1, 1, Qt::AlignHCenter);

        lineEdit_CropAreaFirstLine = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_CropAreaFirstLine->setObjectName(QStringLiteral("lineEdit_CropAreaFirstLine"));
        lineEdit_CropAreaFirstLine->setMaximumSize(QSize(40, 16777215));
        lineEdit_CropAreaFirstLine->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_CropAreaFirstLine, 3, 2, 1, 1, Qt::AlignHCenter);

        lineEdit_CropAreaFirstPix = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_CropAreaFirstPix->setObjectName(QStringLiteral("lineEdit_CropAreaFirstPix"));
        lineEdit_CropAreaFirstPix->setMaximumSize(QSize(40, 16777215));
        lineEdit_CropAreaFirstPix->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEdit_CropAreaFirstPix->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_CropAreaFirstPix, 1, 2, 1, 1, Qt::AlignHCenter);

        lineEdit_DispAreaFirstPixel = new QLineEdit(groupBox_DisplayDimension);
        lineEdit_DispAreaFirstPixel->setObjectName(QStringLiteral("lineEdit_DispAreaFirstPixel"));
        lineEdit_DispAreaFirstPixel->setMaximumSize(QSize(40, 16777215));
        lineEdit_DispAreaFirstPixel->setMaxLength(4);

        gridLayout_14->addWidget(lineEdit_DispAreaFirstPixel, 1, 1, 1, 1, Qt::AlignHCenter);

        label_DispArea = new QLabel(groupBox_DisplayDimension);
        label_DispArea->setObjectName(QStringLiteral("label_DispArea"));

        gridLayout_14->addWidget(label_DispArea, 0, 1, 1, 1);

        label_CropArea = new QLabel(groupBox_DisplayDimension);
        label_CropArea->setObjectName(QStringLiteral("label_CropArea"));

        gridLayout_14->addWidget(label_CropArea, 0, 2, 1, 1);

        label_DispFirstLine = new QLabel(groupBox_DisplayDimension);
        label_DispFirstLine->setObjectName(QStringLiteral("label_DispFirstLine"));

        gridLayout_14->addWidget(label_DispFirstLine, 3, 0, 1, 1);

        label_DispPixPerLine = new QLabel(groupBox_DisplayDimension);
        label_DispPixPerLine->setObjectName(QStringLiteral("label_DispPixPerLine"));

        gridLayout_14->addWidget(label_DispPixPerLine, 2, 0, 1, 1);


        verticalLayout_8->addLayout(gridLayout_14);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(2);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        pushButton_GetDisplayConfiguration = new QPushButton(groupBox_DisplayDimension);
        pushButton_GetDisplayConfiguration->setObjectName(QStringLiteral("pushButton_GetDisplayConfiguration"));

        horizontalLayout_10->addWidget(pushButton_GetDisplayConfiguration);

        pushButton_SetDisplayConfiguration = new QPushButton(groupBox_DisplayDimension);
        pushButton_SetDisplayConfiguration->setObjectName(QStringLiteral("pushButton_SetDisplayConfiguration"));

        horizontalLayout_10->addWidget(pushButton_SetDisplayConfiguration);


        verticalLayout_8->addLayout(horizontalLayout_10);


        verticalLayout_23->addWidget(groupBox_DisplayDimension);

        groupBox_TPG = new QGroupBox(tab_Video_Mode);
        groupBox_TPG->setObjectName(QStringLiteral("groupBox_TPG"));
        sizePolicy.setHeightForWidth(groupBox_TPG->sizePolicy().hasHeightForWidth());
        groupBox_TPG->setSizePolicy(sizePolicy);
        verticalLayout_15 = new QVBoxLayout(groupBox_TPG);
        verticalLayout_15->setSpacing(2);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(5, 5, 5, 5);
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(2);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        spinBox_TPGForegroundColorGreen = new QSpinBox(groupBox_TPG);
        spinBox_TPGForegroundColorGreen->setObjectName(QStringLiteral("spinBox_TPGForegroundColorGreen"));
        spinBox_TPGForegroundColorGreen->setEnabled(false);
        spinBox_TPGForegroundColorGreen->setMaximum(1023);

        gridLayout_9->addWidget(spinBox_TPGForegroundColorGreen, 1, 2, 1, 1);

        spinBox_TPGBackgroundColorBlue = new QSpinBox(groupBox_TPG);
        spinBox_TPGBackgroundColorBlue->setObjectName(QStringLiteral("spinBox_TPGBackgroundColorBlue"));
        spinBox_TPGBackgroundColorBlue->setEnabled(false);
        spinBox_TPGBackgroundColorBlue->setMaximum(1023);

        gridLayout_9->addWidget(spinBox_TPGBackgroundColorBlue, 2, 3, 1, 1);

        spinBox_TPGBackgroundColorGreen = new QSpinBox(groupBox_TPG);
        spinBox_TPGBackgroundColorGreen->setObjectName(QStringLiteral("spinBox_TPGBackgroundColorGreen"));
        spinBox_TPGBackgroundColorGreen->setEnabled(false);
        spinBox_TPGBackgroundColorGreen->setMaximum(1023);

        gridLayout_9->addWidget(spinBox_TPGBackgroundColorGreen, 2, 2, 1, 1);

        spinBox_TPGForegroundColorRed = new QSpinBox(groupBox_TPG);
        spinBox_TPGForegroundColorRed->setObjectName(QStringLiteral("spinBox_TPGForegroundColorRed"));
        spinBox_TPGForegroundColorRed->setEnabled(false);
        spinBox_TPGForegroundColorRed->setMaximum(1023);

        gridLayout_9->addWidget(spinBox_TPGForegroundColorRed, 1, 1, 1, 1);

        label_TPGColorForeground = new QLabel(groupBox_TPG);
        label_TPGColorForeground->setObjectName(QStringLiteral("label_TPGColorForeground"));

        gridLayout_9->addWidget(label_TPGColorForeground, 1, 0, 1, 1);

        label_TPGColorBlue = new QLabel(groupBox_TPG);
        label_TPGColorBlue->setObjectName(QStringLiteral("label_TPGColorBlue"));

        gridLayout_9->addWidget(label_TPGColorBlue, 0, 3, 1, 1);

        label_TPGColorGreen = new QLabel(groupBox_TPG);
        label_TPGColorGreen->setObjectName(QStringLiteral("label_TPGColorGreen"));

        gridLayout_9->addWidget(label_TPGColorGreen, 0, 2, 1, 1);

        label_TPGColorRed = new QLabel(groupBox_TPG);
        label_TPGColorRed->setObjectName(QStringLiteral("label_TPGColorRed"));

        gridLayout_9->addWidget(label_TPGColorRed, 0, 1, 1, 1);

        spinBox_TPGBackgroundColorRed = new QSpinBox(groupBox_TPG);
        spinBox_TPGBackgroundColorRed->setObjectName(QStringLiteral("spinBox_TPGBackgroundColorRed"));
        spinBox_TPGBackgroundColorRed->setEnabled(false);
        spinBox_TPGBackgroundColorRed->setMaximum(1023);

        gridLayout_9->addWidget(spinBox_TPGBackgroundColorRed, 2, 1, 1, 1);

        label_TPGColorBackground = new QLabel(groupBox_TPG);
        label_TPGColorBackground->setObjectName(QStringLiteral("label_TPGColorBackground"));

        gridLayout_9->addWidget(label_TPGColorBackground, 2, 0, 1, 1);

        spinBox_TPGForegroundColorBlue = new QSpinBox(groupBox_TPG);
        spinBox_TPGForegroundColorBlue->setObjectName(QStringLiteral("spinBox_TPGForegroundColorBlue"));
        spinBox_TPGForegroundColorBlue->setEnabled(false);
        spinBox_TPGForegroundColorBlue->setMaximum(1023);

        gridLayout_9->addWidget(spinBox_TPGForegroundColorBlue, 1, 3, 1, 1);


        verticalLayout_15->addLayout(gridLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(2);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        pushButton_GetTPGColor = new QPushButton(groupBox_TPG);
        pushButton_GetTPGColor->setObjectName(QStringLiteral("pushButton_GetTPGColor"));
        pushButton_GetTPGColor->setEnabled(false);

        horizontalLayout_11->addWidget(pushButton_GetTPGColor);

        pushButton_SetTPGColor = new QPushButton(groupBox_TPG);
        pushButton_SetTPGColor->setObjectName(QStringLiteral("pushButton_SetTPGColor"));
        pushButton_SetTPGColor->setEnabled(false);

        horizontalLayout_11->addWidget(pushButton_SetTPGColor);


        verticalLayout_15->addLayout(horizontalLayout_11);


        verticalLayout_23->addWidget(groupBox_TPG);

        groupBox_FPDModeAndFieldSelect = new QGroupBox(tab_Video_Mode);
        groupBox_FPDModeAndFieldSelect->setObjectName(QStringLiteral("groupBox_FPDModeAndFieldSelect"));
        sizePolicy.setHeightForWidth(groupBox_FPDModeAndFieldSelect->sizePolicy().hasHeightForWidth());
        groupBox_FPDModeAndFieldSelect->setSizePolicy(sizePolicy);
        verticalLayout_18 = new QVBoxLayout(groupBox_FPDModeAndFieldSelect);
        verticalLayout_18->setSpacing(2);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(5, 5, 5, 5);
        comboBox_FPDFieldSelectList = new QComboBox(groupBox_FPDModeAndFieldSelect);
        comboBox_FPDFieldSelectList->setObjectName(QStringLiteral("comboBox_FPDFieldSelectList"));
        comboBox_FPDFieldSelectList->setEnabled(false);

        verticalLayout_18->addWidget(comboBox_FPDFieldSelectList);

        checkBox_FPDInvPol = new QCheckBox(groupBox_FPDModeAndFieldSelect);
        checkBox_FPDInvPol->setObjectName(QStringLiteral("checkBox_FPDInvPol"));
        checkBox_FPDInvPol->setEnabled(false);

        verticalLayout_18->addWidget(checkBox_FPDInvPol);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        spinBox_FPDPixMode = new QSpinBox(groupBox_FPDModeAndFieldSelect);
        spinBox_FPDPixMode->setObjectName(QStringLiteral("spinBox_FPDPixMode"));
        spinBox_FPDPixMode->setEnabled(false);
        spinBox_FPDPixMode->setMinimum(1);
        spinBox_FPDPixMode->setMaximum(4);

        horizontalLayout_16->addWidget(spinBox_FPDPixMode);

        label_FPDPixMode = new QLabel(groupBox_FPDModeAndFieldSelect);
        label_FPDPixMode->setObjectName(QStringLiteral("label_FPDPixMode"));

        horizontalLayout_16->addWidget(label_FPDPixMode);


        verticalLayout_18->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(2);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        pushButton_GetFPDMode = new QPushButton(groupBox_FPDModeAndFieldSelect);
        pushButton_GetFPDMode->setObjectName(QStringLiteral("pushButton_GetFPDMode"));
        pushButton_GetFPDMode->setEnabled(false);

        horizontalLayout_15->addWidget(pushButton_GetFPDMode);

        pushButton_SetFPDMode = new QPushButton(groupBox_FPDModeAndFieldSelect);
        pushButton_SetFPDMode->setObjectName(QStringLiteral("pushButton_SetFPDMode"));
        pushButton_SetFPDMode->setEnabled(false);

        horizontalLayout_15->addWidget(pushButton_SetFPDMode);


        verticalLayout_18->addLayout(horizontalLayout_15);


        verticalLayout_23->addWidget(groupBox_FPDModeAndFieldSelect);

        verticalSpacer_10 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_23->addItem(verticalSpacer_10);


        horizontalLayout_4->addLayout(verticalLayout_23);

        verticalLayout_40 = new QVBoxLayout();
        verticalLayout_40->setSpacing(6);
        verticalLayout_40->setObjectName(QStringLiteral("verticalLayout_40"));
        groupBox_VideoSignalInfo = new QGroupBox(tab_Video_Mode);
        groupBox_VideoSignalInfo->setObjectName(QStringLiteral("groupBox_VideoSignalInfo"));
        formLayout_10 = new QFormLayout(groupBox_VideoSignalInfo);
        formLayout_10->setSpacing(6);
        formLayout_10->setContentsMargins(11, 11, 11, 11);
        formLayout_10->setObjectName(QStringLiteral("formLayout_10"));
        formLayout_10->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_10->setItem(0, QFormLayout::FieldRole, horizontalSpacer_4);

        gridLayout_25 = new QGridLayout();
        gridLayout_25->setSpacing(6);
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        lineEdit_VidActvFirstPix = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidActvFirstPix->setObjectName(QStringLiteral("lineEdit_VidActvFirstPix"));
        lineEdit_VidActvFirstPix->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidActvFirstPix, 13, 1, 1, 1);

        label_VidRsvd = new QLabel(groupBox_VideoSignalInfo);
        label_VidRsvd->setObjectName(QStringLiteral("label_VidRsvd"));

        gridLayout_25->addWidget(label_VidRsvd, 3, 0, 1, 1);

        label_VidActvFirstPix = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvFirstPix->setObjectName(QStringLiteral("label_VidActvFirstPix"));

        gridLayout_25->addWidget(label_VidActvFirstPix, 13, 0, 1, 1);

        label_VidActvPxPerLineInPix = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvPxPerLineInPix->setObjectName(QStringLiteral("label_VidActvPxPerLineInPix"));

        gridLayout_25->addWidget(label_VidActvPxPerLineInPix, 11, 2, 1, 1);

        label_VidHPol = new QLabel(groupBox_VideoSignalInfo);
        label_VidHPol->setObjectName(QStringLiteral("label_VidHPol"));

        gridLayout_25->addWidget(label_VidHPol, 4, 0, 1, 1);

        lineEdit_VidActvLinesPerFrame = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidActvLinesPerFrame->setObjectName(QStringLiteral("lineEdit_VidActvLinesPerFrame"));
        lineEdit_VidActvLinesPerFrame->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidActvLinesPerFrame, 12, 1, 1, 1);

        lineEdit_VidVFreq = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidVFreq->setObjectName(QStringLiteral("lineEdit_VidVFreq"));
        lineEdit_VidVFreq->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidVFreq, 8, 1, 1, 1);

        label_VidHResInPix = new QLabel(groupBox_VideoSignalInfo);
        label_VidHResInPix->setObjectName(QStringLiteral("label_VidHResInPix"));

        gridLayout_25->addWidget(label_VidHResInPix, 1, 2, 1, 1);

        label_VidPixPerLineInPix = new QLabel(groupBox_VideoSignalInfo);
        label_VidPixPerLineInPix->setObjectName(QStringLiteral("label_VidPixPerLineInPix"));

        gridLayout_25->addWidget(label_VidPixPerLineInPix, 9, 2, 1, 1);

        label_VidPixClkinMHz = new QLabel(groupBox_VideoSignalInfo);
        label_VidPixClkinMHz->setObjectName(QStringLiteral("label_VidPixClkinMHz"));

        gridLayout_25->addWidget(label_VidPixClkinMHz, 6, 2, 1, 1);

        label_VidVFreInHz = new QLabel(groupBox_VideoSignalInfo);
        label_VidVFreInHz->setObjectName(QStringLiteral("label_VidVFreInHz"));

        gridLayout_25->addWidget(label_VidVFreInHz, 8, 2, 1, 1);

        lineEdit_VidRsvd = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidRsvd->setObjectName(QStringLiteral("lineEdit_VidRsvd"));
        lineEdit_VidRsvd->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidRsvd, 3, 1, 1, 1);

        lineEdit_VidActvPixPerLine = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidActvPixPerLine->setObjectName(QStringLiteral("lineEdit_VidActvPixPerLine"));
        lineEdit_VidActvPixPerLine->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidActvPixPerLine, 11, 1, 1, 1);

        pushButton_GetVideoSingalInfo = new QPushButton(groupBox_VideoSignalInfo);
        pushButton_GetVideoSingalInfo->setObjectName(QStringLiteral("pushButton_GetVideoSingalInfo"));

        gridLayout_25->addWidget(pushButton_GetVideoSingalInfo, 15, 1, 1, 1);

        label_VidActvPixPerLine = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvPixPerLine->setObjectName(QStringLiteral("label_VidActvPixPerLine"));

        gridLayout_25->addWidget(label_VidActvPixPerLine, 11, 0, 1, 1);

        label_VidActvPixPerFrameInPix = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvPixPerFrameInPix->setObjectName(QStringLiteral("label_VidActvPixPerFrameInPix"));

        gridLayout_25->addWidget(label_VidActvPixPerFrameInPix, 12, 2, 1, 1);

        label_VidActvFirstLine = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvFirstLine->setObjectName(QStringLiteral("label_VidActvFirstLine"));

        gridLayout_25->addWidget(label_VidActvFirstLine, 14, 0, 1, 1);

        label_VidSigStatus = new QLabel(groupBox_VideoSignalInfo);
        label_VidSigStatus->setObjectName(QStringLiteral("label_VidSigStatus"));

        gridLayout_25->addWidget(label_VidSigStatus, 0, 0, 1, 1);

        lineEdit_VidLinesPerFrame = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidLinesPerFrame->setObjectName(QStringLiteral("lineEdit_VidLinesPerFrame"));
        lineEdit_VidLinesPerFrame->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidLinesPerFrame, 10, 1, 1, 1);

        label_VidVPol = new QLabel(groupBox_VideoSignalInfo);
        label_VidVPol->setObjectName(QStringLiteral("label_VidVPol"));

        gridLayout_25->addWidget(label_VidVPol, 5, 0, 1, 1);

        label_VidVFreq = new QLabel(groupBox_VideoSignalInfo);
        label_VidVFreq->setObjectName(QStringLiteral("label_VidVFreq"));

        gridLayout_25->addWidget(label_VidVFreq, 8, 0, 1, 1);

        label_VidActvLinesPerFrame = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvLinesPerFrame->setObjectName(QStringLiteral("label_VidActvLinesPerFrame"));

        gridLayout_25->addWidget(label_VidActvLinesPerFrame, 12, 0, 1, 1);

        label_VidPixClk = new QLabel(groupBox_VideoSignalInfo);
        label_VidPixClk->setObjectName(QStringLiteral("label_VidPixClk"));

        gridLayout_25->addWidget(label_VidPixClk, 6, 0, 1, 1);

        label_VidPixPerLine = new QLabel(groupBox_VideoSignalInfo);
        label_VidPixPerLine->setObjectName(QStringLiteral("label_VidPixPerLine"));

        gridLayout_25->addWidget(label_VidPixPerLine, 9, 0, 1, 1);

        label_VidLinesPerFrame = new QLabel(groupBox_VideoSignalInfo);
        label_VidLinesPerFrame->setObjectName(QStringLiteral("label_VidLinesPerFrame"));

        gridLayout_25->addWidget(label_VidLinesPerFrame, 10, 0, 1, 1);

        lineEdit_VidPixPerLine = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidPixPerLine->setObjectName(QStringLiteral("lineEdit_VidPixPerLine"));
        lineEdit_VidPixPerLine->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidPixPerLine, 9, 1, 1, 1);

        label_VidHFreq = new QLabel(groupBox_VideoSignalInfo);
        label_VidHFreq->setObjectName(QStringLiteral("label_VidHFreq"));

        gridLayout_25->addWidget(label_VidHFreq, 7, 0, 1, 1);

        label_VidHFreInKHz = new QLabel(groupBox_VideoSignalInfo);
        label_VidHFreInKHz->setObjectName(QStringLiteral("label_VidHFreInKHz"));

        gridLayout_25->addWidget(label_VidHFreInKHz, 7, 2, 1, 1);

        label_VidStatus = new QLabel(groupBox_VideoSignalInfo);
        label_VidStatus->setObjectName(QStringLiteral("label_VidStatus"));

        gridLayout_25->addWidget(label_VidStatus, 0, 2, 1, 1);

        lineEdit_VidVRes = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidVRes->setObjectName(QStringLiteral("lineEdit_VidVRes"));
        lineEdit_VidVRes->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidVRes, 2, 1, 1, 1);

        comboBox_VidLockSatus = new QComboBox(groupBox_VideoSignalInfo);
        comboBox_VidLockSatus->setObjectName(QStringLiteral("comboBox_VidLockSatus"));
        comboBox_VidLockSatus->setLayoutDirection(Qt::LeftToRight);

        gridLayout_25->addWidget(comboBox_VidLockSatus, 0, 1, 1, 1);

        label_VidVRes = new QLabel(groupBox_VideoSignalInfo);
        label_VidVRes->setObjectName(QStringLiteral("label_VidVRes"));

        gridLayout_25->addWidget(label_VidVRes, 2, 0, 1, 1);

        label_VidHRes = new QLabel(groupBox_VideoSignalInfo);
        label_VidHRes->setObjectName(QStringLiteral("label_VidHRes"));

        gridLayout_25->addWidget(label_VidHRes, 1, 0, 1, 1);

        label_VidLinesPerFramInPix = new QLabel(groupBox_VideoSignalInfo);
        label_VidLinesPerFramInPix->setObjectName(QStringLiteral("label_VidLinesPerFramInPix"));

        gridLayout_25->addWidget(label_VidLinesPerFramInPix, 10, 2, 1, 1);

        lineEdit_VidHRes = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidHRes->setObjectName(QStringLiteral("lineEdit_VidHRes"));
        lineEdit_VidHRes->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidHRes, 1, 1, 1, 1);

        label_VResInPix = new QLabel(groupBox_VideoSignalInfo);
        label_VResInPix->setObjectName(QStringLiteral("label_VResInPix"));

        gridLayout_25->addWidget(label_VResInPix, 2, 2, 1, 1);

        lineEdit_VidHFreq = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidHFreq->setObjectName(QStringLiteral("lineEdit_VidHFreq"));
        lineEdit_VidHFreq->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidHFreq, 7, 1, 1, 1);

        comboBox_VidHPol = new QComboBox(groupBox_VideoSignalInfo);
        comboBox_VidHPol->setObjectName(QStringLiteral("comboBox_VidHPol"));

        gridLayout_25->addWidget(comboBox_VidHPol, 4, 1, 1, 1);

        lineEdit_VidActvFirstLine = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidActvFirstLine->setObjectName(QStringLiteral("lineEdit_VidActvFirstLine"));
        lineEdit_VidActvFirstLine->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidActvFirstLine, 14, 1, 1, 1);

        comboBox_VidVPol = new QComboBox(groupBox_VideoSignalInfo);
        comboBox_VidVPol->setObjectName(QStringLiteral("comboBox_VidVPol"));

        gridLayout_25->addWidget(comboBox_VidVPol, 5, 1, 1, 1);

        lineEdit_VidPixClk = new QLineEdit(groupBox_VideoSignalInfo);
        lineEdit_VidPixClk->setObjectName(QStringLiteral("lineEdit_VidPixClk"));
        lineEdit_VidPixClk->setReadOnly(true);

        gridLayout_25->addWidget(lineEdit_VidPixClk, 6, 1, 1, 1);

        label_VidActvFirstPixPos = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvFirstPixPos->setObjectName(QStringLiteral("label_VidActvFirstPixPos"));

        gridLayout_25->addWidget(label_VidActvFirstPixPos, 13, 2, 1, 1);

        label_VidActvFirsLinePos = new QLabel(groupBox_VideoSignalInfo);
        label_VidActvFirsLinePos->setObjectName(QStringLiteral("label_VidActvFirsLinePos"));

        gridLayout_25->addWidget(label_VidActvFirsLinePos, 14, 2, 1, 1);


        formLayout_10->setLayout(0, QFormLayout::LabelRole, gridLayout_25);


        verticalLayout_40->addWidget(groupBox_VideoSignalInfo);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_40->addItem(verticalSpacer_15);


        horizontalLayout_4->addLayout(verticalLayout_40);


        verticalLayout_9->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab_Video_Mode, QString());
        tab_Pattern_Seq = new QWidget();
        tab_Pattern_Seq->setObjectName(QStringLiteral("tab_Pattern_Seq"));
        verticalLayout_25 = new QVBoxLayout(tab_Pattern_Seq);
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        tabWidget_2 = new QTabWidget(tab_Pattern_Seq);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        sizePolicy.setHeightForWidth(tabWidget_2->sizePolicy().hasHeightForWidth());
        tabWidget_2->setSizePolicy(sizePolicy);
        tabWidget_2->setMinimumSize(QSize(0, 0));
        tab_pat_seq_seq_settings = new QWidget();
        tab_pat_seq_seq_settings->setObjectName(QStringLiteral("tab_pat_seq_seq_settings"));
        horizontalLayout_36 = new QHBoxLayout(tab_pat_seq_seq_settings);
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox_PatSeqSel = new QGroupBox(tab_pat_seq_seq_settings);
        groupBox_PatSeqSel->setObjectName(QStringLiteral("groupBox_PatSeqSel"));
        sizePolicy.setHeightForWidth(groupBox_PatSeqSel->sizePolicy().hasHeightForWidth());
        groupBox_PatSeqSel->setSizePolicy(sizePolicy);
        verticalLayout_22 = new QVBoxLayout(groupBox_PatSeqSel);
        verticalLayout_22->setSpacing(2);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(2);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        comboBox_PatSeqSelPatColor = new QComboBox(groupBox_PatSeqSel);
        comboBox_PatSeqSelPatColor->setObjectName(QStringLiteral("comboBox_PatSeqSelPatColor"));

        horizontalLayout_21->addWidget(comboBox_PatSeqSelPatColor);

        comboBox_PatSeqSelTrigType = new QComboBox(groupBox_PatSeqSel);
        comboBox_PatSeqSelTrigType->setObjectName(QStringLiteral("comboBox_PatSeqSelTrigType"));

        horizontalLayout_21->addWidget(comboBox_PatSeqSelTrigType);


        verticalLayout_22->addLayout(horizontalLayout_21);

        groupBox_PatSeqBitPlaneSel = new QGroupBox(groupBox_PatSeqSel);
        groupBox_PatSeqBitPlaneSel->setObjectName(QStringLiteral("groupBox_PatSeqBitPlaneSel"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_PatSeqBitPlaneSel->sizePolicy().hasHeightForWidth());
        groupBox_PatSeqBitPlaneSel->setSizePolicy(sizePolicy3);
        groupBox_PatSeqBitPlaneSel->setMinimumSize(QSize(0, 0));
        groupBox_PatSeqBitPlaneSel->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_10 = new QVBoxLayout(groupBox_PatSeqBitPlaneSel);
        verticalLayout_10->setSpacing(2);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_10->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(2);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_PatSeqFrmOrImgIndex = new QLabel(groupBox_PatSeqBitPlaneSel);
        label_PatSeqFrmOrImgIndex->setObjectName(QStringLiteral("label_PatSeqFrmOrImgIndex"));

        horizontalLayout_17->addWidget(label_PatSeqFrmOrImgIndex);

        spinBox_PatSeqFrameImgIndex = new QSpinBox(groupBox_PatSeqBitPlaneSel);
        spinBox_PatSeqFrameImgIndex->setObjectName(QStringLiteral("spinBox_PatSeqFrameImgIndex"));
        spinBox_PatSeqFrameImgIndex->setMaximum(63);

        horizontalLayout_17->addWidget(spinBox_PatSeqFrameImgIndex);

        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_9);

        label_PatSeqPatBitDepthSel = new QLabel(groupBox_PatSeqBitPlaneSel);
        label_PatSeqPatBitDepthSel->setObjectName(QStringLiteral("label_PatSeqPatBitDepthSel"));

        horizontalLayout_17->addWidget(label_PatSeqPatBitDepthSel);

        comboBox_PatSeqPatBitDepthSel = new QComboBox(groupBox_PatSeqBitPlaneSel);
        comboBox_PatSeqPatBitDepthSel->setObjectName(QStringLiteral("comboBox_PatSeqPatBitDepthSel"));

        horizontalLayout_17->addWidget(comboBox_PatSeqPatBitDepthSel);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_10);

        label_PatSeqBitPlaneNum = new QLabel(groupBox_PatSeqBitPlaneSel);
        label_PatSeqBitPlaneNum->setObjectName(QStringLiteral("label_PatSeqBitPlaneNum"));

        horizontalLayout_17->addWidget(label_PatSeqBitPlaneNum);

        comboBox_PatSeqBitPlaneNum = new QComboBox(groupBox_PatSeqBitPlaneSel);
        comboBox_PatSeqBitPlaneNum->setObjectName(QStringLiteral("comboBox_PatSeqBitPlaneNum"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboBox_PatSeqBitPlaneNum->sizePolicy().hasHeightForWidth());
        comboBox_PatSeqBitPlaneNum->setSizePolicy(sizePolicy4);

        horizontalLayout_17->addWidget(comboBox_PatSeqBitPlaneNum);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_26);


        verticalLayout_10->addLayout(horizontalLayout_17);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(2);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        listWidget_PatSeqBitPlanes = new QListWidget(groupBox_PatSeqBitPlaneSel);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        new QListWidgetItem(listWidget_PatSeqBitPlanes);
        listWidget_PatSeqBitPlanes->setObjectName(QStringLiteral("listWidget_PatSeqBitPlanes"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(listWidget_PatSeqBitPlanes->sizePolicy().hasHeightForWidth());
        listWidget_PatSeqBitPlanes->setSizePolicy(sizePolicy5);
        listWidget_PatSeqBitPlanes->setMinimumSize(QSize(465, 0));
        listWidget_PatSeqBitPlanes->setMaximumSize(QSize(1655555, 35));
        listWidget_PatSeqBitPlanes->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 170);\n"
"alternate-background-color: rgb(210, 210, 210);"));
        listWidget_PatSeqBitPlanes->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_PatSeqBitPlanes->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_PatSeqBitPlanes->setAlternatingRowColors(true);
        listWidget_PatSeqBitPlanes->setSelectionMode(QAbstractItemView::MultiSelection);
        listWidget_PatSeqBitPlanes->setFlow(QListView::LeftToRight);
        listWidget_PatSeqBitPlanes->setViewMode(QListView::ListMode);
        listWidget_PatSeqBitPlanes->setModelColumn(0);

        horizontalLayout_22->addWidget(listWidget_PatSeqBitPlanes);


        verticalLayout_10->addLayout(horizontalLayout_22);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QStringLiteral("horizontalLayout_39"));
        checkBox_PatSeqInvPatData = new QCheckBox(groupBox_PatSeqBitPlaneSel);
        checkBox_PatSeqInvPatData->setObjectName(QStringLiteral("checkBox_PatSeqInvPatData"));

        horizontalLayout_39->addWidget(checkBox_PatSeqInvPatData);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_2);

        checkBox_PatSeqInsBlackPat = new QCheckBox(groupBox_PatSeqBitPlaneSel);
        checkBox_PatSeqInsBlackPat->setObjectName(QStringLiteral("checkBox_PatSeqInsBlackPat"));
        checkBox_PatSeqInsBlackPat->setChecked(true);

        horizontalLayout_39->addWidget(checkBox_PatSeqInsBlackPat);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_28);

        pushButton_PatSeqAddPatToLut = new QPushButton(groupBox_PatSeqBitPlaneSel);
        pushButton_PatSeqAddPatToLut->setObjectName(QStringLiteral("pushButton_PatSeqAddPatToLut"));

        horizontalLayout_39->addWidget(pushButton_PatSeqAddPatToLut);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_27);


        verticalLayout_10->addLayout(horizontalLayout_39);


        verticalLayout_22->addWidget(groupBox_PatSeqBitPlaneSel);


        verticalLayout_7->addWidget(groupBox_PatSeqSel);

        groupBox_PatSeqDispLUT = new QGroupBox(tab_pat_seq_seq_settings);
        groupBox_PatSeqDispLUT->setObjectName(QStringLiteral("groupBox_PatSeqDispLUT"));
        sizePolicy.setHeightForWidth(groupBox_PatSeqDispLUT->sizePolicy().hasHeightForWidth());
        groupBox_PatSeqDispLUT->setSizePolicy(sizePolicy);
        groupBox_PatSeqDispLUT->setMinimumSize(QSize(0, 0));
        horizontalLayout_12 = new QHBoxLayout(groupBox_PatSeqDispLUT);
        horizontalLayout_12->setSpacing(2);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(5, 5, 5, 5);
        listWidget_PatSeqLUT = new QListWidget(groupBox_PatSeqDispLUT);
        listWidget_PatSeqLUT->setObjectName(QStringLiteral("listWidget_PatSeqLUT"));
        sizePolicy1.setHeightForWidth(listWidget_PatSeqLUT->sizePolicy().hasHeightForWidth());
        listWidget_PatSeqLUT->setSizePolicy(sizePolicy1);
        listWidget_PatSeqLUT->setMinimumSize(QSize(0, 0));
        listWidget_PatSeqLUT->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Courier"));
        font1.setBold(true);
        font1.setWeight(75);
        listWidget_PatSeqLUT->setFont(font1);
        listWidget_PatSeqLUT->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidget_PatSeqLUT->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_PatSeqLUT->setAlternatingRowColors(false);
        listWidget_PatSeqLUT->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget_PatSeqLUT->setTextElideMode(Qt::ElideMiddle);
        listWidget_PatSeqLUT->setFlow(QListView::LeftToRight);
        listWidget_PatSeqLUT->setSpacing(1);
        listWidget_PatSeqLUT->setViewMode(QListView::ListMode);
        listWidget_PatSeqLUT->setUniformItemSizes(false);
        listWidget_PatSeqLUT->setSelectionRectVisible(true);

        horizontalLayout_12->addWidget(listWidget_PatSeqLUT);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(2);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        pushButton_PatSeqSendLUT = new QPushButton(groupBox_PatSeqDispLUT);
        pushButton_PatSeqSendLUT->setObjectName(QStringLiteral("pushButton_PatSeqSendLUT"));

        verticalLayout_24->addWidget(pushButton_PatSeqSendLUT);

        pushButton_PatSeqReadLUTFrmHW = new QPushButton(groupBox_PatSeqDispLUT);
        pushButton_PatSeqReadLUTFrmHW->setObjectName(QStringLiteral("pushButton_PatSeqReadLUTFrmHW"));

        verticalLayout_24->addWidget(pushButton_PatSeqReadLUTFrmHW);

        pushButton_PatSeqClearLUTFrmGUI = new QPushButton(groupBox_PatSeqDispLUT);
        pushButton_PatSeqClearLUTFrmGUI->setObjectName(QStringLiteral("pushButton_PatSeqClearLUTFrmGUI"));

        verticalLayout_24->addWidget(pushButton_PatSeqClearLUTFrmGUI);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        radioButton_PatSeqDispRunOnce = new QRadioButton(groupBox_PatSeqDispLUT);
        radioButton_PatSeqDispRunOnce->setObjectName(QStringLiteral("radioButton_PatSeqDispRunOnce"));
        radioButton_PatSeqDispRunOnce->setMinimumSize(QSize(0, 17));
        radioButton_PatSeqDispRunOnce->setChecked(false);

        horizontalLayout_25->addWidget(radioButton_PatSeqDispRunOnce);

        radioButton_PatSeqDispRunContinuous = new QRadioButton(groupBox_PatSeqDispLUT);
        radioButton_PatSeqDispRunContinuous->setObjectName(QStringLiteral("radioButton_PatSeqDispRunContinuous"));
        radioButton_PatSeqDispRunContinuous->setMinimumSize(QSize(0, 17));
        radioButton_PatSeqDispRunContinuous->setChecked(true);

        horizontalLayout_25->addWidget(radioButton_PatSeqDispRunContinuous);


        verticalLayout_24->addLayout(horizontalLayout_25);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_24->addItem(verticalSpacer_4);


        horizontalLayout_12->addLayout(verticalLayout_24);

        horizontalLayout_12->setStretch(0, 5);
        horizontalLayout_12->setStretch(1, 2);

        verticalLayout_7->addWidget(groupBox_PatSeqDispLUT);


        horizontalLayout_36->addLayout(verticalLayout_7);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        groupBox_PatSeqSourceAndTrigSel = new QGroupBox(tab_pat_seq_seq_settings);
        groupBox_PatSeqSourceAndTrigSel->setObjectName(QStringLiteral("groupBox_PatSeqSourceAndTrigSel"));
        verticalLayout_19 = new QVBoxLayout(groupBox_PatSeqSourceAndTrigSel);
        verticalLayout_19->setSpacing(2);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        horizontalLayout_23->setSizeConstraint(QLayout::SetMinimumSize);
        groupBox_PatSeqPatSrc = new QGroupBox(groupBox_PatSeqSourceAndTrigSel);
        groupBox_PatSeqPatSrc->setObjectName(QStringLiteral("groupBox_PatSeqPatSrc"));
        sizePolicy.setHeightForWidth(groupBox_PatSeqPatSrc->sizePolicy().hasHeightForWidth());
        groupBox_PatSeqPatSrc->setSizePolicy(sizePolicy);
        gridLayout_16 = new QGridLayout(groupBox_PatSeqPatSrc);
        gridLayout_16->setSpacing(2);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(5, 5, 5, 5);
        radioButton_PatSeqSrcFrmFlash = new QRadioButton(groupBox_PatSeqPatSrc);
        radioButton_PatSeqSrcFrmFlash->setObjectName(QStringLiteral("radioButton_PatSeqSrcFrmFlash"));
        radioButton_PatSeqSrcFrmFlash->setChecked(true);

        gridLayout_16->addWidget(radioButton_PatSeqSrcFrmFlash, 0, 0, 1, 1);

        radioButton_PatSeqSrcFrmVideoPort = new QRadioButton(groupBox_PatSeqPatSrc);
        radioButton_PatSeqSrcFrmVideoPort->setObjectName(QStringLiteral("radioButton_PatSeqSrcFrmVideoPort"));

        gridLayout_16->addWidget(radioButton_PatSeqSrcFrmVideoPort, 1, 0, 1, 1);


        horizontalLayout_23->addWidget(groupBox_PatSeqPatSrc);

        groupBox_PatSeqTrigMode = new QGroupBox(groupBox_PatSeqSourceAndTrigSel);
        groupBox_PatSeqTrigMode->setObjectName(QStringLiteral("groupBox_PatSeqTrigMode"));
        sizePolicy.setHeightForWidth(groupBox_PatSeqTrigMode->sizePolicy().hasHeightForWidth());
        groupBox_PatSeqTrigMode->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox_PatSeqTrigMode);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        radioButton_PatSeqTrigTypeIntExt = new QRadioButton(groupBox_PatSeqTrigMode);
        radioButton_PatSeqTrigTypeIntExt->setObjectName(QStringLiteral("radioButton_PatSeqTrigTypeIntExt"));
        radioButton_PatSeqTrigTypeIntExt->setChecked(true);
        radioButton_PatSeqTrigTypeIntExt->setAutoExclusive(true);

        verticalLayout->addWidget(radioButton_PatSeqTrigTypeIntExt);

        radioButton_PatSeqTrigTypeVSync = new QRadioButton(groupBox_PatSeqTrigMode);
        radioButton_PatSeqTrigTypeVSync->setObjectName(QStringLiteral("radioButton_PatSeqTrigTypeVSync"));
        radioButton_PatSeqTrigTypeVSync->setAutoExclusive(true);

        verticalLayout->addWidget(radioButton_PatSeqTrigTypeVSync);


        horizontalLayout_23->addWidget(groupBox_PatSeqTrigMode);


        verticalLayout_19->addLayout(horizontalLayout_23);

        verticalLayout_44 = new QVBoxLayout();
        verticalLayout_44->setSpacing(6);
        verticalLayout_44->setObjectName(QStringLiteral("verticalLayout_44"));
        groupBox_PatSeqPatDispTiming = new QGroupBox(groupBox_PatSeqSourceAndTrigSel);
        groupBox_PatSeqPatDispTiming->setObjectName(QStringLiteral("groupBox_PatSeqPatDispTiming"));
        sizePolicy.setHeightForWidth(groupBox_PatSeqPatDispTiming->sizePolicy().hasHeightForWidth());
        groupBox_PatSeqPatDispTiming->setSizePolicy(sizePolicy);
        formLayout_4 = new QFormLayout(groupBox_PatSeqPatDispTiming);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_4->setHorizontalSpacing(2);
        formLayout_4->setVerticalSpacing(2);
        formLayout_4->setContentsMargins(5, 5, 5, 5);
        label_PatSeqPatPeriod = new QLabel(groupBox_PatSeqPatDispTiming);
        label_PatSeqPatPeriod->setObjectName(QStringLiteral("label_PatSeqPatPeriod"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_PatSeqPatPeriod);

        lineEdit_PatSeqPatPeriod = new QLineEdit(groupBox_PatSeqPatDispTiming);
        lineEdit_PatSeqPatPeriod->setObjectName(QStringLiteral("lineEdit_PatSeqPatPeriod"));
        sizePolicy2.setHeightForWidth(lineEdit_PatSeqPatPeriod->sizePolicy().hasHeightForWidth());
        lineEdit_PatSeqPatPeriod->setSizePolicy(sizePolicy2);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineEdit_PatSeqPatPeriod);

        label_PatSeqPatExpTime = new QLabel(groupBox_PatSeqPatDispTiming);
        label_PatSeqPatExpTime->setObjectName(QStringLiteral("label_PatSeqPatExpTime"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_PatSeqPatExpTime);

        lineEdit_PatSeqPatExpTime = new QLineEdit(groupBox_PatSeqPatDispTiming);
        lineEdit_PatSeqPatExpTime->setObjectName(QStringLiteral("lineEdit_PatSeqPatExpTime"));
        sizePolicy2.setHeightForWidth(lineEdit_PatSeqPatExpTime->sizePolicy().hasHeightForWidth());
        lineEdit_PatSeqPatExpTime->setSizePolicy(sizePolicy2);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEdit_PatSeqPatExpTime);


        verticalLayout_44->addWidget(groupBox_PatSeqPatDispTiming);


        verticalLayout_19->addLayout(verticalLayout_44);


        verticalLayout_12->addWidget(groupBox_PatSeqSourceAndTrigSel);

        label_PatSeqNote = new QLabel(tab_pat_seq_seq_settings);
        label_PatSeqNote->setObjectName(QStringLiteral("label_PatSeqNote"));
        label_PatSeqNote->setWordWrap(true);

        verticalLayout_12->addWidget(label_PatSeqNote);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_11);


        horizontalLayout_36->addLayout(verticalLayout_12);

        tabWidget_2->addTab(tab_pat_seq_seq_settings, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        gridLayout_27 = new QGridLayout(tab_8);
        gridLayout_27->setSpacing(6);
        gridLayout_27->setContentsMargins(11, 11, 11, 11);
        gridLayout_27->setObjectName(QStringLiteral("gridLayout_27"));
        verticalLayout_37 = new QVBoxLayout();
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        groupBox_VarExpPatSeqSel = new QGroupBox(tab_8);
        groupBox_VarExpPatSeqSel->setObjectName(QStringLiteral("groupBox_VarExpPatSeqSel"));
        sizePolicy.setHeightForWidth(groupBox_VarExpPatSeqSel->sizePolicy().hasHeightForWidth());
        groupBox_VarExpPatSeqSel->setSizePolicy(sizePolicy);
        verticalLayout_51 = new QVBoxLayout(groupBox_VarExpPatSeqSel);
        verticalLayout_51->setSpacing(2);
        verticalLayout_51->setContentsMargins(11, 11, 11, 11);
        verticalLayout_51->setObjectName(QStringLiteral("verticalLayout_51"));
        verticalLayout_51->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setSpacing(2);
        horizontalLayout_49->setObjectName(QStringLiteral("horizontalLayout_49"));
        comboBox_VarExpPatSeqSelPatColor = new QComboBox(groupBox_VarExpPatSeqSel);
        comboBox_VarExpPatSeqSelPatColor->setObjectName(QStringLiteral("comboBox_VarExpPatSeqSelPatColor"));

        horizontalLayout_49->addWidget(comboBox_VarExpPatSeqSelPatColor);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_49->addItem(horizontalSpacer_21);

        comboBox_VarExpPatSeqSelTrigType = new QComboBox(groupBox_VarExpPatSeqSel);
        comboBox_VarExpPatSeqSelTrigType->setObjectName(QStringLiteral("comboBox_VarExpPatSeqSelTrigType"));
        comboBox_VarExpPatSeqSelTrigType->setMaxVisibleItems(15);

        horizontalLayout_49->addWidget(comboBox_VarExpPatSeqSelTrigType);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_49->addItem(horizontalSpacer_22);

        label_VarExpPatSeqFrmOrImgIndex = new QLabel(groupBox_VarExpPatSeqSel);
        label_VarExpPatSeqFrmOrImgIndex->setObjectName(QStringLiteral("label_VarExpPatSeqFrmOrImgIndex"));

        horizontalLayout_49->addWidget(label_VarExpPatSeqFrmOrImgIndex);

        spinBox_VarExpPatSeqFrameImgIndex = new QSpinBox(groupBox_VarExpPatSeqSel);
        spinBox_VarExpPatSeqFrameImgIndex->setObjectName(QStringLiteral("spinBox_VarExpPatSeqFrameImgIndex"));
        spinBox_VarExpPatSeqFrameImgIndex->setMaximum(63);

        horizontalLayout_49->addWidget(spinBox_VarExpPatSeqFrameImgIndex);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_49->addItem(horizontalSpacer_20);

        label_VarExpPatSeqPatBitDepthSel = new QLabel(groupBox_VarExpPatSeqSel);
        label_VarExpPatSeqPatBitDepthSel->setObjectName(QStringLiteral("label_VarExpPatSeqPatBitDepthSel"));

        horizontalLayout_49->addWidget(label_VarExpPatSeqPatBitDepthSel);

        comboBox_VarExpPatSeqPatBitDepthSel = new QComboBox(groupBox_VarExpPatSeqSel);
        comboBox_VarExpPatSeqPatBitDepthSel->setObjectName(QStringLiteral("comboBox_VarExpPatSeqPatBitDepthSel"));

        horizontalLayout_49->addWidget(comboBox_VarExpPatSeqPatBitDepthSel);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_49->addItem(horizontalSpacer_29);


        verticalLayout_51->addLayout(horizontalLayout_49);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        listWidget_VarExpPatSeqBitPlanes = new QListWidget(groupBox_VarExpPatSeqSel);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        new QListWidgetItem(listWidget_VarExpPatSeqBitPlanes);
        listWidget_VarExpPatSeqBitPlanes->setObjectName(QStringLiteral("listWidget_VarExpPatSeqBitPlanes"));
        sizePolicy5.setHeightForWidth(listWidget_VarExpPatSeqBitPlanes->sizePolicy().hasHeightForWidth());
        listWidget_VarExpPatSeqBitPlanes->setSizePolicy(sizePolicy5);
        listWidget_VarExpPatSeqBitPlanes->setMinimumSize(QSize(465, 0));
        listWidget_VarExpPatSeqBitPlanes->setMaximumSize(QSize(1655555, 35));
        listWidget_VarExpPatSeqBitPlanes->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 170);\n"
"alternate-background-color: rgb(210, 210, 210);"));
        listWidget_VarExpPatSeqBitPlanes->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_VarExpPatSeqBitPlanes->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_VarExpPatSeqBitPlanes->setAlternatingRowColors(true);
        listWidget_VarExpPatSeqBitPlanes->setSelectionMode(QAbstractItemView::MultiSelection);
        listWidget_VarExpPatSeqBitPlanes->setFlow(QListView::LeftToRight);
        listWidget_VarExpPatSeqBitPlanes->setViewMode(QListView::ListMode);
        listWidget_VarExpPatSeqBitPlanes->setModelColumn(0);

        horizontalLayout_33->addWidget(listWidget_VarExpPatSeqBitPlanes);


        verticalLayout_51->addLayout(horizontalLayout_33);

        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setSpacing(2);
        horizontalLayout_48->setObjectName(QStringLiteral("horizontalLayout_48"));
        label_VarExpPatSeqPatExpTime = new QLabel(groupBox_VarExpPatSeqSel);
        label_VarExpPatSeqPatExpTime->setObjectName(QStringLiteral("label_VarExpPatSeqPatExpTime"));

        horizontalLayout_48->addWidget(label_VarExpPatSeqPatExpTime);

        lineEdit_VarExpPatSeqPatExpTime = new QLineEdit(groupBox_VarExpPatSeqSel);
        lineEdit_VarExpPatSeqPatExpTime->setObjectName(QStringLiteral("lineEdit_VarExpPatSeqPatExpTime"));
        sizePolicy2.setHeightForWidth(lineEdit_VarExpPatSeqPatExpTime->sizePolicy().hasHeightForWidth());
        lineEdit_VarExpPatSeqPatExpTime->setSizePolicy(sizePolicy2);
        lineEdit_VarExpPatSeqPatExpTime->setFrame(true);

        horizontalLayout_48->addWidget(lineEdit_VarExpPatSeqPatExpTime);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_48->addItem(horizontalSpacer_30);

        label_VarExpPatSeqPatPeriod = new QLabel(groupBox_VarExpPatSeqSel);
        label_VarExpPatSeqPatPeriod->setObjectName(QStringLiteral("label_VarExpPatSeqPatPeriod"));

        horizontalLayout_48->addWidget(label_VarExpPatSeqPatPeriod);

        lineEdit_VarExpPatSeqPatPeriod = new QLineEdit(groupBox_VarExpPatSeqSel);
        lineEdit_VarExpPatSeqPatPeriod->setObjectName(QStringLiteral("lineEdit_VarExpPatSeqPatPeriod"));
        sizePolicy2.setHeightForWidth(lineEdit_VarExpPatSeqPatPeriod->sizePolicy().hasHeightForWidth());
        lineEdit_VarExpPatSeqPatPeriod->setSizePolicy(sizePolicy2);

        horizontalLayout_48->addWidget(lineEdit_VarExpPatSeqPatPeriod);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_48->addItem(horizontalSpacer_31);


        verticalLayout_51->addLayout(horizontalLayout_48);

        horizontalLayout_50 = new QHBoxLayout();
        horizontalLayout_50->setSpacing(2);
        horizontalLayout_50->setObjectName(QStringLiteral("horizontalLayout_50"));
        checkBox_VarExpPatSeqInvPatData = new QCheckBox(groupBox_VarExpPatSeqSel);
        checkBox_VarExpPatSeqInvPatData->setObjectName(QStringLiteral("checkBox_VarExpPatSeqInvPatData"));

        horizontalLayout_50->addWidget(checkBox_VarExpPatSeqInvPatData);

        checkBox_VarExpPatSeqInsBlackPat = new QCheckBox(groupBox_VarExpPatSeqSel);
        checkBox_VarExpPatSeqInsBlackPat->setObjectName(QStringLiteral("checkBox_VarExpPatSeqInsBlackPat"));
        checkBox_VarExpPatSeqInsBlackPat->setChecked(true);

        horizontalLayout_50->addWidget(checkBox_VarExpPatSeqInsBlackPat);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_50->addItem(horizontalSpacer_5);

        pushButton_VarExpPatSeqAddPatToLut = new QPushButton(groupBox_VarExpPatSeqSel);
        pushButton_VarExpPatSeqAddPatToLut->setObjectName(QStringLiteral("pushButton_VarExpPatSeqAddPatToLut"));

        horizontalLayout_50->addWidget(pushButton_VarExpPatSeqAddPatToLut);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_50->addItem(horizontalSpacer_19);


        verticalLayout_51->addLayout(horizontalLayout_50);

        seqGroupBox_4 = new QGroupBox(groupBox_VarExpPatSeqSel);
        seqGroupBox_4->setObjectName(QStringLiteral("seqGroupBox_4"));
        sizePolicy.setHeightForWidth(seqGroupBox_4->sizePolicy().hasHeightForWidth());
        seqGroupBox_4->setSizePolicy(sizePolicy);
        seqGroupBox_4->setMinimumSize(QSize(0, 0));
        horizontalLayout_51 = new QHBoxLayout(seqGroupBox_4);
        horizontalLayout_51->setSpacing(2);
        horizontalLayout_51->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_51->setObjectName(QStringLiteral("horizontalLayout_51"));
        horizontalLayout_51->setContentsMargins(5, 5, 5, 5);
        listWidget_VarExpPatSeqLUT = new QListWidget(seqGroupBox_4);
        listWidget_VarExpPatSeqLUT->setObjectName(QStringLiteral("listWidget_VarExpPatSeqLUT"));
        sizePolicy1.setHeightForWidth(listWidget_VarExpPatSeqLUT->sizePolicy().hasHeightForWidth());
        listWidget_VarExpPatSeqLUT->setSizePolicy(sizePolicy1);
        listWidget_VarExpPatSeqLUT->setMinimumSize(QSize(0, 0));
        listWidget_VarExpPatSeqLUT->setMaximumSize(QSize(16777215, 16777215));
        listWidget_VarExpPatSeqLUT->setFont(font1);
        listWidget_VarExpPatSeqLUT->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidget_VarExpPatSeqLUT->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_VarExpPatSeqLUT->setAlternatingRowColors(false);
        listWidget_VarExpPatSeqLUT->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget_VarExpPatSeqLUT->setTextElideMode(Qt::ElideMiddle);
        listWidget_VarExpPatSeqLUT->setFlow(QListView::LeftToRight);
        listWidget_VarExpPatSeqLUT->setSpacing(1);
        listWidget_VarExpPatSeqLUT->setViewMode(QListView::ListMode);
        listWidget_VarExpPatSeqLUT->setUniformItemSizes(false);
        listWidget_VarExpPatSeqLUT->setSelectionRectVisible(true);

        horizontalLayout_51->addWidget(listWidget_VarExpPatSeqLUT);

        verticalLayout_53 = new QVBoxLayout();
        verticalLayout_53->setSpacing(2);
        verticalLayout_53->setObjectName(QStringLiteral("verticalLayout_53"));
        pushButton_VarExpPatSeqSendLUT = new QPushButton(seqGroupBox_4);
        pushButton_VarExpPatSeqSendLUT->setObjectName(QStringLiteral("pushButton_VarExpPatSeqSendLUT"));

        verticalLayout_53->addWidget(pushButton_VarExpPatSeqSendLUT);

        pushButton_VarExpPatSeqReadLUTFrmHW = new QPushButton(seqGroupBox_4);
        pushButton_VarExpPatSeqReadLUTFrmHW->setObjectName(QStringLiteral("pushButton_VarExpPatSeqReadLUTFrmHW"));

        verticalLayout_53->addWidget(pushButton_VarExpPatSeqReadLUTFrmHW);

        pushButton_VarExpPatSeqClearLUTFrmGUI = new QPushButton(seqGroupBox_4);
        pushButton_VarExpPatSeqClearLUTFrmGUI->setObjectName(QStringLiteral("pushButton_VarExpPatSeqClearLUTFrmGUI"));

        verticalLayout_53->addWidget(pushButton_VarExpPatSeqClearLUTFrmGUI);

        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setSpacing(6);
        horizontalLayout_52->setObjectName(QStringLiteral("horizontalLayout_52"));
        radioButton_VarExpPatSeqDispRunOnce = new QRadioButton(seqGroupBox_4);
        radioButton_VarExpPatSeqDispRunOnce->setObjectName(QStringLiteral("radioButton_VarExpPatSeqDispRunOnce"));
        radioButton_VarExpPatSeqDispRunOnce->setMinimumSize(QSize(0, 17));
        radioButton_VarExpPatSeqDispRunOnce->setChecked(false);

        horizontalLayout_52->addWidget(radioButton_VarExpPatSeqDispRunOnce);

        radioButton_VarExpPatSeqDispRunContinuous = new QRadioButton(seqGroupBox_4);
        radioButton_VarExpPatSeqDispRunContinuous->setObjectName(QStringLiteral("radioButton_VarExpPatSeqDispRunContinuous"));
        radioButton_VarExpPatSeqDispRunContinuous->setMinimumSize(QSize(0, 17));
        radioButton_VarExpPatSeqDispRunContinuous->setChecked(true);

        horizontalLayout_52->addWidget(radioButton_VarExpPatSeqDispRunContinuous);


        verticalLayout_53->addLayout(horizontalLayout_52);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_53->addItem(verticalSpacer_16);


        horizontalLayout_51->addLayout(verticalLayout_53);

        horizontalLayout_51->setStretch(0, 5);
        horizontalLayout_51->setStretch(1, 2);

        verticalLayout_51->addWidget(seqGroupBox_4);


        verticalLayout_37->addWidget(groupBox_VarExpPatSeqSel);


        gridLayout_27->addLayout(verticalLayout_37, 0, 0, 1, 1);

        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setSpacing(6);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        groupBox_VarExpPatSeqSourceAndTrigSel = new QGroupBox(tab_8);
        groupBox_VarExpPatSeqSourceAndTrigSel->setObjectName(QStringLiteral("groupBox_VarExpPatSeqSourceAndTrigSel"));
        verticalLayout_48 = new QVBoxLayout(groupBox_VarExpPatSeqSourceAndTrigSel);
        verticalLayout_48->setSpacing(2);
        verticalLayout_48->setContentsMargins(11, 11, 11, 11);
        verticalLayout_48->setObjectName(QStringLiteral("verticalLayout_48"));
        verticalLayout_48->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setSpacing(6);
        horizontalLayout_46->setObjectName(QStringLiteral("horizontalLayout_46"));
        horizontalLayout_46->setSizeConstraint(QLayout::SetMinimumSize);
        groupBox_VarExpPatSeqPatSrc = new QGroupBox(groupBox_VarExpPatSeqSourceAndTrigSel);
        groupBox_VarExpPatSeqPatSrc->setObjectName(QStringLiteral("groupBox_VarExpPatSeqPatSrc"));
        sizePolicy.setHeightForWidth(groupBox_VarExpPatSeqPatSrc->sizePolicy().hasHeightForWidth());
        groupBox_VarExpPatSeqPatSrc->setSizePolicy(sizePolicy);
        gridLayout_18 = new QGridLayout(groupBox_VarExpPatSeqPatSrc);
        gridLayout_18->setSpacing(2);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setContentsMargins(5, 5, 5, 5);
        radioButton_VarExpPatSeqSrcFrmFlash = new QRadioButton(groupBox_VarExpPatSeqPatSrc);
        radioButton_VarExpPatSeqSrcFrmFlash->setObjectName(QStringLiteral("radioButton_VarExpPatSeqSrcFrmFlash"));
        radioButton_VarExpPatSeqSrcFrmFlash->setChecked(true);

        gridLayout_18->addWidget(radioButton_VarExpPatSeqSrcFrmFlash, 0, 0, 1, 1);

        radioButton_VarExpPatSeqSrcFrmVideoPort = new QRadioButton(groupBox_VarExpPatSeqPatSrc);
        radioButton_VarExpPatSeqSrcFrmVideoPort->setObjectName(QStringLiteral("radioButton_VarExpPatSeqSrcFrmVideoPort"));

        gridLayout_18->addWidget(radioButton_VarExpPatSeqSrcFrmVideoPort, 1, 0, 1, 1);


        horizontalLayout_46->addWidget(groupBox_VarExpPatSeqPatSrc);

        groupBox_VarExpPatSeqTrigMode = new QGroupBox(groupBox_VarExpPatSeqSourceAndTrigSel);
        groupBox_VarExpPatSeqTrigMode->setObjectName(QStringLiteral("groupBox_VarExpPatSeqTrigMode"));
        sizePolicy.setHeightForWidth(groupBox_VarExpPatSeqTrigMode->sizePolicy().hasHeightForWidth());
        groupBox_VarExpPatSeqTrigMode->setSizePolicy(sizePolicy);
        verticalLayout_49 = new QVBoxLayout(groupBox_VarExpPatSeqTrigMode);
        verticalLayout_49->setSpacing(2);
        verticalLayout_49->setContentsMargins(11, 11, 11, 11);
        verticalLayout_49->setObjectName(QStringLiteral("verticalLayout_49"));
        verticalLayout_49->setContentsMargins(5, 5, 5, 5);
        radioButton_VarExpPatSeqTrigTypeIntExt = new QRadioButton(groupBox_VarExpPatSeqTrigMode);
        radioButton_VarExpPatSeqTrigTypeIntExt->setObjectName(QStringLiteral("radioButton_VarExpPatSeqTrigTypeIntExt"));
        radioButton_VarExpPatSeqTrigTypeIntExt->setChecked(true);
        radioButton_VarExpPatSeqTrigTypeIntExt->setAutoExclusive(true);

        verticalLayout_49->addWidget(radioButton_VarExpPatSeqTrigTypeIntExt);

        radioButton_VarExpPatSeqTrigTypeVSync = new QRadioButton(groupBox_VarExpPatSeqTrigMode);
        radioButton_VarExpPatSeqTrigTypeVSync->setObjectName(QStringLiteral("radioButton_VarExpPatSeqTrigTypeVSync"));
        radioButton_VarExpPatSeqTrigTypeVSync->setAutoExclusive(true);

        verticalLayout_49->addWidget(radioButton_VarExpPatSeqTrigTypeVSync);


        horizontalLayout_46->addWidget(groupBox_VarExpPatSeqTrigMode);


        verticalLayout_48->addLayout(horizontalLayout_46);

        label_VarExpPatSeqNote = new QLabel(groupBox_VarExpPatSeqSourceAndTrigSel);
        label_VarExpPatSeqNote->setObjectName(QStringLiteral("label_VarExpPatSeqNote"));
        label_VarExpPatSeqNote->setWordWrap(true);

        verticalLayout_48->addWidget(label_VarExpPatSeqNote);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_48->addItem(verticalSpacer_6);


        verticalLayout_33->addWidget(groupBox_VarExpPatSeqSourceAndTrigSel);


        gridLayout_27->addLayout(verticalLayout_33, 0, 1, 1, 1);

        tabWidget_2->addTab(tab_8, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        formLayout_14 = new QFormLayout(tab);
        formLayout_14->setSpacing(6);
        formLayout_14->setContentsMargins(11, 11, 11, 11);
        formLayout_14->setObjectName(QStringLiteral("formLayout_14"));
        groupBox_PatSeqCtrl = new QGroupBox(tab);
        groupBox_PatSeqCtrl->setObjectName(QStringLiteral("groupBox_PatSeqCtrl"));
        sizePolicy.setHeightForWidth(groupBox_PatSeqCtrl->sizePolicy().hasHeightForWidth());
        groupBox_PatSeqCtrl->setSizePolicy(sizePolicy);
        gridLayout_26 = new QGridLayout(groupBox_PatSeqCtrl);
        gridLayout_26->setSpacing(6);
        gridLayout_26->setContentsMargins(11, 11, 11, 11);
        gridLayout_26->setObjectName(QStringLiteral("gridLayout_26"));
        gridLayout_26->setContentsMargins(5, 5, 5, 5);
        formLayout_5 = new QFormLayout();
        formLayout_5->setSpacing(6);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_5->setHorizontalSpacing(2);
        formLayout_5->setVerticalSpacing(2);
        pushButton_PatSeqValIndExpOOR = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqValIndExpOOR->setObjectName(QStringLiteral("pushButton_PatSeqValIndExpOOR"));
        pushButton_PatSeqValIndExpOOR->setEnabled(false);
        pushButton_PatSeqValIndExpOOR->setAcceptDrops(false);
        pushButton_PatSeqValIndExpOOR->setIcon(icon3);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, pushButton_PatSeqValIndExpOOR);

        label_PatSeqValIndExpOOR = new QLabel(groupBox_PatSeqCtrl);
        label_PatSeqValIndExpOOR->setObjectName(QStringLiteral("label_PatSeqValIndExpOOR"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, label_PatSeqValIndExpOOR);

        pushButton_PatSeqValIndPatNumOOR = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqValIndPatNumOOR->setObjectName(QStringLiteral("pushButton_PatSeqValIndPatNumOOR"));
        pushButton_PatSeqValIndPatNumOOR->setEnabled(false);
        pushButton_PatSeqValIndPatNumOOR->setAcceptDrops(false);
        pushButton_PatSeqValIndPatNumOOR->setIcon(icon3);

        formLayout_5->setWidget(1, QFormLayout::LabelRole, pushButton_PatSeqValIndPatNumOOR);

        label_PatSeqValIndPatNumOOR = new QLabel(groupBox_PatSeqCtrl);
        label_PatSeqValIndPatNumOOR->setObjectName(QStringLiteral("label_PatSeqValIndPatNumOOR"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, label_PatSeqValIndPatNumOOR);

        pushButton_PatSeqValIndTrigOutOverlap = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqValIndTrigOutOverlap->setObjectName(QStringLiteral("pushButton_PatSeqValIndTrigOutOverlap"));
        pushButton_PatSeqValIndTrigOutOverlap->setEnabled(false);
        pushButton_PatSeqValIndTrigOutOverlap->setAcceptDrops(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../../temp_files/LightCrafter4500_GUI_2.0_Source/GUI/Icons/Led_Y.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_PatSeqValIndTrigOutOverlap->setIcon(icon5);

        formLayout_5->setWidget(2, QFormLayout::LabelRole, pushButton_PatSeqValIndTrigOutOverlap);

        label_PatSeqValIndTrigOutOverlap = new QLabel(groupBox_PatSeqCtrl);
        label_PatSeqValIndTrigOutOverlap->setObjectName(QStringLiteral("label_PatSeqValIndTrigOutOverlap"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, label_PatSeqValIndTrigOutOverlap);

        pushButton_PatSeqValIndBlkVecMiss = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqValIndBlkVecMiss->setObjectName(QStringLiteral("pushButton_PatSeqValIndBlkVecMiss"));
        pushButton_PatSeqValIndBlkVecMiss->setEnabled(false);
        pushButton_PatSeqValIndBlkVecMiss->setAcceptDrops(false);
        pushButton_PatSeqValIndBlkVecMiss->setIcon(icon4);

        formLayout_5->setWidget(3, QFormLayout::LabelRole, pushButton_PatSeqValIndBlkVecMiss);

        label_PatSeqValIndBlkVecMiss = new QLabel(groupBox_PatSeqCtrl);
        label_PatSeqValIndBlkVecMiss->setObjectName(QStringLiteral("label_PatSeqValIndBlkVecMiss"));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, label_PatSeqValIndBlkVecMiss);

        pushButton_PatSeqValPatPeriodShort = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqValPatPeriodShort->setObjectName(QStringLiteral("pushButton_PatSeqValPatPeriodShort"));
        pushButton_PatSeqValPatPeriodShort->setEnabled(false);
        pushButton_PatSeqValPatPeriodShort->setAcceptDrops(false);
        pushButton_PatSeqValPatPeriodShort->setIcon(icon4);

        formLayout_5->setWidget(4, QFormLayout::LabelRole, pushButton_PatSeqValPatPeriodShort);

        label_PatSeqValPatPeriodShort = new QLabel(groupBox_PatSeqCtrl);
        label_PatSeqValPatPeriodShort->setObjectName(QStringLiteral("label_PatSeqValPatPeriodShort"));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, label_PatSeqValPatPeriodShort);

        label_PatSeqValStatus = new QLabel(groupBox_PatSeqCtrl);
        label_PatSeqValStatus->setObjectName(QStringLiteral("label_PatSeqValStatus"));

        formLayout_5->setWidget(5, QFormLayout::FieldRole, label_PatSeqValStatus);

        pushButton_PatSeqValStatus = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqValStatus->setObjectName(QStringLiteral("pushButton_PatSeqValStatus"));
        pushButton_PatSeqValStatus->setEnabled(false);
        pushButton_PatSeqValStatus->setAcceptDrops(false);
        pushButton_PatSeqValStatus->setIcon(icon1);

        formLayout_5->setWidget(5, QFormLayout::LabelRole, pushButton_PatSeqValStatus);


        gridLayout_26->addLayout(formLayout_5, 0, 0, 1, 1);

        pushButton_ValidatePatSeq = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_ValidatePatSeq->setObjectName(QStringLiteral("pushButton_ValidatePatSeq"));

        gridLayout_26->addWidget(pushButton_ValidatePatSeq, 1, 0, 1, 1);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QStringLiteral("horizontalLayout_38"));
        pushButton_PatSeqCtrlStart = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqCtrlStart->setObjectName(QStringLiteral("pushButton_PatSeqCtrlStart"));

        horizontalLayout_38->addWidget(pushButton_PatSeqCtrlStart);

        pushButton_PatSeqCtrlPause = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqCtrlPause->setObjectName(QStringLiteral("pushButton_PatSeqCtrlPause"));

        horizontalLayout_38->addWidget(pushButton_PatSeqCtrlPause);

        pushButton_PatSeqCtrlStop = new QPushButton(groupBox_PatSeqCtrl);
        pushButton_PatSeqCtrlStop->setObjectName(QStringLiteral("pushButton_PatSeqCtrlStop"));

        horizontalLayout_38->addWidget(pushButton_PatSeqCtrlStop);


        gridLayout_26->addLayout(horizontalLayout_38, 2, 0, 1, 1);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));
        checkBox_PatSeqCtrlGlobalDataInvert = new QCheckBox(groupBox_PatSeqCtrl);
        checkBox_PatSeqCtrlGlobalDataInvert->setObjectName(QStringLiteral("checkBox_PatSeqCtrlGlobalDataInvert"));

        horizontalLayout_35->addWidget(checkBox_PatSeqCtrlGlobalDataInvert);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_32);


        gridLayout_26->addLayout(horizontalLayout_35, 3, 0, 1, 1);


        formLayout_14->setWidget(0, QFormLayout::LabelRole, groupBox_PatSeqCtrl);

        tabWidget_2->addTab(tab, QString());
        tab_img_load_timing = new QWidget();
        tab_img_load_timing->setObjectName(QStringLiteral("tab_img_load_timing"));
        gridLayout_13 = new QGridLayout(tab_img_load_timing);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_ImgLoadTiming = new QGroupBox(tab_img_load_timing);
        groupBox_ImgLoadTiming->setObjectName(QStringLiteral("groupBox_ImgLoadTiming"));
        gridLayout_28 = new QGridLayout(groupBox_ImgLoadTiming);
        gridLayout_28->setSpacing(6);
        gridLayout_28->setContentsMargins(11, 11, 11, 11);
        gridLayout_28->setObjectName(QStringLiteral("gridLayout_28"));
        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QStringLiteral("horizontalLayout_40"));
        label_ImgLdTmImgIndex = new QLabel(groupBox_ImgLoadTiming);
        label_ImgLdTmImgIndex->setObjectName(QStringLiteral("label_ImgLdTmImgIndex"));

        horizontalLayout_40->addWidget(label_ImgLdTmImgIndex);

        spinBox_ImgLdTmImgIndex = new QSpinBox(groupBox_ImgLoadTiming);
        spinBox_ImgLdTmImgIndex->setObjectName(QStringLiteral("spinBox_ImgLdTmImgIndex"));
        spinBox_ImgLdTmImgIndex->setMaximum(63);

        horizontalLayout_40->addWidget(spinBox_ImgLdTmImgIndex);

        pushButton_GetImgLoadTimingInfo = new QPushButton(groupBox_ImgLoadTiming);
        pushButton_GetImgLoadTimingInfo->setObjectName(QStringLiteral("pushButton_GetImgLoadTimingInfo"));

        horizontalLayout_40->addWidget(pushButton_GetImgLoadTimingInfo);


        gridLayout_28->addLayout(horizontalLayout_40, 0, 0, 1, 1);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        lineEdit_ImgLoadTmInMs = new QLineEdit(groupBox_ImgLoadTiming);
        lineEdit_ImgLoadTmInMs->setObjectName(QStringLiteral("lineEdit_ImgLoadTmInMs"));

        horizontalLayout_31->addWidget(lineEdit_ImgLoadTmInMs);

        label_ImgLdTmInMs = new QLabel(groupBox_ImgLoadTiming);
        label_ImgLdTmInMs->setObjectName(QStringLiteral("label_ImgLdTmInMs"));

        horizontalLayout_31->addWidget(label_ImgLdTmInMs);


        gridLayout_28->addLayout(horizontalLayout_31, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_28->addItem(horizontalSpacer_7, 0, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_ImgLoadTiming);


        gridLayout_13->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_18, 2, 0, 1, 1);

        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        label_ImgLdTmNote1 = new QLabel(tab_img_load_timing);
        label_ImgLdTmNote1->setObjectName(QStringLiteral("label_ImgLdTmNote1"));

        verticalLayout_34->addWidget(label_ImgLdTmNote1);

        label_ImgLdTmNote2 = new QLabel(tab_img_load_timing);
        label_ImgLdTmNote2->setObjectName(QStringLiteral("label_ImgLdTmNote2"));

        verticalLayout_34->addWidget(label_ImgLdTmNote2);


        gridLayout_13->addLayout(verticalLayout_34, 1, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_8, 1, 1, 1, 1);

        tabWidget_2->addTab(tab_img_load_timing, QString());
        tab_pat_seq_trig_ctrl = new QWidget();
        tab_pat_seq_trig_ctrl->setObjectName(QStringLiteral("tab_pat_seq_trig_ctrl"));
        formLayout_15 = new QFormLayout(tab_pat_seq_trig_ctrl);
        formLayout_15->setSpacing(6);
        formLayout_15->setContentsMargins(11, 11, 11, 11);
        formLayout_15->setObjectName(QStringLiteral("formLayout_15"));
        formLayout_15->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        gridLayout_21 = new QGridLayout();
        gridLayout_21->setSpacing(2);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        horizontalSlider_Trig1OutFDly = new QSlider(tab_pat_seq_trig_ctrl);
        horizontalSlider_Trig1OutFDly->setObjectName(QStringLiteral("horizontalSlider_Trig1OutFDly"));
        horizontalSlider_Trig1OutFDly->setMaximum(255);
        horizontalSlider_Trig1OutFDly->setValue(187);
        horizontalSlider_Trig1OutFDly->setOrientation(Qt::Horizontal);

        gridLayout_21->addWidget(horizontalSlider_Trig1OutFDly, 4, 2, 1, 1);

        label_TrigOut1FDly = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigOut1FDly->setObjectName(QStringLiteral("label_TrigOut1FDly"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush2(QColor(236, 233, 216, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_TrigOut1FDly->setPalette(palette);

        gridLayout_21->addWidget(label_TrigOut1FDly, 4, 0, 1, 1);

        label_Trig1OutFDlyVal = new QLabel(tab_pat_seq_trig_ctrl);
        label_Trig1OutFDlyVal->setObjectName(QStringLiteral("label_Trig1OutFDlyVal"));
        label_Trig1OutFDlyVal->setMinimumSize(QSize(60, 0));
        label_Trig1OutFDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(label_Trig1OutFDlyVal, 4, 3, 1, 1, Qt::AlignRight);

        label_Trig2OutRDlyVal = new QLabel(tab_pat_seq_trig_ctrl);
        label_Trig2OutRDlyVal->setObjectName(QStringLiteral("label_Trig2OutRDlyVal"));
        label_Trig2OutRDlyVal->setMinimumSize(QSize(60, 0));
        label_Trig2OutRDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(label_Trig2OutRDlyVal, 6, 3, 1, 1, Qt::AlignRight);

        checkBox_InvertTrig2Out = new QCheckBox(tab_pat_seq_trig_ctrl);
        checkBox_InvertTrig2Out->setObjectName(QStringLiteral("checkBox_InvertTrig2Out"));

        gridLayout_21->addWidget(checkBox_InvertTrig2Out, 6, 4, 1, 1);

        label_TrigOut2PulsePerNumPat = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigOut2PulsePerNumPat->setObjectName(QStringLiteral("label_TrigOut2PulsePerNumPat"));

        gridLayout_21->addWidget(label_TrigOut2PulsePerNumPat, 7, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_GetTrigConfig = new QPushButton(tab_pat_seq_trig_ctrl);
        pushButton_GetTrigConfig->setObjectName(QStringLiteral("pushButton_GetTrigConfig"));

        horizontalLayout_5->addWidget(pushButton_GetTrigConfig);

        pushButton_SetTrigConfig = new QPushButton(tab_pat_seq_trig_ctrl);
        pushButton_SetTrigConfig->setObjectName(QStringLiteral("pushButton_SetTrigConfig"));

        horizontalLayout_5->addWidget(pushButton_SetTrigConfig);


        gridLayout_21->addLayout(horizontalLayout_5, 8, 2, 1, 1);

        spinBox_TrigOut2PulsePerNumPat = new QSpinBox(tab_pat_seq_trig_ctrl);
        spinBox_TrigOut2PulsePerNumPat->setObjectName(QStringLiteral("spinBox_TrigOut2PulsePerNumPat"));
        spinBox_TrigOut2PulsePerNumPat->setMinimum(1);
        spinBox_TrigOut2PulsePerNumPat->setMaximum(128);

        gridLayout_21->addWidget(spinBox_TrigOut2PulsePerNumPat, 7, 1, 1, 1);

        label_TrigOut2RDly = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigOut2RDly->setObjectName(QStringLiteral("label_TrigOut2RDly"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_TrigOut2RDly->setPalette(palette1);

        gridLayout_21->addWidget(label_TrigOut2RDly, 6, 0, 1, 1);

        spinBox_Trig1OutFDly = new QSpinBox(tab_pat_seq_trig_ctrl);
        spinBox_Trig1OutFDly->setObjectName(QStringLiteral("spinBox_Trig1OutFDly"));
        spinBox_Trig1OutFDly->setMaximum(213);
        spinBox_Trig1OutFDly->setValue(187);

        gridLayout_21->addWidget(spinBox_Trig1OutFDly, 4, 1, 1, 1);

        verticalSpacer_26 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_21->addItem(verticalSpacer_26, 5, 0, 1, 1);

        spinBox_Trig2OutRDly = new QSpinBox(tab_pat_seq_trig_ctrl);
        spinBox_Trig2OutRDly->setObjectName(QStringLiteral("spinBox_Trig2OutRDly"));
        spinBox_Trig2OutRDly->setMaximum(255);
        spinBox_Trig2OutRDly->setValue(187);

        gridLayout_21->addWidget(spinBox_Trig2OutRDly, 6, 1, 1, 1);

        horizontalSlider_Trig2OutRDly = new QSlider(tab_pat_seq_trig_ctrl);
        horizontalSlider_Trig2OutRDly->setObjectName(QStringLiteral("horizontalSlider_Trig2OutRDly"));
        horizontalSlider_Trig2OutRDly->setMaximum(255);
        horizontalSlider_Trig2OutRDly->setValue(187);
        horizontalSlider_Trig2OutRDly->setOrientation(Qt::Horizontal);

        gridLayout_21->addWidget(horizontalSlider_Trig2OutRDly, 6, 2, 1, 1);

        spinBox_Trig1OutRDly = new QSpinBox(tab_pat_seq_trig_ctrl);
        spinBox_Trig1OutRDly->setObjectName(QStringLiteral("spinBox_Trig1OutRDly"));
        spinBox_Trig1OutRDly->setMaximum(213);
        spinBox_Trig1OutRDly->setValue(187);

        gridLayout_21->addWidget(spinBox_Trig1OutRDly, 3, 1, 1, 1);

        label_TrigIn1 = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigIn1->setObjectName(QStringLiteral("label_TrigIn1"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_TrigIn1->setPalette(palette2);

        gridLayout_21->addWidget(label_TrigIn1, 0, 0, 1, 1);

        label_TrigOut1RDly = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigOut1RDly->setObjectName(QStringLiteral("label_TrigOut1RDly"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_TrigOut1RDly->setPalette(palette3);

        gridLayout_21->addWidget(label_TrigOut1RDly, 3, 0, 1, 1);

        label_TrigIn2Pol = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigIn2Pol->setObjectName(QStringLiteral("label_TrigIn2Pol"));

        gridLayout_21->addWidget(label_TrigIn2Pol, 1, 0, 1, 1);

        label_TrigIn1Value = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigIn1Value->setObjectName(QStringLiteral("label_TrigIn1Value"));
        label_TrigIn1Value->setMinimumSize(QSize(60, 0));
        label_TrigIn1Value->setLayoutDirection(Qt::LeftToRight);
        label_TrigIn1Value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(label_TrigIn1Value, 0, 3, 1, 1, Qt::AlignRight);

        checkBox_InvertTrig1Out = new QCheckBox(tab_pat_seq_trig_ctrl);
        checkBox_InvertTrig1Out->setObjectName(QStringLiteral("checkBox_InvertTrig1Out"));

        gridLayout_21->addWidget(checkBox_InvertTrig1Out, 3, 4, 1, 1);

        label_Trig1OutRDlyVal = new QLabel(tab_pat_seq_trig_ctrl);
        label_Trig1OutRDlyVal->setObjectName(QStringLiteral("label_Trig1OutRDlyVal"));
        label_Trig1OutRDlyVal->setMinimumSize(QSize(60, 0));
        label_Trig1OutRDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(label_Trig1OutRDlyVal, 3, 3, 1, 1, Qt::AlignRight);

        comboBox_TrigIn2Pol = new QComboBox(tab_pat_seq_trig_ctrl);
        comboBox_TrigIn2Pol->setObjectName(QStringLiteral("comboBox_TrigIn2Pol"));

        gridLayout_21->addWidget(comboBox_TrigIn2Pol, 1, 1, 1, 1);

        horizontalSlider_TrigIn1 = new QSlider(tab_pat_seq_trig_ctrl);
        horizontalSlider_TrigIn1->setObjectName(QStringLiteral("horizontalSlider_TrigIn1"));
        horizontalSlider_TrigIn1->setMinimumSize(QSize(250, 0));
        horizontalSlider_TrigIn1->setMaximum(262143);
        horizontalSlider_TrigIn1->setValue(0);
        horizontalSlider_TrigIn1->setOrientation(Qt::Horizontal);

        gridLayout_21->addWidget(horizontalSlider_TrigIn1, 0, 2, 1, 1);

        spinBox_TrigIn1 = new QSpinBox(tab_pat_seq_trig_ctrl);
        spinBox_TrigIn1->setObjectName(QStringLiteral("spinBox_TrigIn1"));
        spinBox_TrigIn1->setMaximum(262143);
        spinBox_TrigIn1->setValue(0);

        gridLayout_21->addWidget(spinBox_TrigIn1, 0, 1, 1, 1);

        label_TrigIn2PolDesc = new QLabel(tab_pat_seq_trig_ctrl);
        label_TrigIn2PolDesc->setObjectName(QStringLiteral("label_TrigIn2PolDesc"));

        gridLayout_21->addWidget(label_TrigIn2PolDesc, 1, 2, 1, 2);

        verticalSpacer_25 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_21->addItem(verticalSpacer_25, 2, 0, 1, 1);

        horizontalSlider_Trig1OutRDly = new QSlider(tab_pat_seq_trig_ctrl);
        horizontalSlider_Trig1OutRDly->setObjectName(QStringLiteral("horizontalSlider_Trig1OutRDly"));
        horizontalSlider_Trig1OutRDly->setMaximum(255);
        horizontalSlider_Trig1OutRDly->setValue(187);
        horizontalSlider_Trig1OutRDly->setOrientation(Qt::Horizontal);

        gridLayout_21->addWidget(horizontalSlider_Trig1OutRDly, 3, 2, 1, 1);


        formLayout_15->setLayout(0, QFormLayout::LabelRole, gridLayout_21);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_15->setItem(0, QFormLayout::FieldRole, horizontalSpacer_15);

        textEdit_TriggerCtrlNote = new QTextEdit(tab_pat_seq_trig_ctrl);
        textEdit_TriggerCtrlNote->setObjectName(QStringLiteral("textEdit_TriggerCtrlNote"));
        textEdit_TriggerCtrlNote->setReadOnly(true);
        textEdit_TriggerCtrlNote->setTextInteractionFlags(Qt::NoTextInteraction);

        formLayout_15->setWidget(1, QFormLayout::LabelRole, textEdit_TriggerCtrlNote);

        tabWidget_2->addTab(tab_pat_seq_trig_ctrl, QString());
        tab_pat_seq_led_dly = new QWidget();
        tab_pat_seq_led_dly->setObjectName(QStringLiteral("tab_pat_seq_led_dly"));
        formLayout_16 = new QFormLayout(tab_pat_seq_led_dly);
        formLayout_16->setSpacing(6);
        formLayout_16->setContentsMargins(11, 11, 11, 11);
        formLayout_16->setObjectName(QStringLiteral("formLayout_16"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_27 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(verticalSpacer_27, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton_GetLEDDlyCtrlConfig = new QPushButton(tab_pat_seq_led_dly);
        pushButton_GetLEDDlyCtrlConfig->setObjectName(QStringLiteral("pushButton_GetLEDDlyCtrlConfig"));

        horizontalLayout_7->addWidget(pushButton_GetLEDDlyCtrlConfig);

        pushButton_SetLedDlyCtrlConfig = new QPushButton(tab_pat_seq_led_dly);
        pushButton_SetLedDlyCtrlConfig->setObjectName(QStringLiteral("pushButton_SetLedDlyCtrlConfig"));

        horizontalLayout_7->addWidget(pushButton_SetLedDlyCtrlConfig);


        gridLayout_3->addLayout(horizontalLayout_7, 8, 2, 1, 1);

        label_LedDlyCtrlRedREdgeDlyVal = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlRedREdgeDlyVal->setObjectName(QStringLiteral("label_LedDlyCtrlRedREdgeDlyVal"));
        label_LedDlyCtrlRedREdgeDlyVal->setMinimumSize(QSize(60, 0));
        label_LedDlyCtrlRedREdgeDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_LedDlyCtrlRedREdgeDlyVal, 0, 3, 1, 1, Qt::AlignRight);

        spinBox_LedDlyCtrlGreenREdgeDly = new QSpinBox(tab_pat_seq_led_dly);
        spinBox_LedDlyCtrlGreenREdgeDly->setObjectName(QStringLiteral("spinBox_LedDlyCtrlGreenREdgeDly"));
        spinBox_LedDlyCtrlGreenREdgeDly->setMaximum(255);
        spinBox_LedDlyCtrlGreenREdgeDly->setValue(187);

        gridLayout_3->addWidget(spinBox_LedDlyCtrlGreenREdgeDly, 3, 1, 1, 1);

        horizontalSlider_LedDlyCtrlBlueREdgeDly = new QSlider(tab_pat_seq_led_dly);
        horizontalSlider_LedDlyCtrlBlueREdgeDly->setObjectName(QStringLiteral("horizontalSlider_LedDlyCtrlBlueREdgeDly"));
        horizontalSlider_LedDlyCtrlBlueREdgeDly->setMaximum(255);
        horizontalSlider_LedDlyCtrlBlueREdgeDly->setValue(187);
        horizontalSlider_LedDlyCtrlBlueREdgeDly->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_LedDlyCtrlBlueREdgeDly, 6, 2, 1, 1);

        label_LedDlyCtrlBlueREdgeDlyVal = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlBlueREdgeDlyVal->setObjectName(QStringLiteral("label_LedDlyCtrlBlueREdgeDlyVal"));
        label_LedDlyCtrlBlueREdgeDlyVal->setMinimumSize(QSize(60, 0));
        label_LedDlyCtrlBlueREdgeDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_LedDlyCtrlBlueREdgeDlyVal, 6, 3, 1, 1, Qt::AlignRight);

        label_LedDlyCtrlGreenREdgeDlyVal = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlGreenREdgeDlyVal->setObjectName(QStringLiteral("label_LedDlyCtrlGreenREdgeDlyVal"));
        label_LedDlyCtrlGreenREdgeDlyVal->setMinimumSize(QSize(60, 0));
        label_LedDlyCtrlGreenREdgeDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_LedDlyCtrlGreenREdgeDlyVal, 3, 3, 1, 1, Qt::AlignRight);

        horizontalSlider_LedDlyCtrlGreenREdgeDly = new QSlider(tab_pat_seq_led_dly);
        horizontalSlider_LedDlyCtrlGreenREdgeDly->setObjectName(QStringLiteral("horizontalSlider_LedDlyCtrlGreenREdgeDly"));
        horizontalSlider_LedDlyCtrlGreenREdgeDly->setMaximum(255);
        horizontalSlider_LedDlyCtrlGreenREdgeDly->setValue(187);
        horizontalSlider_LedDlyCtrlGreenREdgeDly->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_LedDlyCtrlGreenREdgeDly, 3, 2, 1, 1);

        label_LedDlyCtrlRedFEdgeDlyVal = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlRedFEdgeDlyVal->setObjectName(QStringLiteral("label_LedDlyCtrlRedFEdgeDlyVal"));
        label_LedDlyCtrlRedFEdgeDlyVal->setMinimumSize(QSize(60, 0));
        label_LedDlyCtrlRedFEdgeDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_LedDlyCtrlRedFEdgeDlyVal, 1, 3, 1, 1, Qt::AlignRight);

        label_LedDlyCtrlRedREdgeDly = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlRedREdgeDly->setObjectName(QStringLiteral("label_LedDlyCtrlRedREdgeDly"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_LedDlyCtrlRedREdgeDly->setPalette(palette4);

        gridLayout_3->addWidget(label_LedDlyCtrlRedREdgeDly, 0, 0, 1, 1);

        horizontalSlider_LedDlyCtrlBlueFEdgeDly = new QSlider(tab_pat_seq_led_dly);
        horizontalSlider_LedDlyCtrlBlueFEdgeDly->setObjectName(QStringLiteral("horizontalSlider_LedDlyCtrlBlueFEdgeDly"));
        horizontalSlider_LedDlyCtrlBlueFEdgeDly->setMaximum(255);
        horizontalSlider_LedDlyCtrlBlueFEdgeDly->setValue(187);
        horizontalSlider_LedDlyCtrlBlueFEdgeDly->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_LedDlyCtrlBlueFEdgeDly, 7, 2, 1, 1);

        spinBox_LedDlyCtrlGreenFEdgeDly = new QSpinBox(tab_pat_seq_led_dly);
        spinBox_LedDlyCtrlGreenFEdgeDly->setObjectName(QStringLiteral("spinBox_LedDlyCtrlGreenFEdgeDly"));
        spinBox_LedDlyCtrlGreenFEdgeDly->setMaximum(255);
        spinBox_LedDlyCtrlGreenFEdgeDly->setValue(187);

        gridLayout_3->addWidget(spinBox_LedDlyCtrlGreenFEdgeDly, 4, 1, 1, 1);

        label_LedDlyCtrlGreenREdgeDly = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlGreenREdgeDly->setObjectName(QStringLiteral("label_LedDlyCtrlGreenREdgeDly"));
        label_LedDlyCtrlGreenREdgeDly->setMinimumSize(QSize(152, 0));

        gridLayout_3->addWidget(label_LedDlyCtrlGreenREdgeDly, 3, 0, 1, 1);

        spinBox_LedDlyCtrlBlueFEdgeDly = new QSpinBox(tab_pat_seq_led_dly);
        spinBox_LedDlyCtrlBlueFEdgeDly->setObjectName(QStringLiteral("spinBox_LedDlyCtrlBlueFEdgeDly"));
        spinBox_LedDlyCtrlBlueFEdgeDly->setMaximum(255);
        spinBox_LedDlyCtrlBlueFEdgeDly->setValue(187);

        gridLayout_3->addWidget(spinBox_LedDlyCtrlBlueFEdgeDly, 7, 1, 1, 1);

        label_LedDlyCtrlBlueFEdgeDly = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlBlueFEdgeDly->setObjectName(QStringLiteral("label_LedDlyCtrlBlueFEdgeDly"));

        gridLayout_3->addWidget(label_LedDlyCtrlBlueFEdgeDly, 7, 0, 1, 1);

        spinBox_LedDlyCtrlBlueREdgeDly = new QSpinBox(tab_pat_seq_led_dly);
        spinBox_LedDlyCtrlBlueREdgeDly->setObjectName(QStringLiteral("spinBox_LedDlyCtrlBlueREdgeDly"));
        spinBox_LedDlyCtrlBlueREdgeDly->setMaximum(255);
        spinBox_LedDlyCtrlBlueREdgeDly->setValue(187);

        gridLayout_3->addWidget(spinBox_LedDlyCtrlBlueREdgeDly, 6, 1, 1, 1);

        spinBox_LedDlyCtrlRedREdgeDly = new QSpinBox(tab_pat_seq_led_dly);
        spinBox_LedDlyCtrlRedREdgeDly->setObjectName(QStringLiteral("spinBox_LedDlyCtrlRedREdgeDly"));
        spinBox_LedDlyCtrlRedREdgeDly->setMaximum(255);
        spinBox_LedDlyCtrlRedREdgeDly->setValue(187);

        gridLayout_3->addWidget(spinBox_LedDlyCtrlRedREdgeDly, 0, 1, 1, 1);

        label_LedDlyCtrlRedFEdgeDly = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlRedFEdgeDly->setObjectName(QStringLiteral("label_LedDlyCtrlRedFEdgeDly"));

        gridLayout_3->addWidget(label_LedDlyCtrlRedFEdgeDly, 1, 0, 1, 1);

        label_LedDlyCtrlGreenFEdgeDlyVal = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlGreenFEdgeDlyVal->setObjectName(QStringLiteral("label_LedDlyCtrlGreenFEdgeDlyVal"));
        label_LedDlyCtrlGreenFEdgeDlyVal->setMinimumSize(QSize(60, 0));
        label_LedDlyCtrlGreenFEdgeDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_LedDlyCtrlGreenFEdgeDlyVal, 4, 3, 1, 1, Qt::AlignRight);

        label_LedDlyCtrlBlueFEdgeDlyVal = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlBlueFEdgeDlyVal->setObjectName(QStringLiteral("label_LedDlyCtrlBlueFEdgeDlyVal"));
        label_LedDlyCtrlBlueFEdgeDlyVal->setMinimumSize(QSize(60, 0));
        label_LedDlyCtrlBlueFEdgeDlyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_LedDlyCtrlBlueFEdgeDlyVal, 7, 3, 1, 1, Qt::AlignRight);

        horizontalSlider_LedDlyCtrlRedREdgeDly = new QSlider(tab_pat_seq_led_dly);
        horizontalSlider_LedDlyCtrlRedREdgeDly->setObjectName(QStringLiteral("horizontalSlider_LedDlyCtrlRedREdgeDly"));
        horizontalSlider_LedDlyCtrlRedREdgeDly->setMinimumSize(QSize(250, 0));
        horizontalSlider_LedDlyCtrlRedREdgeDly->setMaximum(255);
        horizontalSlider_LedDlyCtrlRedREdgeDly->setValue(187);
        horizontalSlider_LedDlyCtrlRedREdgeDly->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_LedDlyCtrlRedREdgeDly, 0, 2, 1, 1);

        horizontalSlider_LedDlyCtrlGreenFEdgeDly = new QSlider(tab_pat_seq_led_dly);
        horizontalSlider_LedDlyCtrlGreenFEdgeDly->setObjectName(QStringLiteral("horizontalSlider_LedDlyCtrlGreenFEdgeDly"));
        horizontalSlider_LedDlyCtrlGreenFEdgeDly->setMaximum(255);
        horizontalSlider_LedDlyCtrlGreenFEdgeDly->setValue(187);
        horizontalSlider_LedDlyCtrlGreenFEdgeDly->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_LedDlyCtrlGreenFEdgeDly, 4, 2, 1, 1);

        spinBox_LedDlyCtrlRedFEdgeDly = new QSpinBox(tab_pat_seq_led_dly);
        spinBox_LedDlyCtrlRedFEdgeDly->setObjectName(QStringLiteral("spinBox_LedDlyCtrlRedFEdgeDly"));
        spinBox_LedDlyCtrlRedFEdgeDly->setMaximum(255);
        spinBox_LedDlyCtrlRedFEdgeDly->setValue(187);

        gridLayout_3->addWidget(spinBox_LedDlyCtrlRedFEdgeDly, 1, 1, 1, 1);

        label_LedDlyCtrlGreenFEdgeDly = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlGreenFEdgeDly->setObjectName(QStringLiteral("label_LedDlyCtrlGreenFEdgeDly"));

        gridLayout_3->addWidget(label_LedDlyCtrlGreenFEdgeDly, 4, 0, 1, 1);

        horizontalSlider_LedDlyCtrlRedFEdgeDly = new QSlider(tab_pat_seq_led_dly);
        horizontalSlider_LedDlyCtrlRedFEdgeDly->setObjectName(QStringLiteral("horizontalSlider_LedDlyCtrlRedFEdgeDly"));
        horizontalSlider_LedDlyCtrlRedFEdgeDly->setMaximum(255);
        horizontalSlider_LedDlyCtrlRedFEdgeDly->setValue(187);
        horizontalSlider_LedDlyCtrlRedFEdgeDly->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_LedDlyCtrlRedFEdgeDly, 1, 2, 1, 1);

        label_LedDlyCtrlBlueREdgeDly = new QLabel(tab_pat_seq_led_dly);
        label_LedDlyCtrlBlueREdgeDly->setObjectName(QStringLiteral("label_LedDlyCtrlBlueREdgeDly"));

        gridLayout_3->addWidget(label_LedDlyCtrlBlueREdgeDly, 6, 0, 1, 1);

        verticalSpacer_28 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(verticalSpacer_28, 5, 0, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(135, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_16, 0, 4, 1, 1);


        formLayout_16->setLayout(0, QFormLayout::LabelRole, gridLayout_3);

        horizontalSpacer_17 = new QSpacerItem(119, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_16->setItem(0, QFormLayout::FieldRole, horizontalSpacer_17);

        verticalSpacer_14 = new QSpacerItem(20, 247, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_16->setItem(1, QFormLayout::LabelRole, verticalSpacer_14);

        tabWidget_2->addTab(tab_pat_seq_led_dly, QString());

        verticalLayout_25->addWidget(tabWidget_2);

        tabWidget->addTab(tab_Pattern_Seq, QString());
        tab_Peripheral_Ctrl = new QWidget();
        tab_Peripheral_Ctrl->setObjectName(QStringLiteral("tab_Peripheral_Ctrl"));
        gridLayout_33 = new QGridLayout(tab_Peripheral_Ctrl);
        gridLayout_33->setSpacing(6);
        gridLayout_33->setContentsMargins(11, 11, 11, 11);
        gridLayout_33->setObjectName(QStringLiteral("gridLayout_33"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        groupBox_I2C0_Master = new QGroupBox(tab_Peripheral_Ctrl);
        groupBox_I2C0_Master->setObjectName(QStringLiteral("groupBox_I2C0_Master"));
        verticalLayout_42 = new QVBoxLayout(groupBox_I2C0_Master);
        verticalLayout_42->setSpacing(6);
        verticalLayout_42->setContentsMargins(11, 11, 11, 11);
        verticalLayout_42->setObjectName(QStringLiteral("verticalLayout_42"));
        gridLayout_32 = new QGridLayout();
        gridLayout_32->setSpacing(6);
        gridLayout_32->setObjectName(QStringLiteral("gridLayout_32"));
        label_i2cDevAddr = new QLabel(groupBox_I2C0_Master);
        label_i2cDevAddr->setObjectName(QStringLiteral("label_i2cDevAddr"));

        gridLayout_32->addWidget(label_i2cDevAddr, 2, 0, 1, 1);

        lineEdit_i2cReadData = new QLineEdit(groupBox_I2C0_Master);
        lineEdit_i2cReadData->setObjectName(QStringLiteral("lineEdit_i2cReadData"));

        gridLayout_32->addWidget(lineEdit_i2cReadData, 4, 1, 1, 1);

        lineEdit_i2cBytesToRead = new QLineEdit(groupBox_I2C0_Master);
        lineEdit_i2cBytesToRead->setObjectName(QStringLiteral("lineEdit_i2cBytesToRead"));

        gridLayout_32->addWidget(lineEdit_i2cBytesToRead, 5, 1, 1, 1);

        comboBox_i2cAddrMode = new QComboBox(groupBox_I2C0_Master);
        comboBox_i2cAddrMode->setObjectName(QStringLiteral("comboBox_i2cAddrMode"));

        gridLayout_32->addWidget(comboBox_i2cAddrMode, 0, 1, 1, 1);

        lineEdit_i2cClockRate = new QLineEdit(groupBox_I2C0_Master);
        lineEdit_i2cClockRate->setObjectName(QStringLiteral("lineEdit_i2cClockRate"));

        gridLayout_32->addWidget(lineEdit_i2cClockRate, 1, 1, 1, 1);

        label_i2cBytesToRead = new QLabel(groupBox_I2C0_Master);
        label_i2cBytesToRead->setObjectName(QStringLiteral("label_i2cBytesToRead"));

        gridLayout_32->addWidget(label_i2cBytesToRead, 5, 0, 1, 1);

        label_i2cAddrMode = new QLabel(groupBox_I2C0_Master);
        label_i2cAddrMode->setObjectName(QStringLiteral("label_i2cAddrMode"));

        gridLayout_32->addWidget(label_i2cAddrMode, 0, 0, 1, 1);

        label_i2cWriteData = new QLabel(groupBox_I2C0_Master);
        label_i2cWriteData->setObjectName(QStringLiteral("label_i2cWriteData"));

        gridLayout_32->addWidget(label_i2cWriteData, 3, 0, 1, 1);

        lineEdit_i2cDevAddr = new QLineEdit(groupBox_I2C0_Master);
        lineEdit_i2cDevAddr->setObjectName(QStringLiteral("lineEdit_i2cDevAddr"));

        gridLayout_32->addWidget(lineEdit_i2cDevAddr, 2, 1, 1, 1);

        lineEdit_i2cWriteData = new QLineEdit(groupBox_I2C0_Master);
        lineEdit_i2cWriteData->setObjectName(QStringLiteral("lineEdit_i2cWriteData"));

        gridLayout_32->addWidget(lineEdit_i2cWriteData, 3, 1, 1, 1);

        label_i2cReadData = new QLabel(groupBox_I2C0_Master);
        label_i2cReadData->setObjectName(QStringLiteral("label_i2cReadData"));

        gridLayout_32->addWidget(label_i2cReadData, 4, 0, 1, 1);

        label_i2cClockRate = new QLabel(groupBox_I2C0_Master);
        label_i2cClockRate->setObjectName(QStringLiteral("label_i2cClockRate"));

        gridLayout_32->addWidget(label_i2cClockRate, 1, 0, 1, 1);


        verticalLayout_42->addLayout(gridLayout_32);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_42->addItem(verticalSpacer);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        pushButton_i2cRead = new QPushButton(groupBox_I2C0_Master);
        pushButton_i2cRead->setObjectName(QStringLiteral("pushButton_i2cRead"));

        horizontalLayout_32->addWidget(pushButton_i2cRead);

        pushButton_i2cWrite = new QPushButton(groupBox_I2C0_Master);
        pushButton_i2cWrite->setObjectName(QStringLiteral("pushButton_i2cWrite"));

        horizontalLayout_32->addWidget(pushButton_i2cWrite);


        verticalLayout_42->addLayout(horizontalLayout_32);


        gridLayout_8->addWidget(groupBox_I2C0_Master, 0, 2, 1, 1);

        groupBox_PWMSetup = new QGroupBox(tab_Peripheral_Ctrl);
        groupBox_PWMSetup->setObjectName(QStringLiteral("groupBox_PWMSetup"));
        verticalLayout_27 = new QVBoxLayout(groupBox_PWMSetup);
        verticalLayout_27->setSpacing(2);
        verticalLayout_27->setContentsMargins(11, 11, 11, 11);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(5, 5, 5, 5);
        gridLayout_22 = new QGridLayout();
        gridLayout_22->setSpacing(6);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        lineEdit_PWMPeriod = new QLineEdit(groupBox_PWMSetup);
        lineEdit_PWMPeriod->setObjectName(QStringLiteral("lineEdit_PWMPeriod"));

        gridLayout_22->addWidget(lineEdit_PWMPeriod, 1, 1, 1, 1);

        label_PWMPulsePeriod = new QLabel(groupBox_PWMSetup);
        label_PWMPulsePeriod->setObjectName(QStringLiteral("label_PWMPulsePeriod"));

        gridLayout_22->addWidget(label_PWMPulsePeriod, 1, 0, 1, 1);

        label_PWMDutyCycle = new QLabel(groupBox_PWMSetup);
        label_PWMDutyCycle->setObjectName(QStringLiteral("label_PWMDutyCycle"));

        gridLayout_22->addWidget(label_PWMDutyCycle, 2, 0, 1, 1);

        spinBox_PWMDutyCycle = new QSpinBox(groupBox_PWMSetup);
        spinBox_PWMDutyCycle->setObjectName(QStringLiteral("spinBox_PWMDutyCycle"));

        gridLayout_22->addWidget(spinBox_PWMDutyCycle, 2, 1, 1, 1);

        checkBox_PWMEnable = new QCheckBox(groupBox_PWMSetup);
        checkBox_PWMEnable->setObjectName(QStringLiteral("checkBox_PWMEnable"));

        gridLayout_22->addWidget(checkBox_PWMEnable, 0, 1, 1, 1);

        comboBox_PWMChannel = new QComboBox(groupBox_PWMSetup);
        comboBox_PWMChannel->setObjectName(QStringLiteral("comboBox_PWMChannel"));

        gridLayout_22->addWidget(comboBox_PWMChannel, 0, 0, 1, 1);


        verticalLayout_27->addLayout(gridLayout_22);

        verticalSpacer_23 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_23);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        pushButton_GetPWMConfig = new QPushButton(groupBox_PWMSetup);
        pushButton_GetPWMConfig->setObjectName(QStringLiteral("pushButton_GetPWMConfig"));

        horizontalLayout_27->addWidget(pushButton_GetPWMConfig);

        pushButton_SetPWMConfig = new QPushButton(groupBox_PWMSetup);
        pushButton_SetPWMConfig->setObjectName(QStringLiteral("pushButton_SetPWMConfig"));

        horizontalLayout_27->addWidget(pushButton_SetPWMConfig);


        verticalLayout_27->addLayout(horizontalLayout_27);


        gridLayout_8->addWidget(groupBox_PWMSetup, 0, 1, 1, 1);

        groupBox_GPIOConfig = new QGroupBox(tab_Peripheral_Ctrl);
        groupBox_GPIOConfig->setObjectName(QStringLiteral("groupBox_GPIOConfig"));
        verticalLayout_29 = new QVBoxLayout(groupBox_GPIOConfig);
        verticalLayout_29->setSpacing(2);
        verticalLayout_29->setContentsMargins(11, 11, 11, 11);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        verticalLayout_29->setContentsMargins(5, 5, 5, 5);
        gridLayout_24 = new QGridLayout();
        gridLayout_24->setSpacing(6);
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        checkBox_GPIOEnAltFun = new QCheckBox(groupBox_GPIOConfig);
        checkBox_GPIOEnAltFun->setObjectName(QStringLiteral("checkBox_GPIOEnAltFun"));

        gridLayout_24->addWidget(checkBox_GPIOEnAltFun, 1, 1, 1, 1);

        label_GPIOSelPin = new QLabel(groupBox_GPIOConfig);
        label_GPIOSelPin->setObjectName(QStringLiteral("label_GPIOSelPin"));

        gridLayout_24->addWidget(label_GPIOSelPin, 0, 1, 1, 1);

        label_GPIOPinDir = new QLabel(groupBox_GPIOConfig);
        label_GPIOPinDir->setObjectName(QStringLiteral("label_GPIOPinDir"));

        gridLayout_24->addWidget(label_GPIOPinDir, 2, 1, 1, 1);

        comboBox_GPIOPinDir = new QComboBox(groupBox_GPIOConfig);
        comboBox_GPIOPinDir->setObjectName(QStringLiteral("comboBox_GPIOPinDir"));

        gridLayout_24->addWidget(comboBox_GPIOPinDir, 2, 2, 1, 1);

        label_GPIOPinState = new QLabel(groupBox_GPIOConfig);
        label_GPIOPinState->setObjectName(QStringLiteral("label_GPIOPinState"));

        gridLayout_24->addWidget(label_GPIOPinState, 3, 1, 1, 1);

        comboBox_GPIOPinState = new QComboBox(groupBox_GPIOConfig);
        comboBox_GPIOPinState->setObjectName(QStringLiteral("comboBox_GPIOPinState"));

        gridLayout_24->addWidget(comboBox_GPIOPinState, 3, 2, 1, 1);

        comboBox_GPIOPin = new QComboBox(groupBox_GPIOConfig);
        comboBox_GPIOPin->setObjectName(QStringLiteral("comboBox_GPIOPin"));

        gridLayout_24->addWidget(comboBox_GPIOPin, 0, 2, 1, 1);

        label_GPIOOutputType = new QLabel(groupBox_GPIOConfig);
        label_GPIOOutputType->setObjectName(QStringLiteral("label_GPIOOutputType"));

        gridLayout_24->addWidget(label_GPIOOutputType, 4, 1, 1, 1);

        comboBox_GPIOOutType = new QComboBox(groupBox_GPIOConfig);
        comboBox_GPIOOutType->setObjectName(QStringLiteral("comboBox_GPIOOutType"));

        gridLayout_24->addWidget(comboBox_GPIOOutType, 4, 2, 1, 1);


        verticalLayout_29->addLayout(gridLayout_24);

        verticalSpacer_21 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_29->addItem(verticalSpacer_21);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        pushBox_GetGPIOConfig = new QPushButton(groupBox_GPIOConfig);
        pushBox_GetGPIOConfig->setObjectName(QStringLiteral("pushBox_GetGPIOConfig"));

        horizontalLayout_29->addWidget(pushBox_GetGPIOConfig);

        pushBox_SetGPIOConfig = new QPushButton(groupBox_GPIOConfig);
        pushBox_SetGPIOConfig->setObjectName(QStringLiteral("pushBox_SetGPIOConfig"));

        horizontalLayout_29->addWidget(pushBox_SetGPIOConfig);


        verticalLayout_29->addLayout(horizontalLayout_29);


        gridLayout_8->addWidget(groupBox_GPIOConfig, 1, 0, 1, 1);

        groupBox_PWMCapSetup = new QGroupBox(tab_Peripheral_Ctrl);
        groupBox_PWMCapSetup->setObjectName(QStringLiteral("groupBox_PWMCapSetup"));
        verticalLayout_28 = new QVBoxLayout(groupBox_PWMCapSetup);
        verticalLayout_28->setSpacing(2);
        verticalLayout_28->setContentsMargins(11, 11, 11, 11);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(5, 5, 5, 5);
        gridLayout_23 = new QGridLayout();
        gridLayout_23->setSpacing(6);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        label_PWMCapSampleRate = new QLabel(groupBox_PWMCapSetup);
        label_PWMCapSampleRate->setObjectName(QStringLiteral("label_PWMCapSampleRate"));

        gridLayout_23->addWidget(label_PWMCapSampleRate, 1, 0, 1, 1);

        lineEdit_PWMCapSampleRate = new QLineEdit(groupBox_PWMCapSetup);
        lineEdit_PWMCapSampleRate->setObjectName(QStringLiteral("lineEdit_PWMCapSampleRate"));

        gridLayout_23->addWidget(lineEdit_PWMCapSampleRate, 1, 1, 1, 1);

        label_PWMCapDutyCycleReadback = new QLabel(groupBox_PWMCapSetup);
        label_PWMCapDutyCycleReadback->setObjectName(QStringLiteral("label_PWMCapDutyCycleReadback"));

        gridLayout_23->addWidget(label_PWMCapDutyCycleReadback, 2, 0, 1, 1);

        checkBox_PWMCapEnable = new QCheckBox(groupBox_PWMCapSetup);
        checkBox_PWMCapEnable->setObjectName(QStringLiteral("checkBox_PWMCapEnable"));

        gridLayout_23->addWidget(checkBox_PWMCapEnable, 0, 1, 1, 1);

        comboBox_PWMCapChannel = new QComboBox(groupBox_PWMCapSetup);
        comboBox_PWMCapChannel->setObjectName(QStringLiteral("comboBox_PWMCapChannel"));

        gridLayout_23->addWidget(comboBox_PWMCapChannel, 0, 0, 1, 1);

        lineEdit_PWMCapDutyCycleReadback = new QLineEdit(groupBox_PWMCapSetup);
        lineEdit_PWMCapDutyCycleReadback->setObjectName(QStringLiteral("lineEdit_PWMCapDutyCycleReadback"));
        lineEdit_PWMCapDutyCycleReadback->setReadOnly(true);

        gridLayout_23->addWidget(lineEdit_PWMCapDutyCycleReadback, 2, 1, 1, 1);


        verticalLayout_28->addLayout(gridLayout_23);

        pushButton_PWMCapRead = new QPushButton(groupBox_PWMCapSetup);
        pushButton_PWMCapRead->setObjectName(QStringLiteral("pushButton_PWMCapRead"));

        verticalLayout_28->addWidget(pushButton_PWMCapRead);

        verticalSpacer_19 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_28->addItem(verticalSpacer_19);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        pushButton_GetPWMCapConfig = new QPushButton(groupBox_PWMCapSetup);
        pushButton_GetPWMCapConfig->setObjectName(QStringLiteral("pushButton_GetPWMCapConfig"));

        horizontalLayout_28->addWidget(pushButton_GetPWMCapConfig);

        pushButton_SetPWMCapConfig = new QPushButton(groupBox_PWMCapSetup);
        pushButton_SetPWMCapConfig->setObjectName(QStringLiteral("pushButton_SetPWMCapConfig"));

        horizontalLayout_28->addWidget(pushButton_SetPWMCapConfig);


        verticalLayout_28->addLayout(horizontalLayout_28);


        gridLayout_8->addWidget(groupBox_PWMCapSetup, 1, 1, 1, 1);

        groupBox_GPClk = new QGroupBox(tab_Peripheral_Ctrl);
        groupBox_GPClk->setObjectName(QStringLiteral("groupBox_GPClk"));
        verticalLayout_26 = new QVBoxLayout(groupBox_GPClk);
        verticalLayout_26->setSpacing(2);
        verticalLayout_26->setContentsMargins(11, 11, 11, 11);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(5, 5, 5, 5);
        checkBox_GpClk = new QCheckBox(groupBox_GPClk);
        checkBox_GpClk->setObjectName(QStringLiteral("checkBox_GpClk"));

        verticalLayout_26->addWidget(checkBox_GpClk);

        comboBox_GpClk = new QComboBox(groupBox_GPClk);
        comboBox_GpClk->setObjectName(QStringLiteral("comboBox_GpClk"));

        verticalLayout_26->addWidget(comboBox_GpClk);

        gridLayout_20 = new QGridLayout();
        gridLayout_20->setSpacing(6);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        spinBox_GpClk = new QSpinBox(groupBox_GPClk);
        spinBox_GpClk->setObjectName(QStringLiteral("spinBox_GpClk"));
        spinBox_GpClk->setMinimum(2);
        spinBox_GpClk->setMaximum(127);

        gridLayout_20->addWidget(spinBox_GpClk, 0, 1, 1, 1);

        label_GpClkDiv = new QLabel(groupBox_GPClk);
        label_GpClkDiv->setObjectName(QStringLiteral("label_GpClkDiv"));

        gridLayout_20->addWidget(label_GpClkDiv, 0, 0, 1, 1);

        label_GpClkFreq = new QLabel(groupBox_GPClk);
        label_GpClkFreq->setObjectName(QStringLiteral("label_GpClkFreq"));

        gridLayout_20->addWidget(label_GpClkFreq, 1, 0, 1, 1);

        label_GpClkFreqVal = new QLabel(groupBox_GPClk);
        label_GpClkFreqVal->setObjectName(QStringLiteral("label_GpClkFreqVal"));

        gridLayout_20->addWidget(label_GpClkFreqVal, 1, 1, 1, 1, Qt::AlignHCenter);


        verticalLayout_26->addLayout(gridLayout_20);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_26->addItem(verticalSpacer_8);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        pushButton_GetGpClk = new QPushButton(groupBox_GPClk);
        pushButton_GetGpClk->setObjectName(QStringLiteral("pushButton_GetGpClk"));

        horizontalLayout_24->addWidget(pushButton_GetGpClk);

        pushButton_SetGpClk = new QPushButton(groupBox_GPClk);
        pushButton_SetGpClk->setObjectName(QStringLiteral("pushButton_SetGpClk"));

        horizontalLayout_24->addWidget(pushButton_SetGpClk);


        verticalLayout_26->addLayout(horizontalLayout_24);


        gridLayout_8->addWidget(groupBox_GPClk, 0, 0, 1, 1);

        textEdit_i2c0_port_usage = new QTextEdit(tab_Peripheral_Ctrl);
        textEdit_i2c0_port_usage->setObjectName(QStringLiteral("textEdit_i2c0_port_usage"));

        gridLayout_8->addWidget(textEdit_i2c0_port_usage, 1, 2, 1, 1);


        gridLayout_33->addLayout(gridLayout_8, 0, 0, 1, 1);

        tabWidget->addTab(tab_Peripheral_Ctrl, QString());
        tab_Image_Firmware = new QWidget();
        tab_Image_Firmware->setObjectName(QStringLiteral("tab_Image_Firmware"));
        verticalLayout_11 = new QVBoxLayout(tab_Image_Firmware);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        tabWidget_3 = new QTabWidget(tab_Image_Firmware);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        sizePolicy.setHeightForWidth(tabWidget_3->sizePolicy().hasHeightForWidth());
        tabWidget_3->setSizePolicy(sizePolicy);
        tab_Create_Splash = new QWidget();
        tab_Create_Splash->setObjectName(QStringLiteral("tab_Create_Splash"));
        gridLayout_6 = new QGridLayout(tab_Create_Splash);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_CreaImgInputBMPFileName = new QLabel(tab_Create_Splash);
        label_CreaImgInputBMPFileName->setObjectName(QStringLiteral("label_CreaImgInputBMPFileName"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_CreaImgInputBMPFileName->sizePolicy().hasHeightForWidth());
        label_CreaImgInputBMPFileName->setSizePolicy(sizePolicy6);

        gridLayout_6->addWidget(label_CreaImgInputBMPFileName, 0, 0, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_6->addItem(verticalSpacer_13, 4, 0, 1, 1);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_17, 4, 1, 1, 1);

        label_CreaImgInputBMPFileImgPreview = new QLabel(tab_Create_Splash);
        label_CreaImgInputBMPFileImgPreview->setObjectName(QStringLiteral("label_CreaImgInputBMPFileImgPreview"));
        label_CreaImgInputBMPFileImgPreview->setMinimumSize(QSize(300, 250));
        label_CreaImgInputBMPFileImgPreview->setMaximumSize(QSize(300, 250));
        label_CreaImgInputBMPFileImgPreview->setFrameShape(QFrame::Box);
        label_CreaImgInputBMPFileImgPreview->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_CreaImgInputBMPFileImgPreview, 3, 0, 1, 1);

        label_CreaImgOutImgPreview = new QLabel(tab_Create_Splash);
        label_CreaImgOutImgPreview->setObjectName(QStringLiteral("label_CreaImgOutImgPreview"));
        label_CreaImgOutImgPreview->setMinimumSize(QSize(300, 250));
        label_CreaImgOutImgPreview->setMaximumSize(QSize(300, 250));
        label_CreaImgOutImgPreview->setFrameShape(QFrame::Box);

        gridLayout_6->addWidget(label_CreaImgOutImgPreview, 3, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 0, 1, 1);

        pushButton_CreaImgClearOutFileContents = new QPushButton(tab_Create_Splash);
        pushButton_CreaImgClearOutFileContents->setObjectName(QStringLiteral("pushButton_CreaImgClearOutFileContents"));

        gridLayout_2->addWidget(pushButton_CreaImgClearOutFileContents, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 2, 1, 1, 1);

        label_CreaImgOutputBMPFileName = new QLabel(tab_Create_Splash);
        label_CreaImgOutputBMPFileName->setObjectName(QStringLiteral("label_CreaImgOutputBMPFileName"));

        gridLayout_6->addWidget(label_CreaImgOutputBMPFileName, 0, 1, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        lineEdit_CreaImgInputBmpFileName = new QLineEdit(tab_Create_Splash);
        lineEdit_CreaImgInputBmpFileName->setObjectName(QStringLiteral("lineEdit_CreaImgInputBmpFileName"));
        sizePolicy5.setHeightForWidth(lineEdit_CreaImgInputBmpFileName->sizePolicy().hasHeightForWidth());
        lineEdit_CreaImgInputBmpFileName->setSizePolicy(sizePolicy5);
        lineEdit_CreaImgInputBmpFileName->setReadOnly(true);

        horizontalLayout_19->addWidget(lineEdit_CreaImgInputBmpFileName);

        pushButton_CreaImgSelectBMPFile = new QPushButton(tab_Create_Splash);
        pushButton_CreaImgSelectBMPFile->setObjectName(QStringLiteral("pushButton_CreaImgSelectBMPFile"));

        horizontalLayout_19->addWidget(pushButton_CreaImgSelectBMPFile);


        gridLayout_6->addLayout(horizontalLayout_19, 1, 0, 1, 1);

        gridLayout_29 = new QGridLayout();
        gridLayout_29->setSpacing(2);
        gridLayout_29->setObjectName(QStringLiteral("gridLayout_29"));
        label_CreaImgPattPosition = new QLabel(tab_Create_Splash);
        label_CreaImgPattPosition->setObjectName(QStringLiteral("label_CreaImgPattPosition"));
        sizePolicy6.setHeightForWidth(label_CreaImgPattPosition->sizePolicy().hasHeightForWidth());
        label_CreaImgPattPosition->setSizePolicy(sizePolicy6);

        gridLayout_29->addWidget(label_CreaImgPattPosition, 1, 1, 1, 1);

        label_CreaImgBitDepth = new QLabel(tab_Create_Splash);
        label_CreaImgBitDepth->setObjectName(QStringLiteral("label_CreaImgBitDepth"));

        gridLayout_29->addWidget(label_CreaImgBitDepth, 1, 0, 1, 1);

        comboBox_CreaImgFileBitDepth = new QComboBox(tab_Create_Splash);
        comboBox_CreaImgFileBitDepth->setObjectName(QStringLiteral("comboBox_CreaImgFileBitDepth"));

        gridLayout_29->addWidget(comboBox_CreaImgFileBitDepth, 3, 0, 1, 1);

        pushButton_CreaImgAddToOutFile = new QPushButton(tab_Create_Splash);
        pushButton_CreaImgAddToOutFile->setObjectName(QStringLiteral("pushButton_CreaImgAddToOutFile"));

        gridLayout_29->addWidget(pushButton_CreaImgAddToOutFile, 3, 2, 1, 1);

        comboBox_CreaImgFilePatPos = new QComboBox(tab_Create_Splash);
        comboBox_CreaImgFilePatPos->setObjectName(QStringLiteral("comboBox_CreaImgFilePatPos"));

        gridLayout_29->addWidget(comboBox_CreaImgFilePatPos, 3, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_29->addItem(verticalSpacer_7, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_29, 2, 0, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(2);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        lineEdit_CreaImgOutputBmpFileName = new QLineEdit(tab_Create_Splash);
        lineEdit_CreaImgOutputBmpFileName->setObjectName(QStringLiteral("lineEdit_CreaImgOutputBmpFileName"));
        sizePolicy5.setHeightForWidth(lineEdit_CreaImgOutputBmpFileName->sizePolicy().hasHeightForWidth());
        lineEdit_CreaImgOutputBmpFileName->setSizePolicy(sizePolicy5);

        horizontalLayout_20->addWidget(lineEdit_CreaImgOutputBmpFileName);

        pushButton_CreaImgSelectDestFileName = new QPushButton(tab_Create_Splash);
        pushButton_CreaImgSelectDestFileName->setObjectName(QStringLiteral("pushButton_CreaImgSelectDestFileName"));

        horizontalLayout_20->addWidget(pushButton_CreaImgSelectDestFileName);

        horizontalLayout_20->setStretch(0, 1);

        gridLayout_6->addLayout(horizontalLayout_20, 1, 1, 1, 1);

        tabWidget_3->addTab(tab_Create_Splash, QString());
        tab_Create_Firmware = new QWidget();
        tab_Create_Firmware->setObjectName(QStringLiteral("tab_Create_Firmware"));
        formLayout_17 = new QFormLayout(tab_Create_Firmware);
        formLayout_17->setSpacing(6);
        formLayout_17->setContentsMargins(11, 11, 11, 11);
        formLayout_17->setObjectName(QStringLiteral("formLayout_17"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_FWDwldLatFWLink = new QLabel(tab_Create_Firmware);
        label_FWDwldLatFWLink->setObjectName(QStringLiteral("label_FWDwldLatFWLink"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_FWDwldLatFWLink->sizePolicy().hasHeightForWidth());
        label_FWDwldLatFWLink->setSizePolicy(sizePolicy7);
        label_FWDwldLatFWLink->setFrameShape(QFrame::NoFrame);
        label_FWDwldLatFWLink->setFrameShadow(QFrame::Plain);
        label_FWDwldLatFWLink->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(label_FWDwldLatFWLink);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(5, 5, 5, 5);
        progressBar_FWFileParsing = new QProgressBar(tab_Create_Firmware);
        progressBar_FWFileParsing->setObjectName(QStringLiteral("progressBar_FWFileParsing"));
        progressBar_FWFileParsing->setEnabled(true);
        progressBar_FWFileParsing->setValue(0);

        gridLayout_4->addWidget(progressBar_FWFileParsing, 2, 1, 1, 1);

        label_FWFileParseStatus = new QLabel(tab_Create_Firmware);
        label_FWFileParseStatus->setObjectName(QStringLiteral("label_FWFileParseStatus"));
        label_FWFileParseStatus->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_FWFileParseStatus, 1, 1, 1, 1);

        lineEdit_FWFileSelected = new QLineEdit(tab_Create_Firmware);
        lineEdit_FWFileSelected->setObjectName(QStringLiteral("lineEdit_FWFileSelected"));
        lineEdit_FWFileSelected->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit_FWFileSelected, 0, 1, 1, 1);

        pushButton_FWSelectFWBin = new QPushButton(tab_Create_Firmware);
        pushButton_FWSelectFWBin->setObjectName(QStringLiteral("pushButton_FWSelectFWBin"));
        pushButton_FWSelectFWBin->setEnabled(true);

        gridLayout_4->addWidget(pushButton_FWSelectFWBin, 0, 2, 1, 1);

        label_FWSelectFWFile = new QLabel(tab_Create_Firmware);
        label_FWSelectFWFile->setObjectName(QStringLiteral("label_FWSelectFWFile"));

        gridLayout_4->addWidget(label_FWSelectFWFile, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_FWIniFile = new QLabel(tab_Create_Firmware);
        label_FWIniFile->setObjectName(QStringLiteral("label_FWIniFile"));

        horizontalLayout_6->addWidget(label_FWIniFile);

        lineEdit_FWIniFileSelected = new QLineEdit(tab_Create_Firmware);
        lineEdit_FWIniFileSelected->setObjectName(QStringLiteral("lineEdit_FWIniFileSelected"));
        lineEdit_FWIniFileSelected->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_FWIniFileSelected);

        pushButton_FWClearSelIniFile = new QPushButton(tab_Create_Firmware);
        pushButton_FWClearSelIniFile->setObjectName(QStringLiteral("pushButton_FWClearSelIniFile"));

        horizontalLayout_6->addWidget(pushButton_FWClearSelIniFile);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        label_add_fw_tag = new QLabel(tab_Create_Firmware);
        label_add_fw_tag->setObjectName(QStringLiteral("label_add_fw_tag"));

        horizontalLayout_41->addWidget(label_add_fw_tag);

        lineEdit_firmwareTagName = new QLineEdit(tab_Create_Firmware);
        lineEdit_firmwareTagName->setObjectName(QStringLiteral("lineEdit_firmwareTagName"));

        horizontalLayout_41->addWidget(lineEdit_firmwareTagName);

        pushButton_FWClearFWTag = new QPushButton(tab_Create_Firmware);
        pushButton_FWClearFWTag->setObjectName(QStringLiteral("pushButton_FWClearFWTag"));

        horizontalLayout_41->addWidget(pushButton_FWClearFWTag);


        verticalLayout_2->addLayout(horizontalLayout_41);

        label_NewFWBuildPath = new QLabel(tab_Create_Firmware);
        label_NewFWBuildPath->setObjectName(QStringLiteral("label_NewFWBuildPath"));
        sizePolicy.setHeightForWidth(label_NewFWBuildPath->sizePolicy().hasHeightForWidth());
        label_NewFWBuildPath->setSizePolicy(sizePolicy);
        label_NewFWBuildPath->setMinimumSize(QSize(0, 0));
        label_NewFWBuildPath->setWordWrap(true);

        verticalLayout_2->addWidget(label_NewFWBuildPath);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        verticalLayout_39 = new QVBoxLayout();
        verticalLayout_39->setSpacing(2);
        verticalLayout_39->setObjectName(QStringLiteral("verticalLayout_39"));
        label_FWOrgSplashImageCount = new QLabel(tab_Create_Firmware);
        label_FWOrgSplashImageCount->setObjectName(QStringLiteral("label_FWOrgSplashImageCount"));
        sizePolicy.setHeightForWidth(label_FWOrgSplashImageCount->sizePolicy().hasHeightForWidth());
        label_FWOrgSplashImageCount->setSizePolicy(sizePolicy);

        verticalLayout_39->addWidget(label_FWOrgSplashImageCount);

        label_FWNewSplashImageAddedCount = new QLabel(tab_Create_Firmware);
        label_FWNewSplashImageAddedCount->setObjectName(QStringLiteral("label_FWNewSplashImageAddedCount"));
        sizePolicy.setHeightForWidth(label_FWNewSplashImageAddedCount->sizePolicy().hasHeightForWidth());
        label_FWNewSplashImageAddedCount->setSizePolicy(sizePolicy);

        verticalLayout_39->addWidget(label_FWNewSplashImageAddedCount);

        label_FWSplashImageRemovedCount = new QLabel(tab_Create_Firmware);
        label_FWSplashImageRemovedCount->setObjectName(QStringLiteral("label_FWSplashImageRemovedCount"));
        sizePolicy.setHeightForWidth(label_FWSplashImageRemovedCount->sizePolicy().hasHeightForWidth());
        label_FWSplashImageRemovedCount->setSizePolicy(sizePolicy);

        verticalLayout_39->addWidget(label_FWSplashImageRemovedCount);

        label_FWAvaSplashImageCount = new QLabel(tab_Create_Firmware);
        label_FWAvaSplashImageCount->setObjectName(QStringLiteral("label_FWAvaSplashImageCount"));
        sizePolicy.setHeightForWidth(label_FWAvaSplashImageCount->sizePolicy().hasHeightForWidth());
        label_FWAvaSplashImageCount->setSizePolicy(sizePolicy);

        verticalLayout_39->addWidget(label_FWAvaSplashImageCount);

        verticalSpacer_9 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_39->addItem(verticalSpacer_9);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(2);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        pushButton_FWRemoveSplashImage = new QPushButton(tab_Create_Firmware);
        pushButton_FWRemoveSplashImage->setObjectName(QStringLiteral("pushButton_FWRemoveSplashImage"));
        pushButton_FWRemoveSplashImage->setEnabled(false);

        gridLayout_7->addWidget(pushButton_FWRemoveSplashImage, 1, 1, 1, 1);

        comboBox_FWSplashImageIndex = new QComboBox(tab_Create_Firmware);
        comboBox_FWSplashImageIndex->setObjectName(QStringLiteral("comboBox_FWSplashImageIndex"));
        comboBox_FWSplashImageIndex->setEnabled(false);

        gridLayout_7->addWidget(comboBox_FWSplashImageIndex, 0, 0, 1, 1);

        pushButton_FWAddSplashImage = new QPushButton(tab_Create_Firmware);
        pushButton_FWAddSplashImage->setObjectName(QStringLiteral("pushButton_FWAddSplashImage"));
        pushButton_FWAddSplashImage->setEnabled(false);

        gridLayout_7->addWidget(pushButton_FWAddSplashImage, 2, 0, 1, 1);

        pushButton_FWChangeSplashImage = new QPushButton(tab_Create_Firmware);
        pushButton_FWChangeSplashImage->setObjectName(QStringLiteral("pushButton_FWChangeSplashImage"));
        pushButton_FWChangeSplashImage->setEnabled(false);

        gridLayout_7->addWidget(pushButton_FWChangeSplashImage, 0, 1, 1, 1);


        verticalLayout_39->addLayout(gridLayout_7);

        pushButton_FWSelectIniFile = new QPushButton(tab_Create_Firmware);
        pushButton_FWSelectIniFile->setObjectName(QStringLiteral("pushButton_FWSelectIniFile"));
        pushButton_FWSelectIniFile->setEnabled(false);
        pushButton_FWSelectIniFile->setMinimumSize(QSize(101, 0));

        verticalLayout_39->addWidget(pushButton_FWSelectIniFile);

        pushButton_FWBuildNewFrmwImage = new QPushButton(tab_Create_Firmware);
        pushButton_FWBuildNewFrmwImage->setObjectName(QStringLiteral("pushButton_FWBuildNewFrmwImage"));
        pushButton_FWBuildNewFrmwImage->setEnabled(false);
        sizePolicy2.setHeightForWidth(pushButton_FWBuildNewFrmwImage->sizePolicy().hasHeightForWidth());
        pushButton_FWBuildNewFrmwImage->setSizePolicy(sizePolicy2);

        verticalLayout_39->addWidget(pushButton_FWBuildNewFrmwImage);

        pushButton_FWSplashImageUpload = new QPushButton(tab_Create_Firmware);
        pushButton_FWSplashImageUpload->setObjectName(QStringLiteral("pushButton_FWSplashImageUpload"));
        pushButton_FWSplashImageUpload->setEnabled(false);

        verticalLayout_39->addWidget(pushButton_FWSplashImageUpload);


        horizontalLayout_30->addLayout(verticalLayout_39);

        label_FWPreviewSelImage = new QLabel(tab_Create_Firmware);
        label_FWPreviewSelImage->setObjectName(QStringLiteral("label_FWPreviewSelImage"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(label_FWPreviewSelImage->sizePolicy().hasHeightForWidth());
        label_FWPreviewSelImage->setSizePolicy(sizePolicy8);
        label_FWPreviewSelImage->setMinimumSize(QSize(300, 250));

        horizontalLayout_30->addWidget(label_FWPreviewSelImage);


        verticalLayout_2->addLayout(horizontalLayout_30);


        formLayout_17->setLayout(0, QFormLayout::LabelRole, verticalLayout_2);

        groupBox_FWIllumModSelect = new QGroupBox(tab_Create_Firmware);
        groupBox_FWIllumModSelect->setObjectName(QStringLiteral("groupBox_FWIllumModSelect"));
        verticalLayout_36 = new QVBoxLayout(groupBox_FWIllumModSelect);
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setContentsMargins(11, 11, 11, 11);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        verticalLayout_35 = new QVBoxLayout();
        verticalLayout_35->setSpacing(6);
        verticalLayout_35->setObjectName(QStringLiteral("verticalLayout_35"));
        radioButton_FWIllumSelColor = new QRadioButton(groupBox_FWIllumModSelect);
        radioButton_FWIllumSelColor->setObjectName(QStringLiteral("radioButton_FWIllumSelColor"));
        radioButton_FWIllumSelColor->setChecked(true);

        verticalLayout_35->addWidget(radioButton_FWIllumSelColor);

        radioButton_FWIllumSelMono = new QRadioButton(groupBox_FWIllumModSelect);
        radioButton_FWIllumSelMono->setObjectName(QStringLiteral("radioButton_FWIllumSelMono"));

        verticalLayout_35->addWidget(radioButton_FWIllumSelMono);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QStringLiteral("horizontalLayout_42"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_42->addItem(horizontalSpacer_3);

        verticalLayout_41 = new QVBoxLayout();
        verticalLayout_41->setSpacing(6);
        verticalLayout_41->setObjectName(QStringLiteral("verticalLayout_41"));
        checkBox_FWIllumSelMonoRedCh = new QCheckBox(groupBox_FWIllumModSelect);
        checkBox_FWIllumSelMonoRedCh->setObjectName(QStringLiteral("checkBox_FWIllumSelMonoRedCh"));
        checkBox_FWIllumSelMonoRedCh->setEnabled(false);

        verticalLayout_41->addWidget(checkBox_FWIllumSelMonoRedCh);

        checkBox_FWIllumSelMonoGreenCh = new QCheckBox(groupBox_FWIllumModSelect);
        checkBox_FWIllumSelMonoGreenCh->setObjectName(QStringLiteral("checkBox_FWIllumSelMonoGreenCh"));
        checkBox_FWIllumSelMonoGreenCh->setEnabled(false);

        verticalLayout_41->addWidget(checkBox_FWIllumSelMonoGreenCh);

        checkBox_FWIllumSelMonoBlueCh = new QCheckBox(groupBox_FWIllumModSelect);
        checkBox_FWIllumSelMonoBlueCh->setObjectName(QStringLiteral("checkBox_FWIllumSelMonoBlueCh"));
        checkBox_FWIllumSelMonoBlueCh->setEnabled(false);

        verticalLayout_41->addWidget(checkBox_FWIllumSelMonoBlueCh);


        horizontalLayout_42->addLayout(verticalLayout_41);


        verticalLayout_35->addLayout(horizontalLayout_42);


        verticalLayout_36->addLayout(verticalLayout_35);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_36->addItem(verticalSpacer_12);


        formLayout_17->setWidget(0, QFormLayout::FieldRole, groupBox_FWIllumModSelect);

        tabWidget_3->addTab(tab_Create_Firmware, QString());
        tab_FirmwareUpload = new QWidget();
        tab_FirmwareUpload->setObjectName(QStringLiteral("tab_FirmwareUpload"));
        formLayout_12 = new QFormLayout(tab_FirmwareUpload);
        formLayout_12->setSpacing(6);
        formLayout_12->setContentsMargins(11, 11, 11, 11);
        formLayout_12->setObjectName(QStringLiteral("formLayout_12"));
        formLayout_12->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_FWUploadLatestFWLink = new QLabel(tab_FirmwareUpload);
        label_FWUploadLatestFWLink->setObjectName(QStringLiteral("label_FWUploadLatestFWLink"));
        label_FWUploadLatestFWLink->setFrameShape(QFrame::NoFrame);
        label_FWUploadLatestFWLink->setFrameShadow(QFrame::Plain);
        label_FWUploadLatestFWLink->setOpenExternalLinks(true);

        formLayout_12->setWidget(0, QFormLayout::LabelRole, label_FWUploadLatestFWLink);

        pushButton_Connect_2 = new QPushButton(tab_FirmwareUpload);
        pushButton_Connect_2->setObjectName(QStringLiteral("pushButton_Connect_2"));
        pushButton_Connect_2->setEnabled(true);

        formLayout_12->setWidget(2, QFormLayout::LabelRole, pushButton_Connect_2);

        textEdit_FWUpdate = new QTextEdit(tab_FirmwareUpload);
        textEdit_FWUpdate->setObjectName(QStringLiteral("textEdit_FWUpdate"));
        textEdit_FWUpdate->setReadOnly(true);
        textEdit_FWUpdate->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        formLayout_12->setWidget(3, QFormLayout::SpanningRole, textEdit_FWUpdate);

        groupBox_FWUpload = new QGroupBox(tab_FirmwareUpload);
        groupBox_FWUpload->setObjectName(QStringLiteral("groupBox_FWUpload"));
        groupBox_FWUpload->setMinimumSize(QSize(504, 20));
        verticalLayout_31 = new QVBoxLayout(groupBox_FWUpload);
        verticalLayout_31->setSpacing(2);
        verticalLayout_31->setContentsMargins(11, 11, 11, 11);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        verticalLayout_31->setContentsMargins(5, 5, 5, 5);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(5, 5, 5, 5);
        FirmwareFile_2 = new QLineEdit(groupBox_FWUpload);
        FirmwareFile_2->setObjectName(QStringLiteral("FirmwareFile_2"));

        gridLayout_5->addWidget(FirmwareFile_2, 0, 1, 1, 1);

        pushButton_FWFileSelect = new QPushButton(groupBox_FWUpload);
        pushButton_FWFileSelect->setObjectName(QStringLiteral("pushButton_FWFileSelect"));
        pushButton_FWFileSelect->setEnabled(true);

        gridLayout_5->addWidget(pushButton_FWFileSelect, 0, 2, 1, 1);

        prorgessBar_FWUpload = new QProgressBar(groupBox_FWUpload);
        prorgessBar_FWUpload->setObjectName(QStringLiteral("prorgessBar_FWUpload"));
        prorgessBar_FWUpload->setEnabled(true);
        prorgessBar_FWUpload->setValue(0);

        gridLayout_5->addWidget(prorgessBar_FWUpload, 3, 1, 1, 1);

        label_FWUploadProgressBar = new QLabel(groupBox_FWUpload);
        label_FWUploadProgressBar->setObjectName(QStringLiteral("label_FWUploadProgressBar"));
        label_FWUploadProgressBar->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_FWUploadProgressBar, 2, 1, 1, 1);

        pushButton_FWUpload = new QPushButton(groupBox_FWUpload);
        pushButton_FWUpload->setObjectName(QStringLiteral("pushButton_FWUpload"));
        pushButton_FWUpload->setEnabled(false);

        gridLayout_5->addWidget(pushButton_FWUpload, 3, 2, 1, 1);

        label_FWFileSelect = new QLabel(groupBox_FWUpload);
        label_FWFileSelect->setObjectName(QStringLiteral("label_FWFileSelect"));

        gridLayout_5->addWidget(label_FWFileSelect, 0, 0, 1, 1);

        checkBox_FastFlashUpdate = new QCheckBox(groupBox_FWUpload);
        checkBox_FastFlashUpdate->setObjectName(QStringLiteral("checkBox_FastFlashUpdate"));

        gridLayout_5->addWidget(checkBox_FastFlashUpdate, 1, 2, 1, 1);

        checkBox_SkipBootLoader = new QCheckBox(groupBox_FWUpload);
        checkBox_SkipBootLoader->setObjectName(QStringLiteral("checkBox_SkipBootLoader"));
        checkBox_SkipBootLoader->setEnabled(true);
        checkBox_SkipBootLoader->setChecked(true);

        gridLayout_5->addWidget(checkBox_SkipBootLoader, 1, 1, 1, 1);


        verticalLayout_31->addLayout(gridLayout_5);


        formLayout_12->setWidget(1, QFormLayout::LabelRole, groupBox_FWUpload);

        tabWidget_3->addTab(tab_FirmwareUpload, QString());

        verticalLayout_11->addWidget(tabWidget_3);

        tabWidget->addTab(tab_Image_Firmware, QString());
        tab_Additional_Resources = new QWidget();
        tab_Additional_Resources->setObjectName(QStringLiteral("tab_Additional_Resources"));
        formLayout_11 = new QFormLayout(tab_Additional_Resources);
        formLayout_11->setSpacing(6);
        formLayout_11->setContentsMargins(11, 11, 11, 11);
        formLayout_11->setObjectName(QStringLiteral("formLayout_11"));
        formLayout_11->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        label_AddResE2ELink = new QLabel(tab_Additional_Resources);
        label_AddResE2ELink->setObjectName(QStringLiteral("label_AddResE2ELink"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(label_AddResE2ELink->sizePolicy().hasHeightForWidth());
        label_AddResE2ELink->setSizePolicy(sizePolicy9);
        label_AddResE2ELink->setFrameShape(QFrame::NoFrame);
        label_AddResE2ELink->setFrameShadow(QFrame::Plain);
        label_AddResE2ELink->setWordWrap(true);
        label_AddResE2ELink->setOpenExternalLinks(true);

        gridLayout_17->addWidget(label_AddResE2ELink, 1, 1, 1, 1);

        label_AddResEVMLink = new QLabel(tab_Additional_Resources);
        label_AddResEVMLink->setObjectName(QStringLiteral("label_AddResEVMLink"));
        sizePolicy9.setHeightForWidth(label_AddResEVMLink->sizePolicy().hasHeightForWidth());
        label_AddResEVMLink->setSizePolicy(sizePolicy9);
        label_AddResEVMLink->setFrameShape(QFrame::NoFrame);
        label_AddResEVMLink->setFrameShadow(QFrame::Plain);
        label_AddResEVMLink->setWordWrap(true);
        label_AddResEVMLink->setOpenExternalLinks(true);

        gridLayout_17->addWidget(label_AddResEVMLink, 0, 1, 1, 1);

        label_AddResEVM = new QLabel(tab_Additional_Resources);
        label_AddResEVM->setObjectName(QStringLiteral("label_AddResEVM"));
        sizePolicy9.setHeightForWidth(label_AddResEVM->sizePolicy().hasHeightForWidth());
        label_AddResEVM->setSizePolicy(sizePolicy9);
        label_AddResEVM->setFrameShape(QFrame::NoFrame);
        label_AddResEVM->setFrameShadow(QFrame::Plain);
        label_AddResEVM->setWordWrap(true);
        label_AddResEVM->setOpenExternalLinks(true);

        gridLayout_17->addWidget(label_AddResEVM, 0, 0, 1, 1);

        label_AddResDHLink = new QLabel(tab_Additional_Resources);
        label_AddResDHLink->setObjectName(QStringLiteral("label_AddResDHLink"));
        sizePolicy9.setHeightForWidth(label_AddResDHLink->sizePolicy().hasHeightForWidth());
        label_AddResDHLink->setSizePolicy(sizePolicy9);
        label_AddResDHLink->setFrameShape(QFrame::NoFrame);
        label_AddResDHLink->setFrameShadow(QFrame::Plain);
        label_AddResDHLink->setWordWrap(true);
        label_AddResDHLink->setOpenExternalLinks(true);

        gridLayout_17->addWidget(label_AddResDHLink, 2, 1, 1, 1);

        label_AddResDH = new QLabel(tab_Additional_Resources);
        label_AddResDH->setObjectName(QStringLiteral("label_AddResDH"));
        sizePolicy9.setHeightForWidth(label_AddResDH->sizePolicy().hasHeightForWidth());
        label_AddResDH->setSizePolicy(sizePolicy9);
        label_AddResDH->setFrameShape(QFrame::NoFrame);
        label_AddResDH->setFrameShadow(QFrame::Plain);
        label_AddResDH->setWordWrap(true);
        label_AddResDH->setOpenExternalLinks(true);

        gridLayout_17->addWidget(label_AddResDH, 2, 0, 1, 1);

        label_AddResE2E = new QLabel(tab_Additional_Resources);
        label_AddResE2E->setObjectName(QStringLiteral("label_AddResE2E"));
        sizePolicy9.setHeightForWidth(label_AddResE2E->sizePolicy().hasHeightForWidth());
        label_AddResE2E->setSizePolicy(sizePolicy9);
        label_AddResE2E->setFrameShape(QFrame::NoFrame);
        label_AddResE2E->setFrameShadow(QFrame::Plain);
        label_AddResE2E->setWordWrap(true);
        label_AddResE2E->setOpenExternalLinks(true);

        gridLayout_17->addWidget(label_AddResE2E, 1, 0, 1, 1);

        gridLayout_17->setColumnStretch(0, 2);

        formLayout_11->setLayout(0, QFormLayout::LabelRole, gridLayout_17);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_11->setItem(0, QFormLayout::FieldRole, horizontalSpacer_11);

        tabWidget->addTab(tab_Additional_Resources, QString());
        tab_task1 = new QWidget();
        tab_task1->setObjectName(QStringLiteral("tab_task1"));
        pushButton_task1_firmware = new QPushButton(tab_task1);
        pushButton_task1_firmware->setObjectName(QStringLiteral("pushButton_task1_firmware"));
        pushButton_task1_firmware->setEnabled(true);
        pushButton_task1_firmware->setGeometry(QRect(30, 100, 221, 34));
        pushButton_task1_pattern = new QPushButton(tab_task1);
        pushButton_task1_pattern->setObjectName(QStringLiteral("pushButton_task1_pattern"));
        pushButton_task1_pattern->setEnabled(true);
        pushButton_task1_pattern->setGeometry(QRect(270, 100, 261, 34));
        pushButton_statInfo = new QPushButton(tab_task1);
        pushButton_statInfo->setObjectName(QStringLiteral("pushButton_statInfo"));
        pushButton_statInfo->setGeometry(QRect(30, 140, 112, 34));
        horizontalLayoutWidget = new QWidget(tab_task1);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 260, 451, 80));
        horizontalLayout_34 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        horizontalLayout_34->setContentsMargins(0, 0, 0, 0);
        pushButton_task2_firmware_make = new QPushButton(horizontalLayoutWidget);
        pushButton_task2_firmware_make->setObjectName(QStringLiteral("pushButton_task2_firmware_make"));
        pushButton_task2_firmware_make->setEnabled(true);

        horizontalLayout_34->addWidget(pushButton_task2_firmware_make);

        lineEdit_task2_FWtag = new QLineEdit(horizontalLayoutWidget);
        lineEdit_task2_FWtag->setObjectName(QStringLiteral("lineEdit_task2_FWtag"));

        horizontalLayout_34->addWidget(lineEdit_task2_FWtag);

        tabWidget->addTab(tab_task1, QString());

        verticalLayout_3->addWidget(tabWidget);


        verticalLayout_5->addLayout(verticalLayout_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_19->addWidget(scrollArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);
        tabWidget_2->setCurrentIndex(2);
        comboBox_PatSeqSelTrigType->setCurrentIndex(0);
        comboBox_VarExpPatSeqSelTrigType->setCurrentIndex(0);
        comboBox_i2cAddrMode->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DLP LC 4500 Custom Control Software", 0));
#ifndef QT_NO_TOOLTIP
        centralWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox_SystemCtrl->setTitle(QApplication::translate("MainWindow", "System Control", 0));
        label_API->setText(QApplication::translate("MainWindow", " Firmware Version:", 0));
        label_ApiVersion->setText(QApplication::translate("MainWindow", "XX.XX.XX", 0));
        pushButton_Connect->setText(QApplication::translate("MainWindow", "Connected", 0));
        pushButton_Reset->setText(QApplication::translate("MainWindow", "System Reset", 0));
        label_firmwareTag->setText(QApplication::translate("MainWindow", " Firmware Tag:", 0));
        label_firmwareTagInfo->setText(QApplication::translate("MainWindow", " XXX", 0));
        label_statusSeqRun->setText(QApplication::translate("MainWindow", "Seq. Running", 0));
        indicatorButton_statusSeqRun->setText(QString());
        indicatorButton_statusSeqErr->setText(QString());
        label_statusInitDone->setText(QApplication::translate("MainWindow", "Init Done", 0));
        indicatorButton_statusForcedSwap->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_statusForcedSwap->setToolTip(QApplication::translate("MainWindow", "Forced Swap : When highlighted red, the DLPC350 sequencer detected\n"
"a forced buffer swap error indicating that image data has been\n"
"displayed from the wrong internal display buffer. When highlighted\n"
"gray, no buffer swap error has occurred. This error can occur if\n"
"the DLP LightCrafter 4500 is set to Video Mode and the vertical\n"
"backporch timing is too small. The error can also occur if the DLP\n"
"LightCrafter 4500 is set to Pattern Sequence mode with patterns\n"
"input from the video port and pattern sequence timings do not \n"
"match the video port VSYNC.", 0));
#endif // QT_NO_TOOLTIP
        label_statusForcedSwap->setText(QApplication::translate("MainWindow", "Forced Swap", 0));
        indicatorButton_statusInitDone->setText(QString());
        label_statusSeqErr->setText(QApplication::translate("MainWindow", "Seq. Error", 0));
        indicatorButton_statusDmdParked->setText(QString());
        label_statusDrcErr->setText(QApplication::translate("MainWindow", "DRC Error", 0));
        label_statusDMDParked->setText(QApplication::translate("MainWindow", "DMD Parked", 0));
        indicatorButton_statusDrcErr->setText(QString());
        label_statusBufSwap->setText(QApplication::translate("MainWindow", "Buffer Freeze", 0));
        indicatorButton_statusBufFreeze->setText(QString());
        indicatorButton_statusSeqAbort->setText(QString());
        label_statusSeqAbort->setText(QApplication::translate("MainWindow", "Seq Abort", 0));
        checkBox_updateStatus->setText(QApplication::translate("MainWindow", "Auto Update Status", 0));
        groupBox_modeControl->setTitle(QApplication::translate("MainWindow", "Operating Mode", 0));
        radioButton_VideoMode->setText(QApplication::translate("MainWindow", "Video Mode", 0));
        radioButton_StandbyMode->setText(QApplication::translate("MainWindow", "Power Standby", 0));
        radioButton_VariableExpSLMode->setText(QApplication::translate("MainWindow", "Pattern Sequence [Variable Exposure]", 0));
        radioButton_SLMode->setText(QApplication::translate("MainWindow", "Pattern Sequence", 0));
        groupBox_ImageSetting->setTitle(QApplication::translate("MainWindow", "Image Orientation", 0));
        checkBox_shortAxisFlip->setText(QApplication::translate("MainWindow", "North/South Flip", 0));
        checkBox_longAxisFlip->setText(QApplication::translate("MainWindow", "East/West Flip", 0));
        pushButton_GetFlip->setText(QApplication::translate("MainWindow", "Get", 0));
        pushButton_SetFlip->setText(QApplication::translate("MainWindow", "Set", 0));
        groupBox_LEDDriverCtrl->setTitle(QApplication::translate("MainWindow", "LED Driver Control", 0));
        groupBox_LEDCurrentCtrl->setTitle(QApplication::translate("MainWindow", "LED Current (0-255)", 0));
        label_LEDRed->setText(QApplication::translate("MainWindow", "Red", 0));
        lineEdit_RedLEDCurrent->setText(QApplication::translate("MainWindow", "0", 0));
        label_LEDGreen->setText(QApplication::translate("MainWindow", "Green", 0));
        lineEdit_GreenLEDCurrent->setText(QApplication::translate("MainWindow", "0", 0));
        label_LEDBlue->setText(QApplication::translate("MainWindow", "Blue", 0));
        lineEdit_BlueLEDCurrent->setText(QApplication::translate("MainWindow", "0", 0));
#ifndef QT_NO_TOOLTIP
        checkBox_LedPwmInvert->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>This command is to compensate some LED design problem that PWM and current are swapped. PWM 0 corresponds to max current and PWM 255 corresponds to 0 current. The default behavior \342\200\234Not checked\342\200\235 means PWM and current are in correct order, PWM 0 corresponds to current 0. This command needs to be sent before power up the system or before set LED maximum DC or LED current controls. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBox_LedPwmInvert->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'Times New Roman'; font-size:7pt;\"/>This command is to compensate some LED design problem that PWM and current are swapped. PWM 0 corresponds to max current and PWM 255 corresponds to 0 current. The default behavior \342\200\234Pass through\342\200\235 means PWM and current are in correct order, PWM 0 corresponds to current 0. This command needs to be sent before power up the system or before set LED maximum DC or LED current controls. </p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        checkBox_LedPwmInvert->setText(QApplication::translate("MainWindow", "Invert PWMs", 0));
        groupBox_LEDEnSelect->setTitle(QApplication::translate("MainWindow", "LED Selection", 0));
        radioButton_ColorDisplayAuto->setText(QApplication::translate("MainWindow", "Automatic", 0));
        radioButton_ColorDisplayManual->setText(QApplication::translate("MainWindow", "Manual", 0));
        checkBox_RedEnable->setText(QApplication::translate("MainWindow", "Red", 0));
        checkBox_GreenEnable->setText(QApplication::translate("MainWindow", "Green", 0));
        checkBox_BlueEnable->setText(QApplication::translate("MainWindow", "Blue", 0));
        pushButton_GetLEDConfiguration->setText(QApplication::translate("MainWindow", "Get", 0));
        pushButton_SetLEDConfiguration->setText(QApplication::translate("MainWindow", "Set", 0));
        label_task1_firmware->setText(QApplication::translate("MainWindow", "In pattern mode, buttons can change this text", 0));
        pushButton_ApplySolution->setText(QApplication::translate("MainWindow", "Apply Solution", 0));
        pushButton_SaveSolution->setText(QApplication::translate("MainWindow", "Save Solution", 0));
        pushButton_ApplyDefaultSolution->setText(QApplication::translate("MainWindow", "Apply Default Solution", 0));
        groupBox_InputConfiguration->setTitle(QApplication::translate("MainWindow", "Input Configuration", 0));
        groupBox_ClockSelect->setTitle(QApplication::translate("MainWindow", "Clock Select", 0));
        comboBox_PortClockList->clear();
        comboBox_PortClockList->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "P1_CLKA", 0)
         << QApplication::translate("MainWindow", "P1_CLKB", 0)
         << QApplication::translate("MainWindow", "P1_CLKC", 0)
        );
#ifndef QT_NO_TOOLTIP
        comboBox_PortClockList->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        comboBox_PortClockList->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pushButton_GetPortClock->setText(QApplication::translate("MainWindow", "Get", 0));
        pushButton_SetPortClock->setText(QApplication::translate("MainWindow", "Set", 0));
        groupBox_PixelFormat->setTitle(QApplication::translate("MainWindow", "Pixel Data Format", 0));
        comboBox_PixelFormatList->clear();
        comboBox_PixelFormatList->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "RGB 444", 0)
         << QApplication::translate("MainWindow", "YUV 444", 0)
         << QApplication::translate("MainWindow", "YUV 422", 0)
        );
        pushButton_GetPortPixelFormat->setText(QApplication::translate("MainWindow", "Get", 0));
        pushButton_SetPortPixelFormat->setText(QApplication::translate("MainWindow", "Set", 0));
        groupBox_SourceSelect->setTitle(QApplication::translate("MainWindow", "Source Select", 0));
        comboBox_InputSourceList->clear();
        comboBox_InputSourceList->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Parallel RGB", 0)
         << QApplication::translate("MainWindow", "Internal Test Pattern", 0)
         << QApplication::translate("MainWindow", "Images from Flash", 0)
         << QApplication::translate("MainWindow", "LVDS/FPDLink", 0)
        );
        comboBox_InputSourceOptionList->clear();
        comboBox_InputSourceOptionList->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "30 BITS", 0)
         << QApplication::translate("MainWindow", "24 BITS", 0)
         << QApplication::translate("MainWindow", "20 BITS", 0)
         << QApplication::translate("MainWindow", "16 BITS", 0)
         << QApplication::translate("MainWindow", "10 BITS", 0)
         << QApplication::translate("MainWindow", "8 BITS", 0)
        );
        pushButton_GetPortSource->setText(QApplication::translate("MainWindow", "Get", 0));
        pushButton_SetPortSource->setText(QApplication::translate("MainWindow", "Set", 0));
        groupBox_PortDataSwap->setTitle(QApplication::translate("MainWindow", "Input Port Data Swap", 0));
        comboBox_SwapSelectList->clear();
        comboBox_SwapSelectList->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ABC->ABC", 0)
         << QApplication::translate("MainWindow", "ABC->CAB", 0)
         << QApplication::translate("MainWindow", "ABC->BCA", 0)
         << QApplication::translate("MainWindow", "ABC->ACB", 0)
         << QApplication::translate("MainWindow", "ABC->BAC", 0)
         << QApplication::translate("MainWindow", "ABC->CBA", 0)
        );
        pushButton_GetPortSwap->setText(QApplication::translate("MainWindow", "Get", 0));
        pushButton_SetPortSwap->setText(QApplication::translate("MainWindow", "Set", 0));
#ifndef QT_NO_TOOLTIP
        groupBox_DisplayDimension->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox_DisplayDimension->setTitle(QApplication::translate("MainWindow", "Display Dimensions", 0));
        label_DispLinesPerFrame->setText(QApplication::translate("MainWindow", "Lines Per Frame", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_CropAreaLinesPerFrame->setToolTip(QApplication::translate("MainWindow", "Range : 0 - Y Resolution", 0));
#endif // QT_NO_TOOLTIP
        lineEdit_CropAreaLinesPerFrame->setText(QApplication::translate("MainWindow", "0", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_DispAreaPixPerFrame->setToolTip(QApplication::translate("MainWindow", "Range :  0 - (Y Resolution - Start)", 0));
#endif // QT_NO_TOOLTIP
        lineEdit_DispAreaPixPerFrame->setText(QApplication::translate("MainWindow", "0", 0));
        label_DispFirstPix->setText(QApplication::translate("MainWindow", "Start Pixel", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_DispAreaFirstLine->setToolTip(QApplication::translate("MainWindow", "Range : 0 - (X Resolution - Start)", 0));
#endif // QT_NO_TOOLTIP
        lineEdit_DispAreaFirstLine->setText(QApplication::translate("MainWindow", "0", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_DispAreaLinesPerFrame->setToolTip(QApplication::translate("MainWindow", "Range : 0 - Y Resolution", 0));
#endif // QT_NO_TOOLTIP
        lineEdit_DispAreaLinesPerFrame->setText(QApplication::translate("MainWindow", "0", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_CropAreaPixelsPerLine->setToolTip(QApplication::translate("MainWindow", "Range :  0 - (Y Resolution - Start)", 0));
#endif // QT_NO_TOOLTIP
        lineEdit_CropAreaPixelsPerLine->setText(QApplication::translate("MainWindow", "0", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_CropAreaFirstLine->setToolTip(QApplication::translate("MainWindow", "Range : 0 - (X Resolution - Start)", 0));
#endif // QT_NO_TOOLTIP
        lineEdit_CropAreaFirstLine->setText(QApplication::translate("MainWindow", "0", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_CropAreaFirstPix->setToolTip(QApplication::translate("MainWindow", "Range : 0 - X Resolution", 0));
#endif // QT_NO_TOOLTIP
        lineEdit_CropAreaFirstPix->setText(QApplication::translate("MainWindow", "0", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_DispAreaFirstPixel->setToolTip(QApplication::translate("MainWindow", "Range : 0 - X Resolution", 0));
#endif // QT_NO_TOOLTIP
        lineEdit_DispAreaFirstPixel->setText(QApplication::translate("MainWindow", "0", 0));
        label_DispArea->setText(QApplication::translate("MainWindow", "Display Area", 0));
        label_CropArea->setText(QApplication::translate("MainWindow", "Cropped Area", 0));
        label_DispFirstLine->setText(QApplication::translate("MainWindow", "Start Line", 0));
        label_DispPixPerLine->setText(QApplication::translate("MainWindow", "Pixels Per Line", 0));
        pushButton_GetDisplayConfiguration->setText(QApplication::translate("MainWindow", "Get", 0));
        pushButton_SetDisplayConfiguration->setText(QApplication::translate("MainWindow", "Set", 0));
#ifndef QT_NO_TOOLTIP
        groupBox_TPG->setToolTip(QApplication::translate("MainWindow", "Fill Screen With Color (R,G,B)", 0));
#endif // QT_NO_TOOLTIP
        groupBox_TPG->setTitle(QApplication::translate("MainWindow", "Internal Test Pattern Color", 0));
        label_TPGColorForeground->setText(QApplication::translate("MainWindow", "Foreground", 0));
        label_TPGColorBlue->setText(QApplication::translate("MainWindow", "Blue", 0));
        label_TPGColorGreen->setText(QApplication::translate("MainWindow", "Green", 0));
        label_TPGColorRed->setText(QApplication::translate("MainWindow", "Red", 0));
        label_TPGColorBackground->setText(QApplication::translate("MainWindow", "Background", 0));
        pushButton_GetTPGColor->setText(QApplication::translate("MainWindow", "Get", 0));
        pushButton_SetTPGColor->setText(QApplication::translate("MainWindow", "Set", 0));
        groupBox_FPDModeAndFieldSelect->setTitle(QApplication::translate("MainWindow", "FPD Mode and Field Select", 0));
        comboBox_FPDFieldSelectList->clear();
        comboBox_FPDFieldSelectList->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "FIELD SIGNAL FROM CONT1", 0)
         << QApplication::translate("MainWindow", "FIELD SIGNAL FROM CONT2", 0)
         << QApplication::translate("MainWindow", "FIELD SIGNAL TO LOW", 0)
        );
        checkBox_FPDInvPol->setText(QApplication::translate("MainWindow", "Invert Data Polarity", 0));
        label_FPDPixMode->setText(QApplication::translate("MainWindow", "Pixel Mode", 0));
        pushButton_GetFPDMode->setText(QApplication::translate("MainWindow", "Get", 0));
        pushButton_SetFPDMode->setText(QApplication::translate("MainWindow", "Set", 0));
        groupBox_VideoSignalInfo->setTitle(QApplication::translate("MainWindow", "Video Signal Information", 0));
        lineEdit_VidActvFirstPix->setText(QApplication::translate("MainWindow", "0", 0));
        label_VidRsvd->setText(QApplication::translate("MainWindow", "RESERVED", 0));
        label_VidActvFirstPix->setText(QApplication::translate("MainWindow", "First Active Pixel", 0));
        label_VidActvPxPerLineInPix->setText(QApplication::translate("MainWindow", "in Pixels", 0));
        label_VidHPol->setText(QApplication::translate("MainWindow", "HSYNC Polarity", 0));
        lineEdit_VidActvLinesPerFrame->setText(QApplication::translate("MainWindow", "0", 0));
        lineEdit_VidVFreq->setText(QApplication::translate("MainWindow", "0", 0));
        label_VidHResInPix->setText(QApplication::translate("MainWindow", "in Pixels", 0));
        label_VidPixPerLineInPix->setText(QApplication::translate("MainWindow", "in Pixels", 0));
        label_VidPixClkinMHz->setText(QApplication::translate("MainWindow", "in MHz", 0));
        label_VidVFreInHz->setText(QApplication::translate("MainWindow", "in Hz", 0));
        lineEdit_VidRsvd->setText(QApplication::translate("MainWindow", "0", 0));
        lineEdit_VidActvPixPerLine->setText(QApplication::translate("MainWindow", "0", 0));
        pushButton_GetVideoSingalInfo->setText(QApplication::translate("MainWindow", "Get Video Info", 0));
        label_VidActvPixPerLine->setText(QApplication::translate("MainWindow", "Active Pixels Per Line", 0));
        label_VidActvPixPerFrameInPix->setText(QApplication::translate("MainWindow", "in Pixels", 0));
        label_VidActvFirstLine->setText(QApplication::translate("MainWindow", "First Active Line", 0));
        label_VidSigStatus->setText(QApplication::translate("MainWindow", "Signal Status", 0));
        lineEdit_VidLinesPerFrame->setText(QApplication::translate("MainWindow", "0", 0));
        label_VidVPol->setText(QApplication::translate("MainWindow", "VSYNC Polarity", 0));
        label_VidVFreq->setText(QApplication::translate("MainWindow", "Vertical Frequency", 0));
        label_VidActvLinesPerFrame->setText(QApplication::translate("MainWindow", "Active Pixels Per Frame", 0));
        label_VidPixClk->setText(QApplication::translate("MainWindow", "Pixel Clock", 0));
        label_VidPixPerLine->setText(QApplication::translate("MainWindow", "Total Pixels Per Line", 0));
        label_VidLinesPerFrame->setText(QApplication::translate("MainWindow", "Total Lines Per Frame", 0));
        lineEdit_VidPixPerLine->setText(QApplication::translate("MainWindow", "0", 0));
        label_VidHFreq->setText(QApplication::translate("MainWindow", "Horizontal Frequency", 0));
        label_VidHFreInKHz->setText(QApplication::translate("MainWindow", "in KHz", 0));
        label_VidStatus->setText(QApplication::translate("MainWindow", "Status", 0));
        lineEdit_VidVRes->setText(QApplication::translate("MainWindow", "0", 0));
        comboBox_VidLockSatus->clear();
        comboBox_VidLockSatus->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Stopped", 0)
         << QApplication::translate("MainWindow", "Processing", 0)
         << QApplication::translate("MainWindow", "Detected", 0)
         << QApplication::translate("MainWindow", "Lock Failed", 0)
        );
        label_VidVRes->setText(QApplication::translate("MainWindow", "Vertical Resolution", 0));
        label_VidHRes->setText(QApplication::translate("MainWindow", "Horizontal Resolution", 0));
        label_VidLinesPerFramInPix->setText(QApplication::translate("MainWindow", "in Pixels", 0));
        lineEdit_VidHRes->setText(QApplication::translate("MainWindow", "0", 0));
        label_VResInPix->setText(QApplication::translate("MainWindow", "in Pixels", 0));
        lineEdit_VidHFreq->setText(QApplication::translate("MainWindow", "0", 0));
        comboBox_VidHPol->clear();
        comboBox_VidHPol->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Negative", 0)
         << QApplication::translate("MainWindow", "Positive", 0)
        );
        lineEdit_VidActvFirstLine->setText(QApplication::translate("MainWindow", "0", 0));
        comboBox_VidVPol->clear();
        comboBox_VidVPol->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Negative", 0)
         << QApplication::translate("MainWindow", "Positive", 0)
        );
        lineEdit_VidPixClk->setText(QApplication::translate("MainWindow", "0", 0));
        label_VidActvFirstPixPos->setText(QApplication::translate("MainWindow", "Pixel Position", 0));
        label_VidActvFirsLinePos->setText(QApplication::translate("MainWindow", "Line Position", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_Video_Mode), QApplication::translate("MainWindow", "Video Mode", 0));
        groupBox_PatSeqSel->setTitle(QApplication::translate("MainWindow", "Individual Pattern Settings", 0));
        comboBox_PatSeqSelPatColor->clear();
        comboBox_PatSeqSelPatColor->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Choose Color", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "White", 0)
        );
        comboBox_PatSeqSelTrigType->clear();
        comboBox_PatSeqSelTrigType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Internal Trigger", 0)
         << QApplication::translate("MainWindow", "External Positive", 0)
         << QApplication::translate("MainWindow", "External Negative", 0)
         << QApplication::translate("MainWindow", "No Trigger", 0)
        );
        groupBox_PatSeqBitPlaneSel->setTitle(QApplication::translate("MainWindow", "Bit Plane Selection", 0));
        label_PatSeqFrmOrImgIndex->setText(QApplication::translate("MainWindow", "Image Index", 0));
        label_PatSeqPatBitDepthSel->setText(QApplication::translate("MainWindow", "Bit Depth", 0));
        comboBox_PatSeqPatBitDepthSel->clear();
        comboBox_PatSeqPatBitDepthSel->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "8", 0)
        );
        label_PatSeqBitPlaneNum->setText(QApplication::translate("MainWindow", "Bit Plane", 0));
        comboBox_PatSeqBitPlaneNum->clear();
        comboBox_PatSeqBitPlaneNum->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "G0", 0)
         << QApplication::translate("MainWindow", "G1", 0)
         << QApplication::translate("MainWindow", "G2", 0)
         << QApplication::translate("MainWindow", "G3", 0)
         << QApplication::translate("MainWindow", "G4", 0)
         << QApplication::translate("MainWindow", "G5", 0)
         << QApplication::translate("MainWindow", "G6", 0)
         << QApplication::translate("MainWindow", "G7", 0)
         << QApplication::translate("MainWindow", "R0", 0)
         << QApplication::translate("MainWindow", "R1", 0)
         << QApplication::translate("MainWindow", "R2", 0)
         << QApplication::translate("MainWindow", "R3", 0)
         << QApplication::translate("MainWindow", "R4", 0)
         << QApplication::translate("MainWindow", "R5", 0)
         << QApplication::translate("MainWindow", "R6", 0)
         << QApplication::translate("MainWindow", "R7", 0)
         << QApplication::translate("MainWindow", "B0", 0)
         << QApplication::translate("MainWindow", "B1", 0)
         << QApplication::translate("MainWindow", "B2", 0)
         << QApplication::translate("MainWindow", "B3", 0)
         << QApplication::translate("MainWindow", "B4", 0)
         << QApplication::translate("MainWindow", "B5", 0)
         << QApplication::translate("MainWindow", "B6", 0)
         << QApplication::translate("MainWindow", "B7", 0)
        );

        const bool __sortingEnabled = listWidget_PatSeqBitPlanes->isSortingEnabled();
        listWidget_PatSeqBitPlanes->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_PatSeqBitPlanes->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "G0", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_PatSeqBitPlanes->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "G1", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_PatSeqBitPlanes->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "G2", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_PatSeqBitPlanes->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "G3", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_PatSeqBitPlanes->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "G4", 0));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_PatSeqBitPlanes->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "G5", 0));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_PatSeqBitPlanes->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "G6", 0));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_PatSeqBitPlanes->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "G7", 0));
        QListWidgetItem *___qlistwidgetitem8 = listWidget_PatSeqBitPlanes->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "R0", 0));
        QListWidgetItem *___qlistwidgetitem9 = listWidget_PatSeqBitPlanes->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "R1", 0));
        QListWidgetItem *___qlistwidgetitem10 = listWidget_PatSeqBitPlanes->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "R2", 0));
        QListWidgetItem *___qlistwidgetitem11 = listWidget_PatSeqBitPlanes->item(11);
        ___qlistwidgetitem11->setText(QApplication::translate("MainWindow", "R3", 0));
        QListWidgetItem *___qlistwidgetitem12 = listWidget_PatSeqBitPlanes->item(12);
        ___qlistwidgetitem12->setText(QApplication::translate("MainWindow", "R4", 0));
        QListWidgetItem *___qlistwidgetitem13 = listWidget_PatSeqBitPlanes->item(13);
        ___qlistwidgetitem13->setText(QApplication::translate("MainWindow", "R5", 0));
        QListWidgetItem *___qlistwidgetitem14 = listWidget_PatSeqBitPlanes->item(14);
        ___qlistwidgetitem14->setText(QApplication::translate("MainWindow", "R6", 0));
        QListWidgetItem *___qlistwidgetitem15 = listWidget_PatSeqBitPlanes->item(15);
        ___qlistwidgetitem15->setText(QApplication::translate("MainWindow", "R7", 0));
        QListWidgetItem *___qlistwidgetitem16 = listWidget_PatSeqBitPlanes->item(16);
        ___qlistwidgetitem16->setText(QApplication::translate("MainWindow", "B0", 0));
        QListWidgetItem *___qlistwidgetitem17 = listWidget_PatSeqBitPlanes->item(17);
        ___qlistwidgetitem17->setText(QApplication::translate("MainWindow", "B1", 0));
        QListWidgetItem *___qlistwidgetitem18 = listWidget_PatSeqBitPlanes->item(18);
        ___qlistwidgetitem18->setText(QApplication::translate("MainWindow", "B2", 0));
        QListWidgetItem *___qlistwidgetitem19 = listWidget_PatSeqBitPlanes->item(19);
        ___qlistwidgetitem19->setText(QApplication::translate("MainWindow", "B3", 0));
        QListWidgetItem *___qlistwidgetitem20 = listWidget_PatSeqBitPlanes->item(20);
        ___qlistwidgetitem20->setText(QApplication::translate("MainWindow", "B4", 0));
        QListWidgetItem *___qlistwidgetitem21 = listWidget_PatSeqBitPlanes->item(21);
        ___qlistwidgetitem21->setText(QApplication::translate("MainWindow", "B5", 0));
        QListWidgetItem *___qlistwidgetitem22 = listWidget_PatSeqBitPlanes->item(22);
        ___qlistwidgetitem22->setText(QApplication::translate("MainWindow", "B6", 0));
        QListWidgetItem *___qlistwidgetitem23 = listWidget_PatSeqBitPlanes->item(23);
        ___qlistwidgetitem23->setText(QApplication::translate("MainWindow", "B7", 0));
        listWidget_PatSeqBitPlanes->setSortingEnabled(__sortingEnabled);

#ifndef QT_NO_TOOLTIP
        listWidget_PatSeqBitPlanes->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Click on the desired group to add to sequence</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        checkBox_PatSeqInvPatData->setText(QApplication::translate("MainWindow", "Invert Pattern Data", 0));
#ifndef QT_NO_TOOLTIP
        checkBox_PatSeqInsBlackPat->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>You can change this individually later by right clicking on the pattern in the Sequence box below.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        checkBox_PatSeqInsBlackPat->setText(QApplication::translate("MainWindow", "Clear DMD after exposure", 0));
        pushButton_PatSeqAddPatToLut->setText(QApplication::translate("MainWindow", "Add Pattern to Sequence", 0));
        groupBox_PatSeqDispLUT->setTitle(QApplication::translate("MainWindow", "Pattern Sequence", 0));
        pushButton_PatSeqSendLUT->setText(QApplication::translate("MainWindow", "Send", 0));
        pushButton_PatSeqReadLUTFrmHW->setText(QApplication::translate("MainWindow", "Read", 0));
        pushButton_PatSeqClearLUTFrmGUI->setText(QApplication::translate("MainWindow", "Clear", 0));
        radioButton_PatSeqDispRunOnce->setText(QApplication::translate("MainWindow", "Play Once", 0));
        radioButton_PatSeqDispRunContinuous->setText(QApplication::translate("MainWindow", "Repeat", 0));
        groupBox_PatSeqSourceAndTrigSel->setTitle(QApplication::translate("MainWindow", "Sequence Settings", 0));
        groupBox_PatSeqPatSrc->setTitle(QApplication::translate("MainWindow", "Pattern Source", 0));
        radioButton_PatSeqSrcFrmFlash->setText(QApplication::translate("MainWindow", "Flash", 0));
        radioButton_PatSeqSrcFrmVideoPort->setText(QApplication::translate("MainWindow", "Video port", 0));
        groupBox_PatSeqTrigMode->setTitle(QApplication::translate("MainWindow", "Trigger Mode [ 0 or 1 ]", 0));
        radioButton_PatSeqTrigTypeIntExt->setText(QApplication::translate("MainWindow", "Internal/External", 0));
        radioButton_PatSeqTrigTypeVSync->setText(QApplication::translate("MainWindow", "Vsync", 0));
        groupBox_PatSeqPatDispTiming->setTitle(QApplication::translate("MainWindow", "Timing", 0));
        label_PatSeqPatPeriod->setText(QApplication::translate("MainWindow", "Pattern Period (us)", 0));
        lineEdit_PatSeqPatPeriod->setPlaceholderText(QApplication::translate("MainWindow", "10000", 0));
        label_PatSeqPatExpTime->setText(QApplication::translate("MainWindow", "Pattern Exposure (us)", 0));
        lineEdit_PatSeqPatExpTime->setPlaceholderText(QApplication::translate("MainWindow", "10000", 0));
        label_PatSeqNote->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Use Send to update hardware and Read to retrieve sequence settings</p></body></html>", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_pat_seq_seq_settings), QApplication::translate("MainWindow", "Sequence Settings", 0));
        groupBox_VarExpPatSeqSel->setTitle(QApplication::translate("MainWindow", "Individual Pattern Settings", 0));
        comboBox_VarExpPatSeqSelPatColor->clear();
        comboBox_VarExpPatSeqSelPatColor->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Pat Color", 0)
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Yellow", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
         << QApplication::translate("MainWindow", "Magenta", 0)
         << QApplication::translate("MainWindow", "Cyan", 0)
         << QApplication::translate("MainWindow", "White", 0)
        );
        comboBox_VarExpPatSeqSelPatColor->setCurrentText(QApplication::translate("MainWindow", "Pat Color", 0));
        comboBox_VarExpPatSeqSelTrigType->clear();
        comboBox_VarExpPatSeqSelTrigType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Internal Trigger", 0)
         << QApplication::translate("MainWindow", "External Positive", 0)
         << QApplication::translate("MainWindow", "External Negative", 0)
         << QApplication::translate("MainWindow", "No Trigger", 0)
        );
        label_VarExpPatSeqFrmOrImgIndex->setText(QApplication::translate("MainWindow", "Image Index", 0));
        label_VarExpPatSeqPatBitDepthSel->setText(QApplication::translate("MainWindow", "Bit Depth", 0));
        comboBox_VarExpPatSeqPatBitDepthSel->clear();
        comboBox_VarExpPatSeqPatBitDepthSel->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "8", 0)
        );

        const bool __sortingEnabled1 = listWidget_VarExpPatSeqBitPlanes->isSortingEnabled();
        listWidget_VarExpPatSeqBitPlanes->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem24 = listWidget_VarExpPatSeqBitPlanes->item(0);
        ___qlistwidgetitem24->setText(QApplication::translate("MainWindow", "G0", 0));
        QListWidgetItem *___qlistwidgetitem25 = listWidget_VarExpPatSeqBitPlanes->item(1);
        ___qlistwidgetitem25->setText(QApplication::translate("MainWindow", "G1", 0));
        QListWidgetItem *___qlistwidgetitem26 = listWidget_VarExpPatSeqBitPlanes->item(2);
        ___qlistwidgetitem26->setText(QApplication::translate("MainWindow", "G2", 0));
        QListWidgetItem *___qlistwidgetitem27 = listWidget_VarExpPatSeqBitPlanes->item(3);
        ___qlistwidgetitem27->setText(QApplication::translate("MainWindow", "G3", 0));
        QListWidgetItem *___qlistwidgetitem28 = listWidget_VarExpPatSeqBitPlanes->item(4);
        ___qlistwidgetitem28->setText(QApplication::translate("MainWindow", "G4", 0));
        QListWidgetItem *___qlistwidgetitem29 = listWidget_VarExpPatSeqBitPlanes->item(5);
        ___qlistwidgetitem29->setText(QApplication::translate("MainWindow", "G5", 0));
        QListWidgetItem *___qlistwidgetitem30 = listWidget_VarExpPatSeqBitPlanes->item(6);
        ___qlistwidgetitem30->setText(QApplication::translate("MainWindow", "G6", 0));
        QListWidgetItem *___qlistwidgetitem31 = listWidget_VarExpPatSeqBitPlanes->item(7);
        ___qlistwidgetitem31->setText(QApplication::translate("MainWindow", "G7", 0));
        QListWidgetItem *___qlistwidgetitem32 = listWidget_VarExpPatSeqBitPlanes->item(8);
        ___qlistwidgetitem32->setText(QApplication::translate("MainWindow", "R0", 0));
        QListWidgetItem *___qlistwidgetitem33 = listWidget_VarExpPatSeqBitPlanes->item(9);
        ___qlistwidgetitem33->setText(QApplication::translate("MainWindow", "R1", 0));
        QListWidgetItem *___qlistwidgetitem34 = listWidget_VarExpPatSeqBitPlanes->item(10);
        ___qlistwidgetitem34->setText(QApplication::translate("MainWindow", "R2", 0));
        QListWidgetItem *___qlistwidgetitem35 = listWidget_VarExpPatSeqBitPlanes->item(11);
        ___qlistwidgetitem35->setText(QApplication::translate("MainWindow", "R3", 0));
        QListWidgetItem *___qlistwidgetitem36 = listWidget_VarExpPatSeqBitPlanes->item(12);
        ___qlistwidgetitem36->setText(QApplication::translate("MainWindow", "R4", 0));
        QListWidgetItem *___qlistwidgetitem37 = listWidget_VarExpPatSeqBitPlanes->item(13);
        ___qlistwidgetitem37->setText(QApplication::translate("MainWindow", "R5", 0));
        QListWidgetItem *___qlistwidgetitem38 = listWidget_VarExpPatSeqBitPlanes->item(14);
        ___qlistwidgetitem38->setText(QApplication::translate("MainWindow", "R6", 0));
        QListWidgetItem *___qlistwidgetitem39 = listWidget_VarExpPatSeqBitPlanes->item(15);
        ___qlistwidgetitem39->setText(QApplication::translate("MainWindow", "R7", 0));
        QListWidgetItem *___qlistwidgetitem40 = listWidget_VarExpPatSeqBitPlanes->item(16);
        ___qlistwidgetitem40->setText(QApplication::translate("MainWindow", "B0", 0));
        QListWidgetItem *___qlistwidgetitem41 = listWidget_VarExpPatSeqBitPlanes->item(17);
        ___qlistwidgetitem41->setText(QApplication::translate("MainWindow", "B1", 0));
        QListWidgetItem *___qlistwidgetitem42 = listWidget_VarExpPatSeqBitPlanes->item(18);
        ___qlistwidgetitem42->setText(QApplication::translate("MainWindow", "B2", 0));
        QListWidgetItem *___qlistwidgetitem43 = listWidget_VarExpPatSeqBitPlanes->item(19);
        ___qlistwidgetitem43->setText(QApplication::translate("MainWindow", "B3", 0));
        QListWidgetItem *___qlistwidgetitem44 = listWidget_VarExpPatSeqBitPlanes->item(20);
        ___qlistwidgetitem44->setText(QApplication::translate("MainWindow", "B4", 0));
        QListWidgetItem *___qlistwidgetitem45 = listWidget_VarExpPatSeqBitPlanes->item(21);
        ___qlistwidgetitem45->setText(QApplication::translate("MainWindow", "B5", 0));
        QListWidgetItem *___qlistwidgetitem46 = listWidget_VarExpPatSeqBitPlanes->item(22);
        ___qlistwidgetitem46->setText(QApplication::translate("MainWindow", "B6", 0));
        QListWidgetItem *___qlistwidgetitem47 = listWidget_VarExpPatSeqBitPlanes->item(23);
        ___qlistwidgetitem47->setText(QApplication::translate("MainWindow", "B7", 0));
        listWidget_VarExpPatSeqBitPlanes->setSortingEnabled(__sortingEnabled1);

#ifndef QT_NO_TOOLTIP
        listWidget_VarExpPatSeqBitPlanes->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Click on the desired group to add to sequence</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_VarExpPatSeqPatExpTime->setText(QApplication::translate("MainWindow", "Pat Exposure", 0));
        lineEdit_VarExpPatSeqPatExpTime->setPlaceholderText(QApplication::translate("MainWindow", "10000", 0));
        label_VarExpPatSeqPatPeriod->setText(QApplication::translate("MainWindow", "Pat Period", 0));
        lineEdit_VarExpPatSeqPatPeriod->setPlaceholderText(QApplication::translate("MainWindow", "10000", 0));
        checkBox_VarExpPatSeqInvPatData->setText(QApplication::translate("MainWindow", "Invert Pattern Data", 0));
#ifndef QT_NO_TOOLTIP
        checkBox_VarExpPatSeqInsBlackPat->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>You can change this individually later by right clicking on the pattern in the Sequence box below.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        checkBox_VarExpPatSeqInsBlackPat->setText(QApplication::translate("MainWindow", "Clear DMD after exposure", 0));
        pushButton_VarExpPatSeqAddPatToLut->setText(QApplication::translate("MainWindow", "Add Pattern to Sequence", 0));
        seqGroupBox_4->setTitle(QApplication::translate("MainWindow", "Pattern Sequence", 0));
        pushButton_VarExpPatSeqSendLUT->setText(QApplication::translate("MainWindow", "Send", 0));
        pushButton_VarExpPatSeqReadLUTFrmHW->setText(QApplication::translate("MainWindow", "Read", 0));
        pushButton_VarExpPatSeqClearLUTFrmGUI->setText(QApplication::translate("MainWindow", "Clear", 0));
        radioButton_VarExpPatSeqDispRunOnce->setText(QApplication::translate("MainWindow", "Play Once", 0));
        radioButton_VarExpPatSeqDispRunContinuous->setText(QApplication::translate("MainWindow", "Repeat", 0));
        groupBox_VarExpPatSeqSourceAndTrigSel->setTitle(QApplication::translate("MainWindow", "Sequence Settings", 0));
        groupBox_VarExpPatSeqPatSrc->setTitle(QApplication::translate("MainWindow", "Pattern Source", 0));
        radioButton_VarExpPatSeqSrcFrmFlash->setText(QApplication::translate("MainWindow", "Flash", 0));
        radioButton_VarExpPatSeqSrcFrmVideoPort->setText(QApplication::translate("MainWindow", "Video port", 0));
        groupBox_VarExpPatSeqTrigMode->setTitle(QApplication::translate("MainWindow", "Trigger Mode [ 3 or 4 ]", 0));
        radioButton_VarExpPatSeqTrigTypeIntExt->setText(QApplication::translate("MainWindow", "Internal/External", 0));
        radioButton_VarExpPatSeqTrigTypeVSync->setText(QApplication::translate("MainWindow", "Vsync", 0));
        label_VarExpPatSeqNote->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Use Send to update hardware and Read to retrieve sequence settings</p></body></html>", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("MainWindow", "Sequence Settings [Variable Exposure]", 0));
        groupBox_PatSeqCtrl->setTitle(QApplication::translate("MainWindow", "Sequence Validation and Control", 0));
        pushButton_PatSeqValIndExpOOR->setText(QString());
        label_PatSeqValIndExpOOR->setText(QApplication::translate("MainWindow", "Exposure/Period OOR", 0));
        pushButton_PatSeqValIndPatNumOOR->setText(QString());
        label_PatSeqValIndPatNumOOR->setText(QApplication::translate("MainWindow", "Pattern Number OOR", 0));
        pushButton_PatSeqValIndTrigOutOverlap->setText(QString());
        label_PatSeqValIndTrigOutOverlap->setText(QApplication::translate("MainWindow", "Cont trig out overlaps black", 0));
        pushButton_PatSeqValIndBlkVecMiss->setText(QString());
        label_PatSeqValIndBlkVecMiss->setText(QApplication::translate("MainWindow", "Black vector missing", 0));
        pushButton_PatSeqValPatPeriodShort->setText(QString());
        label_PatSeqValPatPeriodShort->setText(QApplication::translate("MainWindow", "Period, Exposure diff < 230", 0));
        label_PatSeqValStatus->setText(QApplication::translate("MainWindow", "Sequence Validated", 0));
        pushButton_PatSeqValStatus->setText(QString());
        pushButton_ValidatePatSeq->setText(QApplication::translate("MainWindow", "Validate Sequence", 0));
        pushButton_PatSeqCtrlStart->setText(QApplication::translate("MainWindow", "Play", 0));
        pushButton_PatSeqCtrlPause->setText(QApplication::translate("MainWindow", "Pause", 0));
        pushButton_PatSeqCtrlStop->setText(QApplication::translate("MainWindow", "Stop", 0));
#ifndef QT_NO_TOOLTIP
        checkBox_PatSeqCtrlGlobalDataInvert->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>If set, will invert data for all patterns - i.e., data value 0 will turn ON the mirror and value 1 will turn off the mirror.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        checkBox_PatSeqCtrlGlobalDataInvert->setText(QApplication::translate("MainWindow", "Global Data Invert", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("MainWindow", "Pattern Sequence Start/Stop/Pause", 0));
        groupBox_ImgLoadTiming->setTitle(QApplication::translate("MainWindow", "Image Load Timing", 0));
        label_ImgLdTmImgIndex->setText(QApplication::translate("MainWindow", "Image Index", 0));
        pushButton_GetImgLoadTimingInfo->setText(QApplication::translate("MainWindow", "Get Load Image Timing", 0));
        label_ImgLdTmInMs->setText(QApplication::translate("MainWindow", "ms", 0));
        label_ImgLdTmNote1->setText(QApplication::translate("MainWindow", "Use this option to determine approximate time (in ms) required to load an image from Flash to frame memory.", 0));
        label_ImgLdTmNote2->setText(QApplication::translate("MainWindow", "Use this option when Pattern Sequence is NOT in not in running mode.", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_img_load_timing), QApplication::translate("MainWindow", "Image Load Timing", 0));
        label_TrigOut1FDly->setText(QApplication::translate("MainWindow", "Trigger 1 Out Falling Edge Delay", 0));
        label_Trig1OutFDlyVal->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", 0));
        label_Trig2OutRDlyVal->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", 0));
        checkBox_InvertTrig2Out->setText(QApplication::translate("MainWindow", "Invert Trigger 2 Output", 0));
        label_TrigOut2PulsePerNumPat->setText(QApplication::translate("MainWindow", "Trigger 2 Patterns per Pulse", 0));
        pushButton_GetTrigConfig->setText(QApplication::translate("MainWindow", "Get", 0));
        pushButton_SetTrigConfig->setText(QApplication::translate("MainWindow", "Set", 0));
        label_TrigOut2RDly->setText(QApplication::translate("MainWindow", "Trigger 2 Out Rising Edge Delay", 0));
        label_TrigIn1->setText(QApplication::translate("MainWindow", "Trigger 1 In Rising Edge Delay", 0));
        label_TrigOut1RDly->setText(QApplication::translate("MainWindow", "Trigger 1 Out Rising Edge Delay", 0));
        label_TrigIn2Pol->setText(QApplication::translate("MainWindow", "Trigger 2 In Polarity", 0));
        label_TrigIn1Value->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", 0));
        checkBox_InvertTrig1Out->setText(QApplication::translate("MainWindow", "Invert Trigger 1 Output", 0));
        label_Trig1OutRDlyVal->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", 0));
        comboBox_TrigIn2Pol->clear();
        comboBox_TrigIn2Pol->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "RISING", 0)
         << QApplication::translate("MainWindow", "FALLING", 0)
        );
        label_TrigIn2PolDesc->setText(QApplication::translate("MainWindow", "Applicable in Trigger Mode = 2; Advance pattern on set edge", 0));
        textEdit_TriggerCtrlNote->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; font-weight:600;\">Trigger Control settings applicable ONLY in [Pattern Sequence Mode]; applying settings in [Video Mode] causes undesired effect.</span><span style=\" font-size:8.25pt;\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:"
                        "8.25pt;\">Before updating Trigger Settings in Pattern Sequence Mode, first, [Stop] Pattern Display Sequence if it is running, then [SET] new the trigger settings, validate the new settings via [Validate Sequence] option under Pattern Sequence Start/Stop/Pause tab, then start the Pattern Display Sequence.</span></p></body></html>", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_pat_seq_trig_ctrl), QApplication::translate("MainWindow", "Trigger Controls", 0));
        pushButton_GetLEDDlyCtrlConfig->setText(QApplication::translate("MainWindow", "Get", 0));
        pushButton_SetLedDlyCtrlConfig->setText(QApplication::translate("MainWindow", "Set", 0));
        label_LedDlyCtrlRedREdgeDlyVal->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", 0));
        label_LedDlyCtrlBlueREdgeDlyVal->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", 0));
        label_LedDlyCtrlGreenREdgeDlyVal->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", 0));
        label_LedDlyCtrlRedFEdgeDlyVal->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", 0));
        label_LedDlyCtrlRedREdgeDly->setText(QApplication::translate("MainWindow", "Red LED Rising Edge Delay", 0));
        label_LedDlyCtrlGreenREdgeDly->setText(QApplication::translate("MainWindow", "Green LED Rising Edge Delay", 0));
        label_LedDlyCtrlBlueFEdgeDly->setText(QApplication::translate("MainWindow", "Blue LED Falling Edge Delay", 0));
        label_LedDlyCtrlRedFEdgeDly->setText(QApplication::translate("MainWindow", "Red LED Falling Edge Delay", 0));
        label_LedDlyCtrlGreenFEdgeDlyVal->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", 0));
        label_LedDlyCtrlBlueFEdgeDlyVal->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0.00 us</p></body></html>", 0));
        label_LedDlyCtrlGreenFEdgeDly->setText(QApplication::translate("MainWindow", "Green LED Falling Edge Delay", 0));
        label_LedDlyCtrlBlueREdgeDly->setText(QApplication::translate("MainWindow", "Blue LED Rising Edge Delay", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_pat_seq_led_dly), QApplication::translate("MainWindow", "LED Delay Control", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_Pattern_Seq), QApplication::translate("MainWindow", "Pattern Sequence", 0));
        groupBox_I2C0_Master->setTitle(QApplication::translate("MainWindow", "I2C0 (Master) Read/Write Control", 0));
        label_i2cDevAddr->setText(QApplication::translate("MainWindow", "Device Address (Hex)", 0));
        comboBox_i2cAddrMode->clear();
        comboBox_i2cAddrMode->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "7-Bit", 0)
         << QApplication::translate("MainWindow", "10-Bit", 0)
        );
        label_i2cBytesToRead->setText(QApplication::translate("MainWindow", "Bytes to Read", 0));
        label_i2cAddrMode->setText(QApplication::translate("MainWindow", "Addressing Mode", 0));
        label_i2cWriteData->setText(QApplication::translate("MainWindow", "Write Data (Hex)", 0));
        label_i2cReadData->setText(QApplication::translate("MainWindow", "Read Data (Hex)", 0));
        label_i2cClockRate->setText(QApplication::translate("MainWindow", "Clock Rate (Hz)", 0));
        pushButton_i2cRead->setText(QApplication::translate("MainWindow", "Read", 0));
        pushButton_i2cWrite->setText(QApplication::translate("MainWindow", "Write", 0));
        groupBox_PWMSetup->setTitle(QApplication::translate("MainWindow", "PWM Output Setup", 0));
        label_PWMPulsePeriod->setText(QApplication::translate("MainWindow", "Pulse period (1=53.57 ns)", 0));
        label_PWMDutyCycle->setText(QApplication::translate("MainWindow", "Duty Cycle", 0));
        checkBox_PWMEnable->setText(QApplication::translate("MainWindow", "Enable", 0));
        comboBox_PWMChannel->clear();
        comboBox_PWMChannel->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Channel 0 (GPIO_0)", 0)
         << QApplication::translate("MainWindow", "Channel 2 (GPIO_2)", 0)
        );
        pushButton_GetPWMConfig->setText(QApplication::translate("MainWindow", "Get", 0));
        pushButton_SetPWMConfig->setText(QApplication::translate("MainWindow", "Set", 0));
        groupBox_GPIOConfig->setTitle(QApplication::translate("MainWindow", "GPIO Configuration", 0));
        checkBox_GPIOEnAltFun->setText(QApplication::translate("MainWindow", "Enable Alt Function", 0));
        label_GPIOSelPin->setText(QApplication::translate("MainWindow", "Select GPIO Pin", 0));
        label_GPIOPinDir->setText(QApplication::translate("MainWindow", "Pin Direction", 0));
        comboBox_GPIOPinDir->clear();
        comboBox_GPIOPinDir->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Input", 0)
         << QApplication::translate("MainWindow", "Output", 0)
        );
        label_GPIOPinState->setText(QApplication::translate("MainWindow", "Pin State", 0));
        comboBox_GPIOPinState->clear();
        comboBox_GPIOPinState->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "LOW", 0)
         << QApplication::translate("MainWindow", "HIGH", 0)
        );
        comboBox_GPIOPin->clear();
        comboBox_GPIOPin->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", 0)
         << QApplication::translate("MainWindow", "FAN PWM", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "LED STATUS RED", 0)
         << QApplication::translate("MainWindow", "LED STATUS GRN", 0)
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "FAN LOCKED", 0)
         << QApplication::translate("MainWindow", "I2C1 SCL", 0)
         << QApplication::translate("MainWindow", "I2C1 SDA", 0)
         << QApplication::translate("MainWindow", "TRIG OUT 1", 0)
         << QApplication::translate("MainWindow", "11", 0)
         << QApplication::translate("MainWindow", "12", 0)
         << QApplication::translate("MainWindow", "13", 0)
         << QApplication::translate("MainWindow", "14", 0)
         << QApplication::translate("MainWindow", "15", 0)
         << QApplication::translate("MainWindow", "FLASH ADDR 21", 0)
         << QApplication::translate("MainWindow", "FLASH ADDR 22", 0)
         << QApplication::translate("MainWindow", "USB ENZ", 0)
         << QApplication::translate("MainWindow", "HOLD IN BOOT", 0)
         << QApplication::translate("MainWindow", "20", 0)
         << QApplication::translate("MainWindow", "21", 0)
         << QApplication::translate("MainWindow", "PWR ON/OFF", 0)
         << QApplication::translate("MainWindow", "EXT PWR ON", 0)
         << QApplication::translate("MainWindow", "24", 0)
         << QApplication::translate("MainWindow", "25", 0)
         << QApplication::translate("MainWindow", "INIT DONE", 0)
         << QApplication::translate("MainWindow", "27", 0)
         << QApplication::translate("MainWindow", "28", 0)
         << QApplication::translate("MainWindow", "29", 0)
         << QApplication::translate("MainWindow", "I2C/USB ADDR CFG", 0)
         << QApplication::translate("MainWindow", "TRIG IN 1", 0)
         << QApplication::translate("MainWindow", "TRIG IN 2", 0)
         << QApplication::translate("MainWindow", "33", 0)
         << QApplication::translate("MainWindow", "34", 0)
         << QApplication::translate("MainWindow", "35", 0)
         << QApplication::translate("MainWindow", "36", 0)
         << QApplication::translate("MainWindow", "TRIG OUT 2", 0)
        );
        label_GPIOOutputType->setText(QApplication::translate("MainWindow", "Output Type", 0));
        comboBox_GPIOOutType->clear();
        comboBox_GPIOOutType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NORMAL", 0)
         << QApplication::translate("MainWindow", "OPEN DRAIN", 0)
        );
        pushBox_GetGPIOConfig->setText(QApplication::translate("MainWindow", "Get", 0));
        pushBox_SetGPIOConfig->setText(QApplication::translate("MainWindow", "Set", 0));
        groupBox_PWMCapSetup->setTitle(QApplication::translate("MainWindow", "PWM Capture Setup", 0));
        label_PWMCapSampleRate->setText(QApplication::translate("MainWindow", "PWM Sample rate (285 Hz - 18.6 MHz)", 0));
        label_PWMCapDutyCycleReadback->setText(QApplication::translate("MainWindow", "Duty Cycle", 0));
        checkBox_PWMCapEnable->setText(QApplication::translate("MainWindow", "Enable", 0));
        comboBox_PWMCapChannel->clear();
        comboBox_PWMCapChannel->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Channel 0 (GPIO_5)", 0)
         << QApplication::translate("MainWindow", "Channel 1 (GPIO_6)", 0)
        );
        pushButton_PWMCapRead->setText(QApplication::translate("MainWindow", "PWM Capture Read", 0));
        pushButton_GetPWMCapConfig->setText(QApplication::translate("MainWindow", "Get", 0));
        pushButton_SetPWMCapConfig->setText(QApplication::translate("MainWindow", "Set", 0));
        groupBox_GPClk->setTitle(QApplication::translate("MainWindow", "General Purpose Clock", 0));
        checkBox_GpClk->setText(QApplication::translate("MainWindow", "Enable Clock", 0));
        comboBox_GpClk->clear();
        comboBox_GpClk->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "CLK_OUT1", 0)
         << QApplication::translate("MainWindow", "CLK_OUT2", 0)
        );
        label_GpClkDiv->setText(QApplication::translate("MainWindow", "Divide Clock By", 0));
        label_GpClkFreq->setText(QApplication::translate("MainWindow", "Clock Frequency", 0));
        label_GpClkFreqVal->setText(QApplication::translate("MainWindow", "48 Mhz", 0));
        pushButton_GetGpClk->setText(QApplication::translate("MainWindow", "Get", 0));
        pushButton_SetGpClk->setText(QApplication::translate("MainWindow", "Set", 0));
        textEdit_i2c0_port_usage->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; font-weight:600; text-decoration: underline;\">I2C0 Master Control usage</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; font-weight:600;\">Clock Rate:</span><span style=\" font-size:8.25pt;\"> </span></p>\n"
"<p "
                        "style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">Valid range &lt;18194 to 400000&gt;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; font-weight:600;\">Device Address:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">For 7-bit address, [b6:b0]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">Device Address must be set to [b6:b0] &lt;&lt; 1</span></p>\n"
"<p style=\" margin-t"
                        "op:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">For 10-bit address,[b9:b0]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">Device Address must be set to [b9:0] &lt;&lt; 1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">Note: The lsb Read/Write bit automatically appended by the controller</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_Peripheral_Ctrl), QApplication::translate("MainWindow", "Peripheral Control", 0));
        label_CreaImgInputBMPFileName->setText(QApplication::translate("MainWindow", "Input bmp File", 0));
        label_CreaImgInputBMPFileImgPreview->setText(QString());
        label_CreaImgOutImgPreview->setText(QString());
        pushButton_CreaImgClearOutFileContents->setText(QApplication::translate("MainWindow", "Clear Output File", 0));
        label_CreaImgOutputBMPFileName->setText(QApplication::translate("MainWindow", "Output bmp file", 0));
        pushButton_CreaImgSelectBMPFile->setText(QApplication::translate("MainWindow", "...", 0));
        label_CreaImgPattPosition->setText(QApplication::translate("MainWindow", "At bit(s) position in the destination file", 0));
        label_CreaImgBitDepth->setText(QApplication::translate("MainWindow", "Bit depth", 0));
        comboBox_CreaImgFileBitDepth->clear();
        comboBox_CreaImgFileBitDepth->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "8", 0)
        );
        pushButton_CreaImgAddToOutFile->setText(QApplication::translate("MainWindow", "Add to Output File", 0));
        comboBox_CreaImgFilePatPos->clear();
        comboBox_CreaImgFilePatPos->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "B0", 0)
         << QApplication::translate("MainWindow", "B1", 0)
         << QApplication::translate("MainWindow", "B2", 0)
         << QApplication::translate("MainWindow", "B3", 0)
         << QApplication::translate("MainWindow", "B4", 0)
         << QApplication::translate("MainWindow", "B5", 0)
         << QApplication::translate("MainWindow", "B6", 0)
         << QApplication::translate("MainWindow", "B7", 0)
         << QApplication::translate("MainWindow", "G0", 0)
         << QApplication::translate("MainWindow", "G1", 0)
         << QApplication::translate("MainWindow", "G2", 0)
         << QApplication::translate("MainWindow", "G3", 0)
         << QApplication::translate("MainWindow", "G4", 0)
         << QApplication::translate("MainWindow", "G5", 0)
         << QApplication::translate("MainWindow", "G6", 0)
         << QApplication::translate("MainWindow", "G7", 0)
         << QApplication::translate("MainWindow", "R0", 0)
         << QApplication::translate("MainWindow", "R1", 0)
         << QApplication::translate("MainWindow", "R2", 0)
         << QApplication::translate("MainWindow", "R3", 0)
         << QApplication::translate("MainWindow", "R4", 0)
         << QApplication::translate("MainWindow", "R5", 0)
         << QApplication::translate("MainWindow", "R6", 0)
         << QApplication::translate("MainWindow", "R7", 0)
        );
        pushButton_CreaImgSelectDestFileName->setText(QApplication::translate("MainWindow", "...", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_Create_Splash), QApplication::translate("MainWindow", "Create Images", 0));
        label_FWDwldLatFWLink->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Download the latest Firmware release from <a href=\"http://www.ti.com/tool/dlpr350\"><span style=\" font-family:'.HelveticaNeueUI,serif'; text-decoration: underline; color:#0000ff;\">http://www.ti.com/tool/dlpr350</span></a></p></body></html>", 0));
        label_FWFileParseStatus->setText(QApplication::translate("MainWindow", "Not started", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_FWFileSelected->setToolTip(QApplication::translate("MainWindow", "BMP File path", 0));
#endif // QT_NO_TOOLTIP
        pushButton_FWSelectFWBin->setText(QApplication::translate("MainWindow", "Browse", 0));
        label_FWSelectFWFile->setText(QApplication::translate("MainWindow", "Firmware File:", 0));
        label_FWIniFile->setText(QApplication::translate("MainWindow", "Selected INI file", 0));
        pushButton_FWClearSelIniFile->setText(QApplication::translate("MainWindow", "Clear", 0));
        label_add_fw_tag->setText(QApplication::translate("MainWindow", "Add Firmware Tag", 0));
        pushButton_FWClearFWTag->setText(QApplication::translate("MainWindow", "Clear", 0));
        label_NewFWBuildPath->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
        label_FWOrgSplashImageCount->setText(QApplication::translate("MainWindow", "# Original Images: ", 0));
        label_FWNewSplashImageAddedCount->setText(QApplication::translate("MainWindow", "Images Added: ", 0));
        label_FWSplashImageRemovedCount->setText(QApplication::translate("MainWindow", "Images Removed: ", 0));
        label_FWAvaSplashImageCount->setText(QApplication::translate("MainWindow", "Total Images: ", 0));
        pushButton_FWRemoveSplashImage->setText(QApplication::translate("MainWindow", "Remove", 0));
        comboBox_FWSplashImageIndex->clear();
        comboBox_FWSplashImageIndex->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", 0)
        );
        pushButton_FWAddSplashImage->setText(QApplication::translate("MainWindow", "Add", 0));
        pushButton_FWChangeSplashImage->setText(QApplication::translate("MainWindow", "Change", 0));
        pushButton_FWSelectIniFile->setText(QApplication::translate("MainWindow", "Select .ini File", 0));
        pushButton_FWBuildNewFrmwImage->setText(QApplication::translate("MainWindow", "Save Updates", 0));
        pushButton_FWSplashImageUpload->setText(QApplication::translate("MainWindow", "Download Pattern", 0));
        label_FWPreviewSelImage->setText(QString());
        groupBox_FWIllumModSelect->setTitle(QApplication::translate("MainWindow", "Illumination Control", 0));
        radioButton_FWIllumSelColor->setText(QApplication::translate("MainWindow", "RGB Color", 0));
        radioButton_FWIllumSelMono->setText(QApplication::translate("MainWindow", "Monochrome", 0));
        checkBox_FWIllumSelMonoRedCh->setText(QApplication::translate("MainWindow", "Use Red Channel Only", 0));
        checkBox_FWIllumSelMonoGreenCh->setText(QApplication::translate("MainWindow", "Use Green Channel Only", 0));
        checkBox_FWIllumSelMonoBlueCh->setText(QApplication::translate("MainWindow", "Use Blue Channel Only", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_Create_Firmware), QApplication::translate("MainWindow", "Firmware Build", 0));
        label_FWUploadLatestFWLink->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Download the latest Firmware release from <a href=\"http://www.ti.com/tool/dlpr350\"><span style=\" font-family:'.HelveticaNeueUI,serif'; text-decoration: underline; color:#0000ff;\">http://www.ti.com/tool/dlpr350</span></a></p></body></html>", 0));
        pushButton_Connect_2->setText(QApplication::translate("MainWindow", "Connection", 0));
        textEdit_FWUpdate->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">DLPC350 firmware image contains two applications. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">1. </span><span style=\" font-size:8.25pt; font-weight:600;\">Bootloader Application</span><span style=\" font-size:8.25pt;\"> - Resides in first 128KB memory in the flash; this application checks for validity of Main Application and also allows programming the flash.</span></p>\n"
"<p style=\" margin-top"
                        ":0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">2. </span><span style=\" font-size:8.25pt; font-weight:600;\">Main Application</span><span style=\" font-size:8.25pt;\"> - Controller jumps to Main Application from Boot Loader on Valid image; this is main application responisble configuration and control in various operating modes.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; font-weight:600;\">Note</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">If by any reason the bootloader area is corrupted; system will not boot, in such case you are required to use JTAG tools </span><a href=\"http://www.ti.com/dlp-lightcrafter4500-jtag-flash\"><span style=\" text-decoration: underline; color:#000"
                        "0ff;\">DLPC350 JTAG tools</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; font-weight:600;\">Skip Bootloader Update</span><span style=\" font-size:8.25pt;\"> - Checkbox option to skip erase and programming of fisrt 128KB of area where Bootloader Application reside in the flash.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt; font-weight:600;\">Fast Flash Update</span><span style=\" font-size:8.25pt;\"> - Check box opt"
                        "ion enable faster programming of the flash, this option when selected, basically compare new Fimrware file with the last programmed content which is maintained as cached file on the PC; then selectively erase and program the mismatch areas on the flash. After updating the new Firmware file is stored as cached file on the PC.   </span></p></body></html>", 0));
        groupBox_FWUpload->setTitle(QApplication::translate("MainWindow", "Firmware Upload", 0));
#ifndef QT_NO_TOOLTIP
        FirmwareFile_2->setToolTip(QApplication::translate("MainWindow", "BMP File path", 0));
#endif // QT_NO_TOOLTIP
        pushButton_FWFileSelect->setText(QApplication::translate("MainWindow", "Browse", 0));
        label_FWUploadProgressBar->setText(QApplication::translate("MainWindow", "Not started", 0));
        pushButton_FWUpload->setText(QApplication::translate("MainWindow", "Upload", 0));
        label_FWFileSelect->setText(QApplication::translate("MainWindow", "Firmware File:", 0));
        checkBox_FastFlashUpdate->setText(QApplication::translate("MainWindow", "Fast Flash Update", 0));
        checkBox_SkipBootLoader->setText(QApplication::translate("MainWindow", "Skip Bootloader Update", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_FirmwareUpload), QApplication::translate("MainWindow", "Firmware Upload", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_Image_Firmware), QApplication::translate("MainWindow", "Image / Firmware", 0));
        label_AddResE2ELink->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://e2e.ti.com/support/dlp__mems_micro-electro-mechanical_systems/f/924.aspx\"><span style=\" text-decoration: underline; color:#0000ff;\">http://e2e.ti.com/support/dlp__mems_micro-electro-mechanical_systems/f/924.aspx</span></a></p></body></html>", 0));
        label_AddResEVMLink->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.ti.com/tool/dlplcr4500evm\"><span style=\" font-family:'.HelveticaNeueUI,serif'; text-decoration: underline; color:#0000ff;\">http://www.ti.com/tool/dlplcr4500evm</span></a></p></body></html>", 0));
        label_AddResEVM->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">For more infomation about the DLP LightCrafter 4500 EVM or GUI, please read the User's Guide available on the product page: </p></body></html>", 0));
        label_AddResDHLink->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.ti.com/lsds/ti/analog/dlp/solutions-services.page\"><span style=\" text-decoration: underline; color:#0000ff;\">http://www.ti.com/lsds/ti/analog/dlp/solutions-services.page</span></a></p></body></html>", 0));
        label_AddResDH->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">For infomation about TI approved design houses to develop new hardware, software, optics, or system integration, please visit the TI DLP Solutions &amp; Services page:</p></body></html>", 0));
        label_AddResE2E->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">For questions or comments about the DLP LightCrafter 4500 EVM or GUI, please visit the TI E2E forum:</p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_Additional_Resources), QApplication::translate("MainWindow", "Additional Resources", 0));
        pushButton_task1_firmware->setText(QApplication::translate("MainWindow", "Upload Firmware", 0));
        pushButton_task1_pattern->setText(QApplication::translate("MainWindow", "Change to Pattern Sequence Mode", 0));
        pushButton_statInfo->setText(QApplication::translate("MainWindow", "StatInfo", 0));
        pushButton_task2_firmware_make->setText(QApplication::translate("MainWindow", "Generate Firmware", 0));
        lineEdit_task2_FWtag->setText(QApplication::translate("MainWindow", "Enter Firmware Tag", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_task1), QApplication::translate("MainWindow", "Zooid Tasks", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
