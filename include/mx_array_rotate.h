//-----------------------------------------------------------------------------
/*!
   \file
   \brief Rotate Array of given length by num elements to the left/right.

   Shuffles the bytes in place, withouth temporary memory usage!


   Example:
   =======

   int main(int argc, char ** argv)
   {
      // const char * const input = ""; //0
      // const char * const input = "0"; //1
      // const char * const input = "01"; //2
      // const char * const input = "012"; //3
      // const char * const input = "0123"; //4
      // const char * const input = "01234"; //5
      // const char * const input = "012345"; //6
      // const char * const input = "0123456"; //7 (odd prime number)
      // const char * const input = "01234567"; //8
      // const char * const input = "012345678"; //9
      const char * const input = "0123456789"; //10
      // const char * const input = "abcdefghijklmnopqrstuvw"; //23 (odd prime number)
      // const char * const input = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //26
      size_t len = strlen(input);
      char buffer[len + 1];


      for (size_t ror = 0; ror <= len; ++ror)
      {
         printf("Rotate left by (%lu, %lu)\n", len, ror);

         strcpy(buffer, input);
         printf("Input:  %s\n", buffer);
         mx_array_rotate_left(buffer, len, ror);
         printf("Output: %s\n\n", buffer);
      }
      return 0;
   }


   Output:
   ======

   Rotate left by (10, 0)
   Input:  0123456789
   Output: 0123456789

   Rotate left by (10, 1)
   Input:  0123456789
   Output: 1234567890

   Rotate left by (10, 2)
   Input:  0123456789
   Output: 2345678901

   Rotate left by (10, 3)
   Input:  0123456789
   Output: 3456789012

   Rotate left by (10, 4)
   Input:  0123456789
   Output: 4567890123

   Rotate left by (10, 5)
   Input:  0123456789
   Output: 5678901234

   Rotate left by (10, 6)
   Input:  0123456789
   Output: 6789012345

   Rotate left by (10, 7)
   Input:  0123456789
   Output: 7890123456

   Rotate left by (10, 8)
   Input:  0123456789
   Output: 8901234567

   Rotate left by (10, 9)
   Input:  0123456789
   Output: 9012345678

   Rotate left by (10, 10)
   Input:  0123456789
   Output: 0123456789

*/
//-----------------------------------------------------------------------------
#ifndef MX_ARRAY_ROTATE_H_
#define MX_ARRAY_ROTATE_H_

/* -- Includes ------------------------------------------------------------ */
#include <stdint.h>
#include <stdlib.h> //size_t

#ifdef __cplusplus
extern "C" {
#endif

/* -- Defines ------------------------------------------------------------- */

/* -- Types --------------------------------------------------------------- */

/* -- Global Variables ---------------------------------------------------- */

/* -- Function Prototypes ------------------------------------------------- */
void mx_array_rotate_left(uint8_t * arr, size_t len, size_t num);
void mx_array_rotate_right(uint8_t * arr, size_t len, size_t num);



/* -- Implementation ------------------------------------------------------ */



#ifdef __cplusplus
} /* end of extern "C" */
#endif

#endif
