#include <stdio.h>
#include<math.h>
// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
int areaOfCircle(float radius)
{
  
  float area;
  float pi = 3.14159;
  area = pi * radius * radius;

  return area;
}
// return the result to be printed in main




int main(int argc, char* argv[]) 
{
  // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2
  float start = 5.2;
  int reps = 3;
  
  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

  printf("calculating area of circle starting at %f, and ending at %f\n", start, start+reps-1);
  
  // add your code below to call areaOfCircle function with values between
  

for (float start = 5.2; start < 7.2; start++)
{
   int a = start;
   int r = areaOfCircle(a);
   printf("area of circles are: %d\n", r);
  // start and end

}

  
}