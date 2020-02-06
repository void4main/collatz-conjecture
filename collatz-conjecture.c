#include <stdio.h>
#include <stdlib.h>

// Example output
// Start: 12235060455   End: 1   Steps: 1184


int main(void){
  // we should have at least 64bit integers
  unsigned long long int loop,k,start,int_start,int_max,max_steps,steps,max;

  // start
  int_start = 1;                   // start, e.g. 1 or 12235060455
  int_max = 9223372036854775807;   // this will be the end

  max_steps = 1;                   // init step counter

  for(loop=int_start;loop<=int_max;loop++){
    steps = 0;
    k = loop;
    start = k;

    // Don't ask whether this ends,
    // it is not yet decidable ... just wait ... :-)
    while (k != 1){
      // count steps to get to 1
      steps++;

      // the rules
      // even or odd?
      if (k % 2 == 0){
          k = k / 2;
      } else {
          k = 3 * k + 1;
      }
    }

    // print the new max
    if (steps > max_steps){
      max_steps = steps;
      printf("Start: %lli   End: %lli   Steps: %lli \n",start, k, steps);
    }

  }

  printf("End!\n");
  return 0;
}
