/*
/
/  Refraction at the interface of air and water causes optical
/  illusion to the observer, locating an object from the other
/  side of the interface.
/
/  This program helps the observer to find out the apparent
/  separation from the object where the true separations are
/  user-defined.
/
*/

#include <stdio.h>

float a,                    // depth of the fish
      b,                    // height of the bird from the surface
      n1 = 1.0,  n2 = 1.33, // refractive index of the medium
      v1, v2,               // apparent distances
      u;                    // real distance between object and observer

int main(void)
{
    printf("Depth of the fish from the surface: ");
    scanf("%f", &a);
    printf("Height of the bird from the surface: ");
    scanf("%f", &b);
    u = a + b;// real separation between the object and the observer

    //BIRD_LOCATES_FISH

    printf("\n\nSolution:\n\n\
     In reality, the fish is at a distance of %.3f m\n\
     away from the bird.\n",u);
 
    v1 = ( n2 / n1 ) * u; // formula for apparent distance

    printf("\
     The bird locates the fish at a depth of %.3f m\n\
     from itself.\n", v1);
 
    // FISH_LOCATES_BIRD
 
    printf("\n\
     In reality, the bird is a distance of %.3f m\n\
     away from the fish.\n", u);

    v2 = ( n1 / n2 ) * u; // formula for apparent distance

    printf("\
     The fish locates the bird at a height of %.3f m\n\
     from itself.\n", v2);
 
    printf("\nConclusion:\n\n\
     Bird locates a fish farther from the fish's real position\n\
     while fish locates a bird nearer with respect to the\n\
     bird's real position.\n");
 
    return 0;
}
