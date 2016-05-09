/*--------------------------------------------------------------------------------------------
  Code Generator    : ModelXChanger UML->C Generator
  Version           : 0.10.0.201605050412
  Developed by      : Willert Software Tools GmbH and Ostfalia University of Applied Sciences
  -------------------------------------------------------------------------------------------- */

#include "tree_solver.h"

/* -- This file contains definition code for AI::Solvers::tree_solver -- */

/* ## class management functions */

/** -- auto-generated initialization -- */
void AI_Solvers_tree_solver_Init(AI_Solvers_tree_solver* const me) {
	/* No code was specified in the model. */
}

/** -- auto-generated constructor -- */
AI_Solvers_tree_solver* AI_Solvers_tree_solver_New(void) {
	AI_Solvers_tree_solver* me = (AI_Solvers_tree_solver *) malloc(sizeof(AI_Solvers_tree_solver));
	if(me != NULL) {
		AI_Solvers_tree_solver_Init(me);
	}
	return me;
}

/** -- auto-generated cleanup -- */
void AI_Solvers_tree_solver_Cleanup(AI_Solvers_tree_solver* const me) {
	/* No code was specified in the model. */
}

/** -- auto-generated destructor -- */
void AI_Solvers_tree_solver_Destructor(AI_Solvers_tree_solver* const me) {
	if (me != NULL) {
		AI_Solvers_tree_solver_Cleanup(me);
	}
	free(me);
}

