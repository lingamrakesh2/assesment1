#include"bitmap.h"


/*The function returns unsigned integer.

In this case the function accept unsigned integer as input (valid inputs from 1 to 9)
and the output should be in below pattern.
If the input value of Num =3, then output will be 333, 
if the value of Num =9, then output will be 999999999 can be 
achieved without using control statement like switch, if, if-else and loop statement.*/


int Sequence(unsigned int Num)
{
    Num = pow(10,Num)/(10 -1)* Num;
   return Num; 
}


/* 
The function returns unsigned integer either ‘1’ or ‘0’.
Input consists of one unsigned integer. In this case the function checks
the given number is Niven Number or Not. Niven Number is an integer that is
divisible by the sum of its digits. If its Niven Number then it returns 0, if not it returns 1.
Ex:   156 
It is Niven Number. The above Number (156) is divisible by sum of its digits. 
156  1+5+6 =12. Hence 156 can be divisible by 12. */

int NivenNumber(unsigned int Num)
{
    int addDigit=0;
    int res=0;
    int dummy=Num;
    while(Num>0)
    {
        addDigit+=Num%10;
        Num = Num/10;

    }
    res=dummy%addDigit;

    if(res==0)
    return 0;
    else
    return 1;
    
   
}
/* The function returns integer value. It has two arguments one is 
integer array and other is arraysize (length of an array). 
In this case, the function will return the 3rd smallest number in given array.
Ex.

{98,4,33,54,6}, In this integer array 33 is the 3 rd smallest number. Hence function will return 33.*/


int Find3rdSmallestNumber(unsigned int arrVal[], unsigned int arrSize)
{
    int temp=0, i, j;

    for(i=0; i<arrSize;i++)
    {
        for(j=i+1;j<arrSize;j++)
        {
            if(arrVal[i]>arrVal[j])
            {
                temp = arrVal[i];
                arrVal[i]=arrVal[j];
                arrVal[j]=temp;
            }
        }
    }
    return arrVal[2];
}
   



