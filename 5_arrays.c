#include<stdio.h>
int main()
{
    // ARRAY IS COLLECTION OF SIMILAR TYPE OF DATA WHICH ARE STORED IN MEMORIE ADDRESS THAT ARE NEXT TO EACH OTHER.
    // WHAT IS MEMORY ADDRESS ?
    // SO THE MEMORY ADDRESS IS JUST LIKE IT SOUND ITS AN ADDRESS TO THE MEMORY WHERE DATA IS STORED , MEMORY ADDRESS IS EXACT LOCATION OF THE DATA IS BEING STORED ON YOUR STORAGE DEVICES
    // SUPPOSE THERE EXIST A MEMORY ADDRESS 1000 THEN ITS NEIGHBOURING ADDRESSES ARE 999 AND 1000 , SO IN ARRAY OF 3 IT IS A POSIBILITY THAT 999 1000 1001 COULD BE THE MEMORY THAT IS ALLOCATED TO THE ARRAY YOU CREATED

    // # HOW TO CREATE AN ARRAY ?

    int integer_array[5],i ;  // JUST LIKE ANY NORMAL VARIABLE BUT WITH AN EXTRA "[5]" THAT IS SAYING IT IS AN ARRAY OF 5, MEANING THERE CAN BE 5 DIFFERENT INTEGERS YOU CAN STORE IN THAT VARIABLE, THAT MEANS 5 NEIGHBOURING MEMOMEY ADDRESSES ARE BEING ALOCATED TO YOUR VARIABLE

    // # HOW TO STORE VALUES INSIDE ANY ARRAY ?
    // TO LEARN THIS YOU NEED TO KNOW ABOUT INDEXING, ITS LIKE SERIAL NUMBER OF THE VALUE THAT IS ENTERED , 1ST DATA , 2ND DATA , 3RD DATA, 4RTH DATA AND 5TH DATA, BUT IN PROGRAMMING INDEXING STARTS FROM 0
    // SO 1ST DATA INDEX IS 0, 2ND DATA INDEX IS 1, 3RD DATA INDEX IS 2 AND SO ON
    // WE WILL LEARN TO STORE DATA ONE BY ONE FIRST

    integer_array[0]= 2;     // ENTERING 1ST DATA AT INDEX 0
    integer_array[1]= 4;     // ENTERING 2ND DATA AT INDEX 1
    integer_array[2]= 8;     // ENTERING 3RD DATA AT INDEX 2
    integer_array[3]= 16;    // ENTERING 4TH DATA AT INDEX 3
    integer_array[4]= 32;    // ENTERING 5TH DATA AT INDEX 4

    // # HOW TO PRINT AN ARRAY ?
    
    printf("\nThis is 1st data stored at index 0 %d ",integer_array[0]);

    // WE CAN USE A VARIABLE AT THE PLACE OF INDEX INSTED OF WRITING NUMBER
    i=1;
    printf("\nThis is 2nd data stored at index 1 %d ",integer_array[i]);












    return 0;
}