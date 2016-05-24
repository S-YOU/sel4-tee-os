/*
 *	@Author : Rahul Mahadev (hybridNeo)
 *  Header file for defining structures and functions related to trusted application
 */

#include <stdio.h>
#include <autoconf.h>
#include <stdio.h>
#include <assert.h>
#include <sel4/sel4.h>
#include <simple/simple.h>
#include <simple-default/simple-default.h>
#include <vka/object.h>
#include <allocman/allocman.h>
#include <allocman/bootstrap.h>
#include <allocman/vka.h>
#include <vspace/vspace.h>
#include <string.h>
#include <sel4utils/vspace.h>
#include <sel4utils/mapping.h>
#include <sel4utils/process.h>

/*
 *	Object to hold information about the trusted application
 */
typedef struct{
	sel4utils_process_t proc_obj;
	vka_object_t ep_object;
	int ep_id; //endpoint 
}trusted_app_t;

extern void name_thread(seL4_CPtr tcb, char *name);
void init_ta(trusted_app_t *ta,vka_t *vka,vspace_t *vspace,char *app_name);