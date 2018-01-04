# Random-Number-Generator-Test
Simple program to verify my random number generator

This was done both to famaliarize myself with GitHub and the Visual Studio GitHub extension

This was initially created with a lot of consulting with Stack Overflow. 
The goal was to create a random number generator that was both not a simple modulus (I wanted a better understanding of both the STL <random> and more information on what the possibilities were.
  
  
  I went with the mersene twister 19937 generator simply because that was what the example used and I don't have any strong reason to use another one.
  
  The mt19937 is seeded with an object of random_device.
  
  The function is called and specifies the outer bounds (inclusive) of the distribution. 
  Then a uniform distribution is created with those bands and that is used to return a random number between the given min and max.
