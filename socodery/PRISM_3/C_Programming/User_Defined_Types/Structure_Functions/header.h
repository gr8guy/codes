/*************************************************************************
*
*  FILE NAME    : header.h
*
*  DESCRIPTION  : Header file for demonstating structure and functions
*
*  DATE      NAME    REFERENCE          REASON
*
*  1-JUN-10  Sibu    PRISM-3 C FG       Initial Creation.
*
*   2010,  Technologies (Holdings) Ltd
*
**************************************************************************/

/* Avoiding multiple inclusions of header file */
#ifndef HEADER_H
  #define HEADER_H
/*******************************************************************************
*                       Header Files
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*******************************************************************************
*                       Macros
*******************************************************************************/
#define MAX 32
#define usr_ret int
#define SUCCESS 1
#define FAILURE 0

/*******************************************************************************
*                       User defined types
*******************************************************************************/
typedef struct sample
{
 int id;
 char name[MAX];
 float salary;
}emp_details_et;

/*******************************************************************************
*                       Functional Prototypes
*******************************************************************************/
extern usr_ret emp_struct_display(emp_details_et);
extern usr_ret emp_struct_ptr_display(emp_details_et *);
extern usr_ret emp_struct_elem_display(int, char *, float);

#endif
