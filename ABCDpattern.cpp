USING NAMESPACE STD;

VOID PRINTabcdPATTERN(INT N)  {
FOR (INT I=1; I<=N ; I++) {
INT CNT_ALPHA = N-I+1 ;
CHAR ALPHABET ='A' ;
FOR (INT J = 1 ; J <=CNT_ALPHA ;J++) {
COUT<<ALPHABET;
ALPHABET = ALPHABET +1;
     }
    COUT<<ENDL;
    }
   }  
 INT MAIN( ) {
INT N ;
CIN>>N ;
PRINTabcdPATTERN(N);
RETURN 0 ;
}
  
#pattern is 
 FOR N =5
ABCDE
ABCD
ABC
AB
A
