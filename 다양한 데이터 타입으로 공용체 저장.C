int main()
{
   union num {
       int intVal;
       float floatVal;
       char charVal;
       
   };
   
   union num u;
   u.intVal = 100;
   printf("%d %d\n", u.intVal, &u.intVal);
   u.floatVal = 2.2;
   printf("%f %d\n", u.floatVal, &u.floatVal);
   u.charVal = 'A';   
   printf("%c %d\n", u.charVal, &u.charVal);
}
