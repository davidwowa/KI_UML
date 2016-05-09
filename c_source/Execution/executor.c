/*--------------------------------------------------------------------------------------------
  Code Generator    : ModelXChanger UML->C Generator
  Version           : 0.10.0.201605050412
  Developed by      : Willert Software Tools GmbH and Ostfalia University of Applied Sciences
  -------------------------------------------------------------------------------------------- */

#include "executor.h"

/* -- This file contains definition code for AI::Execution::executor -- */

/* ## class management functions */

/** -- auto-generated initialization -- */
void AI_Execution_executor_Init(AI_Execution_executor* const me) {
	/* No code was specified in the model. */
}

/** -- auto-generated constructor -- */
AI_Execution_executor* AI_Execution_executor_New(void) {
	AI_Execution_executor* me = (AI_Execution_executor *) malloc(sizeof(AI_Execution_executor));
	if(me != NULL) {
		AI_Execution_executor_Init(me);
	}
	return me;
}

/** -- auto-generated cleanup -- */
void AI_Execution_executor_Cleanup(AI_Execution_executor* const me) {
	/* No code was specified in the model. */
}

/** -- auto-generated destructor -- */
void AI_Execution_executor_Destructor(AI_Execution_executor* const me) {
	if (me != NULL) {
		AI_Execution_executor_Cleanup(me);
	}
	free(me);
}

