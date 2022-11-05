int main()
{
   // memory = an array of bytes within RAM (street)
   // memory block = a single unit (byte) within memory (house), used to hold some value (person)
   // memory address = the address of where a memory block is located (house address)

   char a;
   char b[1];

   char d = 'X';
   short t = 'Y';
   int s = 'Z';
   double l = 'q';

   printf("size in bytes is: %d\n", sizeof(d));
   printf("size in bytes is: %d\n", sizeof(t));
   printf("size in bytes is: %d\n", sizeof(s));
   printf("size in bytes is: %d\n", sizeof(l));

   printf("size is %d bytes\n", sizeof(a));
   printf("size is %d bytes\n", sizeof(b));
   
   printf("address is %p\n", &d);
   printf("address is %p\n", &t);
   printf("address is %p\n", &s);
   printf("address is %p\n", &l);

   printf("%p\n", &a);
   printf("%p\n", &b);


   return 0;
}