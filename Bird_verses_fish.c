//Refraction at the interface of air and water causes optical illusion to the observer,
//locating an object from the other side of the interface.
//This program helps the observer to find out the apparent separation from the object where 
//the true separations are user-defined.   

#include<stdio.h>

int a, b;                  // 'a' is the depth of the fish
                           // 'b' is the height of the bird from the surface

float n1, n2, temp;        //'n1' & 'n2' are the refractive index of the given medium
float v1, v2;              //'v1' and 'v2' are the apparent distances

int u1, u2;                //'u1' and 'u2' are the real distance of the object from the observer


   int main()
{

 printf("Mention the depth of the fish from the surface\n");
 scanf("%d",&a);
 printf("Mention the height of the bird from the surface\n");
 scanf("%d",&b);
 printf("\n\n");
 u1 = a + b;               //'u'- real separation between the object and the observer is 
 u2 = a + b;               //     the sum of real distance (object from surface and observer from the surface)

 float n1 = 1.0;
 float n2 = 1.33;

 //BIRD_LOCATES_FISH
 {
 printf("Solution: In actual practice, the fish is at a separation of %d metres away from the bird.\n",u1);
 
 float v1 = (n2/n1)*u1;           // formula used to calculate apparent distance

 printf("          The bird locates the fish at a depth of %.1f metres from itself.\n",v1);
 
 }
      
 // FISH_LOCATES_BIRD
 
 temp = n1;
 { n1 = n2;
   n2 = temp;
 printf("          In actual, the bird is a separation of %d metres from the fish.\n",u2);

 float v2 = (n2/n1)*u2;         //formula used to calculate apparent distance

 printf("          The fish locates the bird at a height of %.1f metres from itself.\n\n",v2);
 
 
 }

 printf("Conclusion: Bird locates a fish farther from the fish's real position\n");
 printf("            while fish locates a bird nearer with respect to the bird's real position.\n");
 
 return 0;
}
