#include<stdio.h>

int a, b;


float n1, n2, temp;
float v1, v2;

int u1, u2;


   int main()
{
 printf("Problem: A fish is swimming at a depth of 12 metres from the surface of an ocean.\n");
 printf("         Straight-way above, a bird is flying  at a height of 18 metres from the surface.\n");
 printf("      i. At what total depth does the bird locates the fish, intending to catch it?\n");
 printf("     ii. At what total height does the fish locates the bird in order to escape?\n");
 printf("         Provided the refractive index of air is 1.00 and that of water is 1.33.\n\n");

 printf("Mention the depth of the fish from the surface\n");
 scanf("%d",&a);
 printf("Mention the height of the bird from the surface\n");
 scanf("%d",&b);
 printf("\n\n");
 u1 = a + b;
 u2 = a + b;

 float n1 = 1.0;
 float n2 = 1.33;
 //BIRD_LOCATES_FISH
 
 {
 printf("Solution: In actual practice, the fish is at a separation of %d metres away from the bird.\n",u1);
 
 float v1 = (n2/n1)*u1;

 printf("          The bird locates the fish at a depth of %.1f metres from itself.\n",v1);
 
 }
/ FISH_LOCATES_BIRD
 
 temp = n1;
 { n1 = n2;
   n2 = temp;
 printf("          In actual, the bird is a separation of %d metres from the fish.\n",u2);

 float v2 = (n2/n1)*u2;

 printf("          The fish locates the bird at a height of %.1f metres from itself.\n\n",v2);
 
 
 }

 printf("Conclusion: Bird locates a fish farther from the fish's real position\n");
 printf("            while fish locates a bird nearer with respect to the bird's real position.\n");
 
 return 0;
}
