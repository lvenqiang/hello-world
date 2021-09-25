/*!
* Copyright (c) 2020,ZYF.
* All Rights Reserved.
*
* \file main.cpp
* \brief C++版本使用CMakeLists.txt编译（同目录多个源文件）可执行文件
*
* \author ZYF
* \date 2020/7/11 10:58:42
* \version 1.0.0
*/

#include <stdio.h>
#include <iostream>
#include "Add/Add.h"
#include "Subtract/Subtract.h"

int main(int argc, char* argv[])
{
    int nA = 5;
    int nB = 3;

   int nAdd = Add(nA, nB);
   printf("%d+%d=%d\n", nA, nB, nAdd);

   int nSubtract = Subtract(nA, nB);
   printf("%d-%d=%d\n", nA, nB, nSubtract);

   return 1;
}
