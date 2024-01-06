#include<iostream>
using namespace std;
class Money{
    private :
        int rs;
        int paisa;
    public :
        Money(){cout<<" i m in cons\n";}
        Money(int r, int p){
           // cout<<"in constructor"<<endl;
            rs = r;
            paisa = p;
        }
        Money(Money &m){
            rs = m.rs;
            paisa = m.paisa;
        }
        // void setData(int r, int p){
        //     rs = r;
        //     paisa = p;
        // }
        void getData(){
            cout<<rs<<endl<<paisa;
        }
        ~Money(){
            cout<<"i m in dest\n";
        }


};
int main(){
    Money rishang;
    Money m1;
    // m1.paisa=70;
    // cout<<m1.paisa;
   // rishang.setData(10,20);
    // rishang.getData();
    Money riya;
   // riya.setData(30,40);
    //  riya.getData();
     Money saksham;
    //  saksham.getData();

}