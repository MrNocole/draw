/*
 * @Author: your name
 * @Date: 2021-05-30 09:09:13
 * @LastEditTime: 2021-12-08 13:02:33
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /undefined/home/zhangtao/Main.cpp
 */
#include<bits/stdc++.h>
#define ll long long 
using namespace std;



int main() {
    int n;
    printf("输入总人数:");
    freopen("js\\member.js","w",stdout);
    scanf("%d",&n);
    printf("var member = [");
    for (int i = 1 ; i <= n ; i ++) {
        printf("{");
        printf("\"name\": \"%d\"",i);
        printf("}");
        if (i < n) {
            printf(",");
        }
    }
    printf("]");
}