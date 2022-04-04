class Solution {
public:
    bool judgeSquareSum(int c) {
         if ( !c ) return true;
        for( long i = 0 ; i * i < c ; i++ )
        {
            long b = sqrt(c - i*i );
            if( b * b + i * i == c ) return true;
        }
        return false;
    }
};