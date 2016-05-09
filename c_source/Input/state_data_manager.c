/*--------------------------------------------------------------------------------------------
  Code Generator    : ModelXChanger UML->C Generator
  Version           : 0.10.0.201605050412
  Developed by      : Willert Software Tools GmbH and Ostfalia University of Applied Sciences
  -------------------------------------------------------------------------------------------- */

#include "state_data_manager.h"

/* -- This file contains definition code for AI::Input::state_data_manager -- */

/* ## declaration of reception functions */


/* ## class management functions */

/** -- auto-generated initialization -- */
void AI_Input_state_data_manager_Init(AI_Input_state_data_manager* const me) {
	/* No code was specified in the model. */
}

/** -- auto-generated constructor -- */
AI_Input_state_data_manager* AI_Input_state_data_manager_New(void) {
	AI_Input_state_data_manager* me = (AI_Input_state_data_manager *) malloc(sizeof(AI_Input_state_data_manager));
	if(me != NULL) {
		AI_Input_state_data_manager_Init(me);
	}
	return me;
}

/** -- auto-generated cleanup -- */
void AI_Input_state_data_manager_Cleanup(AI_Input_state_data_manager* const me) {
	WSTCollection_Cleanup(&(me->sensor_data_array));
}

/** -- auto-generated destructor -- */
void AI_Input_state_data_manager_Destructor(AI_Input_state_data_manager* const me) {
	if (me != NULL) {
		AI_Input_state_data_manager_Cleanup(me);
	}
	free(me);
}

/* ## implementation of receptions */


/* ## dispatcher for incoming signals */

