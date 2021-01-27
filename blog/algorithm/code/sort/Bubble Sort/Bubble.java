public class Bubble{

    public static void main(String []args){
       int num[] = { 5, 3, 2, 4, 1 } ;
       int temp = 0 ;

       System.out.println( "Original order" ) ;
       for( int i = 0 ; 5 > i ; i++ ) {
           System.out.println( num[i] ) ;
       }

       for( int i = 0 ; 5 > i ; i++ ) {
           for( int j = i+1 ; 5 > j ; j++ ) {
               if( num[i] > num[j] ) {
                   temp = num[i] ;
                   num[i] = num[j] ;
                   num[j] = temp ;
               }
           }
       }

       System.out.println( "After Bubble Sort" ) ;
       for( int i = 0 ; 5 > i ; i++ ) {
           System.out.println( num[i] ) ;
       }

    }
}
