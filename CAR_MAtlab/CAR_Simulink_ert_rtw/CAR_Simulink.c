/*
 * File: CAR_Simulink.c
 *
 * Code generated for Simulink model 'CAR_Simulink'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Tue Feb 04 11:54:39 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CAR_Simulink.h"
#include "CAR_Simulink_private.h"
#include "CAR_Simulink_dt.h"

/* Named constants for Chart: '<Root>/Chart' */
#define CAR_Simulink_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define CAR_Simulink_IN_m1             ((uint8_T)1U)
#define CAR_Simulink_IN_m2             ((uint8_T)2U)
#define CAR_Simulink_IN_m3             ((uint8_T)3U)
#define CAR_Simulink_IN_m4             ((uint8_T)4U)

/* Block signals (auto storage) */
B_CAR_Simulink_T CAR_Simulink_B;

/* Block states (auto storage) */
DW_CAR_Simulink_T CAR_Simulink_DW;

/* Real-time model */
RT_MODEL_CAR_Simulink_T CAR_Simulink_M_;
RT_MODEL_CAR_Simulink_T *const CAR_Simulink_M = &CAR_Simulink_M_;

/* Model step function */
void CAR_Simulink_step(void)
{
  int16_T y1;
  int16_T y2;
  int16_T y3;
  int16_T y4;

  /* Constant: '<Root>/Constant' */
  CAR_Simulink_B.Constant = CAR_Simulink_P.Constant_Value;

  /* Chart: '<Root>/Chart' */
  /* Gateway: Chart */
  /* During: Chart */
  if (CAR_Simulink_DW.is_active_c3_CAR_Simulink == 0U) {
    /* Entry: Chart */
    CAR_Simulink_DW.is_active_c3_CAR_Simulink = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:6' */
    /* '<S1>:6:1' a==1 */
    CAR_Simulink_DW.is_c3_CAR_Simulink = CAR_Simulink_IN_m1;

    /* Entry 'm1': '<S1>:5' */
    /* '<S1>:5:1' y1= 5 */
    y1 = 5;

    /* '<S1>:5:1' y3=5 */
    y3 = 5;

    /* '<S1>:5:1' y2=0 */
    y2 = 0;

    /* '<S1>:5:1' y4=0 */
    y4 = 0;
  } else {
    switch (CAR_Simulink_DW.is_c3_CAR_Simulink) {
     case CAR_Simulink_IN_m1:
      /* During 'm1': '<S1>:5' */
      /* Transition: '<S1>:14' */
      /* '<S1>:14:1' a==2 */
      CAR_Simulink_DW.is_c3_CAR_Simulink = CAR_Simulink_IN_m2;

      /* Entry 'm2': '<S1>:3' */
      /* '<S1>:3:1' y2=5 */
      y2 = 5;

      /* '<S1>:3:1' y4=5 */
      y4 = 5;

      /* '<S1>:3:1' y1=0 */
      y1 = 0;

      /* '<S1>:3:1' y3=0 */
      y3 = 0;
      break;

     case CAR_Simulink_IN_m2:
      /* During 'm2': '<S1>:3' */
      /* Transition: '<S1>:15' */
      /* '<S1>:15:1' a==3 */
      CAR_Simulink_DW.is_c3_CAR_Simulink = CAR_Simulink_IN_m3;

      /* Entry 'm3': '<S1>:7' */
      /* '<S1>:7:1' y3=5 */
      y3 = 5;

      /* '<S1>:7:1' y1=0 */
      y1 = 0;

      /* '<S1>:7:1' y2=0 */
      y2 = 0;

      /* '<S1>:7:1' y4=0 */
      y4 = 0;
      break;

     case CAR_Simulink_IN_m3:
      /* During 'm3': '<S1>:7' */
      /* Transition: '<S1>:16' */
      /* '<S1>:16:1' a==4 */
      CAR_Simulink_DW.is_c3_CAR_Simulink = CAR_Simulink_IN_m4;

      /* Entry 'm4': '<S1>:4' */
      /* '<S1>:4:1' y1=5 */
      y1 = 5;

      /* '<S1>:4:1' y2=0 */
      y2 = 0;

      /* '<S1>:4:1' y3=0 */
      y3 = 0;

      /* '<S1>:4:1' y4=0 */
      y4 = 0;
      break;

     default:
      /* During 'm4': '<S1>:4' */
      /* Transition: '<S1>:23' */
      /* '<S1>:23:1' a==1 */
      CAR_Simulink_DW.is_c3_CAR_Simulink = CAR_Simulink_IN_m1;

      /* Entry 'm1': '<S1>:5' */
      /* '<S1>:5:1' y1= 5 */
      y1 = 5;

      /* '<S1>:5:1' y3=5 */
      y3 = 5;

      /* '<S1>:5:1' y2=0 */
      y2 = 0;

      /* '<S1>:5:1' y4=0 */
      y4 = 0;
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S2>/Digital Output' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion'
   */
  MW_digitalWrite(CAR_Simulink_P.DigitalOutput_pinNumber, (uint8_T)y1);

  /* S-Function (arduinodigitaloutput_sfcn): '<S3>/Digital Output' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   */
  MW_digitalWrite(CAR_Simulink_P.DigitalOutput_pinNum_cegre2zem4, (uint8_T)y2);

  /* S-Function (arduinodigitaloutput_sfcn): '<S4>/Digital Output' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion'
   */
  MW_digitalWrite(CAR_Simulink_P.DigitalOutput_pinNum_ebpdnypdzt, (uint8_T)y3);

  /* S-Function (arduinodigitaloutput_sfcn): '<S5>/Digital Output' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   */
  MW_digitalWrite(CAR_Simulink_P.DigitalOutput_pinNum_er4ywp3lth, (uint8_T)y4);

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.1s, 0.0s] */
    rtExtModeUpload(0, CAR_Simulink_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(CAR_Simulink_M)!=-1) &&
        !((rtmGetTFinal(CAR_Simulink_M)-CAR_Simulink_M->Timing.taskTime0) >
          CAR_Simulink_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(CAR_Simulink_M, "Simulation finished");
    }

    if (rtmGetStopRequested(CAR_Simulink_M)) {
      rtmSetErrorStatus(CAR_Simulink_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  CAR_Simulink_M->Timing.taskTime0 =
    (++CAR_Simulink_M->Timing.clockTick0) * CAR_Simulink_M->Timing.stepSize0;
}

/* Model initialize function */
void CAR_Simulink_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)CAR_Simulink_M, 0,
                sizeof(RT_MODEL_CAR_Simulink_T));
  rtmSetTFinal(CAR_Simulink_M, -1);
  CAR_Simulink_M->Timing.stepSize0 = 0.1;

  /* External mode info */
  CAR_Simulink_M->Sizes.checksums[0] = (3838966660U);
  CAR_Simulink_M->Sizes.checksums[1] = (1755735535U);
  CAR_Simulink_M->Sizes.checksums[2] = (2892483281U);
  CAR_Simulink_M->Sizes.checksums[3] = (2516380913U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    CAR_Simulink_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(CAR_Simulink_M->extModeInfo,
      &CAR_Simulink_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(CAR_Simulink_M->extModeInfo,
                        CAR_Simulink_M->Sizes.checksums);
    rteiSetTPtr(CAR_Simulink_M->extModeInfo, rtmGetTPtr(CAR_Simulink_M));
  }

  /* block I/O */
  (void) memset(((void *) &CAR_Simulink_B), 0,
                sizeof(B_CAR_Simulink_T));

  /* states (dwork) */
  (void) memset((void *)&CAR_Simulink_DW, 0,
                sizeof(DW_CAR_Simulink_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    CAR_Simulink_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for Constant: '<Root>/Constant' */
  CAR_Simulink_B.Constant = CAR_Simulink_P.Constant_Value;

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S2>/Digital Output' */
  MW_pinModeOutput(CAR_Simulink_P.DigitalOutput_pinNumber);

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S3>/Digital Output' */
  MW_pinModeOutput(CAR_Simulink_P.DigitalOutput_pinNum_cegre2zem4);

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S4>/Digital Output' */
  MW_pinModeOutput(CAR_Simulink_P.DigitalOutput_pinNum_ebpdnypdzt);

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S5>/Digital Output' */
  MW_pinModeOutput(CAR_Simulink_P.DigitalOutput_pinNum_er4ywp3lth);

  /* SystemInitialize for Chart: '<Root>/Chart' */
  CAR_Simulink_DW.is_active_c3_CAR_Simulink = 0U;
  CAR_Simulink_DW.is_c3_CAR_Simulink = CAR_Simulink_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void CAR_Simulink_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
