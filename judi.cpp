#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
#include <cmath>
#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string>
long long amout_money;
using namespace std;
int rand_num(){
    int judi;
    return judi = (rand()%11) + 1;
    // cout << "Angka yang betul adalah= " << judi;
}
int main()
{
    rand_num();
    int judi;
    cout << "Masukkan Jumlah Deposit Anda Rp";
    cin>>amout_money;
    while(true){
        long long betting_amount;
         if(amout_money==0){
            cout<<"Maaf kamu kalah semua uang kamu menjadi Rp 0"<<endl;
            return 0;
        }
        cout<<"/nPasang berapa lek?"<<endl;
        cin>>betting_amount;
        if(betting_amount>amout_money){
            cout<<"Kamu Ga ada duit"<<endl;
            continue ;
        }

        cout<<"Tebak angka " ;
        int n;
        cin>>n;
        if(n>10||n<=0){
            cout<<"wrong number ,try again"<<endl;
            continue ;
        }
        else{
            int r=rand_num();
            if(r==n){
                amout_money=amout_money+(betting_amount*10);
                cout<<"Menang ╰ (▔∀▔) ╯ \n Uang mu nambah jadi "<<amout_money<<endl;
            }else{
                amout_money=amout_money-betting_amount;
                cout<<"Kalah (╥﹏╥) \n Uang mu ngurang jadi\n"<<amout_money<<endl;
                cout << "Angka yang betul adalah= \n" << rand_num;
            }
        }
    }

    

    return 0;
}