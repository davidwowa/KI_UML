/*--------------------------------------------------------------------------------------------
  Code Generator    : ModelXChanger UML->C Generator
  Version           : 0.10.0.201605050412
  Developed by      : Willert Software Tools GmbH and Ostfalia University of Applied Sciences
  -------------------------------------------------------------------------------------------- */
#ifndef AI_Input_state_data_manager_H
#define AI_Input_state_data_manager_H

#include "AI_Input.h"
#include <WST_SLinkedList.h> /* this class requires lists */
#include <WST_Types.h>
#include <stdlib.h>

/* ## This file contains declaration code for AI::Input::state_data_manager  */

/* ## class data struct */

typedef struct AI_Input_state_data_manager_struct {
	WSTSLinkedList sensor_data_array;
} AI_Input_state_data_manager;

/* ## class management functions */

/** -- auto-generated initialization -- */
void AI_Input_state_data_manager_Init(AI_Input_state_data_manager* const me);

/** -- auto-generated constructor -- */
struct AI_Input_state_data_manager_struct* AI_Input_state_data_manager_New(void);

/** -- auto-generated cleanup -- */
void AI_Input_state_data_manager_Cleanup(AI_Input_state_data_manager* const me);

/** -- auto-generated destructor -- */
void AI_Input_state_data_manager_Destructor(AI_Input_state_data_manager* const me);

/* ## class relationship functions */


/* ## dispatcher for incoming signals */
#endif
