/*--------------------------------------------------------------------------------------------
  Code Generator    : ModelXChanger UML->C Generator
  Version           : 0.10.0.201605050412
  Developed by      : Willert Software Tools GmbH and Ostfalia University of Applied Sciences
  -------------------------------------------------------------------------------------------- */
#ifndef AI_Flow_flow_decider_H
#define AI_Flow_flow_decider_H

#include "..\Input\state_data_manager.h"
#include "..\Solvers\ai_solver_facade.h"
#include "AI_Flow.h"
#include <WST_Types.h>
#include <stdlib.h>

/* ## This file contains declaration code for AI::Flow::flow_decider  */
struct AI_Solvers_ai_solver_facade_struct;
struct AI_Input_state_data_manager_struct;

/* ## class data struct */

typedef struct AI_Flow_flow_decider_struct {
	struct AI_Input_state_data_manager_struct* state_data;
	struct AI_Solvers_ai_solver_facade_struct* solver;
} AI_Flow_flow_decider;

/* ## class management functions */

/** -- auto-generated initialization -- */
void AI_Flow_flow_decider_Init(AI_Flow_flow_decider* const me);

/** -- auto-generated constructor -- */
struct AI_Flow_flow_decider_struct* AI_Flow_flow_decider_New(void);

/** -- auto-generated cleanup -- */
void AI_Flow_flow_decider_Cleanup(AI_Flow_flow_decider* const me);

/** -- auto-generated destructor -- */
void AI_Flow_flow_decider_Destructor(AI_Flow_flow_decider* const me);

/* ## class relationship functions */


/* ## declaration of operations */

void AI_Flow_flow_decider_decide(AI_Flow_flow_decider* const me);

void AI_Flow_flow_decider_run(AI_Flow_flow_decider* const me);

#endif
