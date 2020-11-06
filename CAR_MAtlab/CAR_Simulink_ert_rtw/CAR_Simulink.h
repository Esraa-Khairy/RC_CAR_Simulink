/*
 * File: CAR_Simulink.h
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

#ifndef RTW_HEADER_CAR_Simulink_h_
#define RTW_HEADER_CAR_Simulink_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef CAR_Simulink_COMMON_INCLUDES_
# define CAR_Simulink_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "arduino_digitaloutput_lct.h"
#endif                                 /* CAR_Simulink_COMMON_INCLUDES_ */

#include "CAR_Simulink_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T Constant;                     /* '<Root>/Constant' */
} B_CAR_Simulink_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_CAR_Simulink;   /* '<Root>/Chart' */
  uint8_T is_c3_CAR_Simulink;          /* '<Root>/Chart' */
} DW_CAR_Simulink_T;

/* Parameters (auto storage) */
struct P_CAR_Simulink_T_ {
  uint32_T DigitalOutput_pinNumber;    /* Mask Parameter: DigitalOutput_pinNumber
                                        * Referenced by: '<S2>/Digital Output'
                                        */
  uint32_T DigitalOutput_pinNum_cegre2zem4;/* Mask Parameter: DigitalOutput_pinNum_cegre2zem4
                                            * Referenced by: '<S3>/Digital Output'
                                            */
  uint32_T DigitalOutput_pinNum_ebpdnypdzt;/* Mask Parameter: DigitalOutput_pinNum_ebpdnypdzt
                                            * Referenced by: '<S4>/Digital Output'
                                            */
  uint32_T DigitalOutput_pinNum_er4ywp3lth;/* Mask Parameter: DigitalOutput_pinNum_er4ywp3lth
                                            * Referenced by: '<S5>/Digital Output'
                                            */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_CAR_Simulink_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_CAR_Simulink_T CAR_Simulink_P;

/* Block signals (auto storage) */
extern B_CAR_Simulink_T CAR_Simulink_B;

/* Block states (auto storage) */
extern DW_CAR_Simulink_T CAR_Simulink_DW;

/* Model entry point functions */
extern void CAR_Simulink_initialize(void);
extern void CAR_Simulink_step(void);
extern void CAR_Simulink_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CAR_Simulink_T *const CAR_Simulink_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CAR_Simulink'
 * '<S1>'   : 'CAR_Simulink/Chart'
 * '<S2>'   : 'CAR_Simulink/Digital Output'
 * '<S3>'   : 'CAR_Simulink/Digital Output1'
 * '<S4>'   : 'CAR_Simulink/Digital Output2'
 * '<S5>'   : 'CAR_Simulink/Digital Output3'
 */
#endif                                 /* RTW_HEADER_CAR_Simulink_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
