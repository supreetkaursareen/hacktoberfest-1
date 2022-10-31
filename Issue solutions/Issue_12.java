// This program returns the number of set bits in the binary format of the given number. 
// This solution uses the idea of bitwise operations.

import java.io.*;
 
class countSetBits {
   
    public static int countSetBits(int n)
    {
        int count = 0;
        while (n > 0) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
 
    // main function
    public static void main(String args[])
    {
        int i = 9;
        System.out.println(countSetBits(i));
    }
}
