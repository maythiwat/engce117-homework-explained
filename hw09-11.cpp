/**
 * ENGCE117 Homework Explained
 * 
 * Code by Maythiwat C., Chakrit K., Achitphon O., Sarawut K.
 * Explain by Maythiwat C.
 */

#include <stdio.h>

// ทำการคูณ matrix

int main() {
    int r1, r2, c1, c2 ;
    int array1[ 100 ][ 100 ] ;
    int array2[ 100 ][ 100 ] ;
    int result[ 100 ][ 100 ] ;

    printf( "Array1 Value : " ) ;
    scanf( "%d %d", &r1, &c1 ) ;

    printf( "Array1 element : " ) ;
    for( int i = 0 ; i < r1 ; i++ ) {
        for( int j = 0 ; j < c1 ; j++ ) {
            scanf( "%d", &array1[ i ][ j ] ) ;
        }
    }//end for

    printf( "Array2 Value : " ) ;
    scanf( "%d %d", &r2, &c2 ) ;

    // คูณไม่ได้เพราะ column ของ matrix 1 ไม่ขนาดไม่เท่ากัย row ของ matrix 2
    if( c1 != r2 ) {
        printf( "Matrix multiplication not possible.\n" ) ;
        return 1 ;
    }//end if

    
    printf( "Array2 element : " ) ;
    for( int i = 0 ; i < r2 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            scanf( "%d", &array2[ i ][ j ] ) ;
        }
    }//end for

    for( int i = 0 ; i < r1 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            result[ i ][ j ] = 0 ;
        }
    }//end for

    for( int i = 0 ; i < r1 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            for( int k = 0 ; k < c1 ; k++ ) {
                // คูณ matrix แบบที่คุณเคยเรียนคณิตศาสตร์มา
                result[ i ][ j ] += array1[ i ][ k ] * array2[ k ][ j ] ;
            }
        }
    }//end for

     // แสดงผล Array1
    printf( "Array1\n" ) ;
    for( int i = 0 ; i < r1;  i++ ) {
        for( int j = 0 ; j < c1 ; j++ ) {
            printf( "%d ", array1[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }//end for

    // แสดงผล Array2
    printf( "Array2\n" ) ;
    for( int i = 0 ; i < r2 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            printf( "%d ", array2[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }//end for

    // แสดงผล Array1 x Array2
    printf( "Array1 x Array2\n" ) ;
    for( int i = 0 ; i < r1 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            printf( "%d ", result[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }//end for

    return 0;
}//end function
