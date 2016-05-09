/*--------------------------------------------------------------------------------------------
  Code Generator    : ModelXChanger UML->C Generator
  Version           : 0.10.0.201605050412
  Developed by      : Willert Software Tools GmbH and Ostfalia University of Applied Sciences
  -------------------------------------------------------------------------------------------- */
#ifndef AI_Execution_executor_H
#define AI_Execution_executor_H

#include "..\Solvers\ai_solver_facade.h"
#include "AI_Execution.h"
#include <WST_Types.h>
#include <stdlib.h>

/* ## This file contains declaration code for AI::Execution::executor  */
struct AI_Solvers_ai_solver_facade_struct;

/* ## class data struct */

typedef struct AI_Execution_executor_struct {
	struct AI_Solvers_ai_solver_facade_struct* solver;
} AI_Execution_executor;

/* ## class management functions */

/** -- auto-generated initialization -- */
void AI_Execution_executor_Init(AI_Execution_executor* const me);

/** -- auto-generated constructor -- */
struct AI_Execution_executor_struct* AI_Execution_executor_New(void);

/** -- auto-generated cleanup -- */
void AI_Execution_executor_Cleanup(AI_Execution_executor* const me);

/** -- auto-generated destructor -- */
void AI_Execution_executor_Destructor(AI_Execution_executor* const me);

/* ## class relationship functions */


#endif
