#include <stdio.h>
int main () {
char name [50] ;
int price ;
printf (" what is your name ? \n  ");
scanf ("%s" ,name );
printf (" \n hello %s \n " , name ); 
while (1) { printf ( " \n what is the price ? , when you want to close it enter  ( -1 )  \n " ) ;
scanf ( "%d" , &price );
if ( price <=0 && price != -1 ) {printf (" invalid  number "); 
}
int ii = 100 - price ;
 if ( price == -1 ) {break ; } 
else if (price >=100 ) {printf (" congratulations you discount applied ! final price = %d \n ", price  - 10   );
}
else if (price < 100  && price >0 ) { printf ( "No discount,  final price is %d , but you can get discount when buy another  products equally = %d \n  " , price , ii);
}
}
printf (" you closed it bye 👋 ");

return 0 ;
}
