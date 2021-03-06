/*************************************************************************
*
*  FILE NAME    : ptr_size.c
*
*  DESCRIPTION  : Demonstrates pointer size on different machines
*
*  DATE      NAME    REFERENCE          REASON
*
*  1-JUN-10  Sibu    PRISM-3 C FG       Initial Creation.
*
*   2010,  Technologies (Holdings) Ltd
*
**************************************************************************/

#include <stdio.h>

int main()
{
 /* Local Variable */
 char ch = 'A';
 int num = 111;
 long int l_num = 22334455;
 float f = 22.2;
 double d = 33.3;

 /* Pointer variables and their initializations */
 char *c_ptr = &ch;
 int *i_ptr = &num;
 long int *li_ptr = &l_num;
 /* Uncomment the following and observe the warning given by compiler */

// int *ii_ptr = &l_num;
  
int *iptr = (int *)c_ptr;

 float *f_ptr = &f;
 double *d_ptr = &d;

 /* Displaying the size of variables and their pointers.*/
 /* Size of pointer is same irrespective of the object they are pointing to */
 printf("sizeof char =%u, sizeof char* = %u\n", sizeof(ch), sizeof(c_ptr));
 printf("sizeof int =%u, sizeof int* = %u\n", sizeof(num), sizeof(i_ptr));
 printf("sizeof long int =%u, sizeof long int* = %u\n", sizeof(num), sizeof(li_ptr));
 printf("sizeof float =%u, sizeof float* = %u\n", sizeof(float), sizeof(f_ptr));
 printf("sizeof double  =%u, sizeof double* = %u\n", sizeof(double), sizeof(d_ptr));

 /* Displaying the address different variables using pointer */
 printf("Address of variables\n"); 
 printf("********************\n");
 printf("Address of ch is %p\n", c_ptr);  
 printf("Address of num is %p\n", i_ptr);  
 printf("Address of num is %p\n", li_ptr);  
 printf("Address of f is %p\n", f_ptr);  
 printf("Address of d is %p\n", d_ptr);  

 /* Incrementing all pointers */
 /* Pointers are incremented by the size of the object they are pointing to */
 c_ptr++; 
 i_ptr++; 
 f_ptr++; 
 d_ptr++; 
 
 /* Displaying pointer values after they are incremented  */
 printf("Pointer After incrementing\n"); 
 printf("********************\n");
 printf("Address of ch is %p\n", c_ptr);  
 printf("Address of num is %p\n", i_ptr);  
 printf("Address of num is %p\n", li_ptr);  
 printf("Address of f is %p\n", f_ptr);  
 printf("Address of d is %p\n", d_ptr);  

 return 0;
}
