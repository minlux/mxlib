#include <string.h> //NULL
#include "mx_array_rotate.h"


//rotate array (of given length) by num elements to the right
void mx_array_rotate_left(uint8_t * arr, size_t len, size_t num)
{
   mx_array_rotate_right(arr, len, len - num);
}

//rotate array (of given length) by num elements to the right
void mx_array_rotate_right(uint8_t * arr, size_t len, size_t num)
{
   if (arr == NULL) return; //no array
   if (len <= 1) return; //no need to rotate zero-/one-element only array
   num = num % len; //limit rotation-number to 0 .. len-1
   if (num == 0) return; //nothing todo, when rotation-number is zero

   size_t off = len - num;
   size_t cnt = 0; //number of elements rotated
   while (1)
   {
      const uint8_t tmp = arr[0];
      size_t j = 0;
      size_t i;
      while (1)
      {
         //plus *off*
         i = j;
         j += off;
         if (j >= len) j -= len; //stay in range 0 .. len-1
         if (j == 0) break; //done
         arr[i] = arr[j];
         ++cnt;
         //minus *num*
         i = j;
         if (j < num) j += len; //prepare to stay in range 0 .. len-1
         j -= num;
         if (j == 0) break; //done
         arr[i] = arr[j];
         ++cnt;
      }
      arr[i] = tmp;
      ++cnt;
      //completed?
      if (cnt >= len)
      {
         break; //yes, completed!
      }
      //no
      ++arr; //we need one more iteration
   }
}



