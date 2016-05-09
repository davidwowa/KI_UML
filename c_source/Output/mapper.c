/*--------------------------------------------------------------------------------------------
  Code Generator    : ModelXChanger UML->C Generator
  Version           : 0.10.0.201605050412
  Developed by      : Willert Software Tools GmbH and Ostfalia University of Applied Sciences
  -------------------------------------------------------------------------------------------- */

#include "mapper.h"

/* -- This file contains definition code for AI::Output::mapper -- */

/* ## class management functions */

/** -- auto-generated initialization -- */
void AI_Output_mapper_Init(AI_Output_mapper* const me) {
	/* No code was specified in the model. */
}

/** -- auto-generated constructor -- */
AI_Output_mapper* AI_Output_mapper_New(void) {
	AI_Output_mapper* me = (AI_Output_mapper *) malloc(sizeof(AI_Output_mapper));
	if(me != NULL) {
		AI_Output_mapper_Init(me);
	}
	return me;
}

/** -- auto-generated cleanup -- */
void AI_Output_mapper_Cleanup(AI_Output_mapper* const me) {
	/* No code was specified in the model. */
}

/** -- auto-generated destructor -- */
void AI_Output_mapper_Destructor(AI_Output_mapper* const me) {
	if (me != NULL) {
		AI_Output_mapper_Cleanup(me);
	}
	free(me);
}

