﻿// 2023.4.3,2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

int main()
{
    srand(time(NULL));
    rand();

    // i +=2 ---> i = i + 2;

    /*
            1 * 1 = 1   2 * 1 = 2   3 * 1 = 3
            1 * 2 = 2   2 * 2 = 4   3 * 2 = 6
            ...
            ...

            4 * 1 = 4   ...
            ...
            ...

            7 * 1 = 7 ...
            ...
            ...
    
    */

    /*
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            cout << j << " * " << i << " = " << j * i << "\t";
            if (j % 9 == 0)
                cout << endl;
        }
    }
    //내가 만든 구구단
    */

    /*
    for (int i = 0; i < 9; i += 3)
    {
        for (int j = 1; j < 10; j++)
        {
            for (int k = 1; k < 4; k++)
            {
                cout << k + i << " * " << j << " = " << (k + i) * j << "\t\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    삼중 for문
    */ 

    /*
    for (int i = 1; i < 10; i += 3)
    {
        for (int j = 1; j < 10; j++)
        {
            cout << i + 0 << " * " << j << " = " << (i + 0) * j << "\t\t";
            cout << i + 1 << " * " << j << " = " << (i + 1) * j << "\t\t";
            cout << i + 2 << " * " << j << " = " << (i + 2) * j << endl;
        }
        cout << endl;
    }
    // 이중 for문
    */

    for (int i = 0; i < 3; i ++)
    {
        for (int j = 1; j < 10; j ++)
        {
            for (int k = 1; k < 10; k += 3)
            {
                cout << k + i << " * " << j << " = " << (k + i) * j << "\t\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    //숙제 147 endl 258 endl 369 순으로 만들어보기

    /*
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j ++) // 이중 for문 사용시 변수 중복은 하지 않는다
        {
            cout << j + (i * 3) << endl;
        }
    }
    */

    system("pause");

    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.