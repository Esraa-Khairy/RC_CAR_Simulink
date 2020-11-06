#ifndef __c3_CAR_Simulink_h__
#define __c3_CAR_Simulink_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc3_CAR_SimulinkInstanceStruct
#define typedef_SFc3_CAR_SimulinkInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c3_dataWrittenToVector[4];
  uint8_T c3_doSetSimStateSideEffects;
  const mxArray *c3_setSimStateSideEffectsInfo;
  int32_T *c3_sfEvent;
  uint8_T *c3_is_active_c3_CAR_Simulink;
  uint8_T *c3_is_c3_CAR_Simulink;
  real_T *c3_y2;
  real_T *c3_y1;
  real_T *c3_y3;
  real_T *c3_y4;
  real_T *c3_a;
  real_T *c3_m;
  real_T *c3_l;
} SFc3_CAR_SimulinkInstanceStruct;

#endif                                 /*typedef_SFc3_CAR_SimulinkInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_CAR_Simulink_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_CAR_Simulink_get_check_sum(mxArray *plhs[]);
extern void c3_CAR_Simulink_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
