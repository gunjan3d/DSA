#pragma once

int SizeofAarry(int* arr)
{
    return sizeof(arr)/sizeof(int);
}

// brainKarnighen
int Count_Set_Bit(int n)
{
    int cnt=0;
    while(n)
    {
        n = n & (n-1);
        cnt++;
    }
    return cnt;
}

