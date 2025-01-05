#include<iostream>
using namespace std ;
void timetable(){
    cout<<"enter time"<<endl;
    cout<<"8 am"<<endl;
    cout<<"9 am"<<endl;
    cout<<"10 am"<<endl;
    cout<<"11 am"<<endl;
    int time222;
     cin>>time222;
     if(time222==8){
         int num=10;

  for(int i = 0; i<=num ;i++){
            cout<<time222<<" :"<<i*5<<"am"<<endl;
        }
    }else if(time222==9){
        int num=10;

  for(int i = 0; i<=num ;i++){
            cout<<time222<<" :"<<i*5<<"am"<<endl;
        }
    }else if(time222==10){
        int num=10;

  for(int i = 0; i<=num ;i++){
            cout<<time222<<" :"<<i*5<<"am"<<endl;
        }
    }else if(time222==11){
        int num=10;

  for(int i = 0; i<=num ;i++){
            cout<<time222<<" :"<<i*5<<"am"<<endl;
        }
    }else{
        cout<<"Enter proper time which is given above";
    }
    
}
void studentinfo(){
    cout<<"enter your name =";
        string name;
        cin>>name;
        cout<<"enter your email ="<<endl;
        string email5;
        cin>>email5;
        cout<<"enter your marks of 1st and 2nd year ="<<endl;
        int marks1,marks2;
        cin>>marks1;
        cin>>marks2;
        float ave;
        ave=marks1+marks2;
        ave=ave/1100;
        ave=ave*100;
}


int main(){
    //user interface 
    cout<<"  1Admin"<<endl;
    cout<<"  2-Student"<<endl;
    cout<<"  3-Transportation "<<endl;
    cout<<"  4-Library"<<endl;
    cout<<"  5-Sports"<<endl;
    cout<<"  choose type"<<endl;
    int option;
    cin>>option;
    if(option==1){
        cout<<"Enter password"<<endl;
        int password;
        cin>>password;
        if(password==1234){
            cout<<"*****Admin Interface******"<<endl;
            cout<<"1-Add Program Detail"<<endl;
            cout<<"2-Detail of Applications"<<endl;
            cout<<"choose 1 or 2"<<endl;
            int adminopt;
            cin>>adminopt;
            if(adminopt==1){
                cout<<"Enter new program(1)"<<endl;
                string pgnm;
                cin>>pgnm;
                cout<<"enter seat number"<<endl;
                short int seatnum;
                cin>>seatnum;
                if(seatnum>1 && seatnum<5){
                    cout<<"declared seats are=";
                    cout<<seatnum<<endl;
                    cout<<"enter minimum percentage"<<endl;
                float percentage1;
                cin>>percentage1;
                cout<<percentage1;
                }
                else{
                    cout<<"enter valid seat number"<<endl;

                }
                cout<<"Enter new program(2)"<<endl;
                string prgname;
                cin>>prgname;
                cout<<"enter seat number"<<endl;
                short seatnum2;
                cin>>seatnum2;
                if(seatnum2>1 && seatnum2<5){
                    cout<<"declared seats are=";
                    cout<<seatnum2<<endl;
                    cout<<"enter minimum percentage"<<endl;
                float percentage2;
                cin>>percentage2;
                cout<<percentage2<<endl;
                }
                else{
                    cout<<"enter valid seat number"<<endl;
                    
                }
                
                cout<<"Enter new program(3)"<<endl;
                string prgname3;
                cin>>prgname3;
                cout<<"enter seat number"<<endl;
                short seatnum3;
                cin>>seatnum3;
                if(seatnum3>1 && seatnum3<5){
                    cout<<"declared seats are=";
                    cout<<seatnum3<<endl;
                    cout<<"enter minimum percentage"<<endl;
                float percentage3;
                cin>>percentage3;
                cout<<percentage3<<endl;
                }
                else{
                    cout<<"enter valid seat number"<<endl;
                    
                }
                
            }
            else if(adminopt==2){
                cout<<"******student names and eligibility*****"<<endl;
                cout<<"Student             eligibility"<<endl;
                cout<<"Faizan                   valid"<<endl;
                cout<<"Rehan                    valid"<<endl;
                cout<<"Talha                    invalid"<<endl;
                cout<<"hamdan                   invalid"<<endl;
                cout<<"Wesam                     valid"<<endl;

            }
            else{
                cout<<"choose valid option"; 
            }
            
        }
        else {
            cout<<"Invalid password"<<endl;
        }
    }
    else if(option==2){
        cout<<"******student portal******"<<endl;
        cout<<"enter your name =";
        string name;
        cin>>name;
        cout<<"enter your email ="<<endl;
        string email5;
        cin>>email5;
        cout<<"enter your marks of 1st and 2nd year ="<<endl;
        int marks1,marks2;
        cin>>marks1;
        cin>>marks2;
        float ave;
        ave=marks1+marks2;
        ave=ave/1100;
        ave=ave*100;
        int seats=6;
        cout<<"choose ur program "<<endl;
        cout<<"1 for CS "<<endl;
        cout<<"2 for AI "<<endl;
        cout<<"3 for IT "<<endl;
        int nn;
        cin>>nn;
        string prg,CS,AI,IT;
        if(nn==1 && prg==CS && ave<100 && ave>70 && seats!=0){
            cout<<"you are eligible for CS"<<endl;
            seats--;

        } 
        else{
            cout<<"you are not eligible for cs, try hard next time"<<endl;
        }
        if(nn==2 && prg==AI && ave<70 && ave>60 && seats!=0){
            cout<<"you are eligible for AI"<<endl;
            seats--;
        }else{
             cout<<"you are not eligible for AI, try hard next time"<<endl;
        }
    if(nn==3 && prg==IT && ave<60 && ave>50 && seats!=0){
            cout<<"you are eligible for IT"<<endl;
            seats--;
        }else{
             cout<<"you are not eligible for IT, try hard next time"<<endl;
        }
    }else if(option==3){
        cout<<"********** TRANSPORTATION **********"<<endl;
        cout<<"1-Timetable"<<endl;
        cout<<"2-Fee structure"<<endl;
        cout<<"3-Enrollment"<<endl;
        int optionnn;
        cin>>optionnn;
        if(optionnn==1){
            cout<<"choose Route "<<endl;
            cout<<"1-Multan Road Route "<<endl;
            cout<<"2-Johar Town Route "<<endl;
            cout<<"3-Undaroon Lahore Route "<<endl;
            int route;
            cin>>route;
            if(route==1){
                 timetable();
            }else if (route==2){
               timetable();
        
            }else{
                timetable();
            }

        }else if(optionnn==2){
            cout<<"Fee structure is "<<endl;
            cout<<"7000 RS"<<endl;
        }else if(optionnn==3){
            cout<<"*******student enrollment********"<<endl;

            studentinfo();
            cout<<"enter your ave marks"<<endl;
        float ave;
        cin>>ave;

         int   seatsss = 3;
            if(ave>=70){
                cout<<"you will GET 10 percent off on fee"<<endl;
            seatsss--;
            }else{
                cout<<"you are enrolled";
                seatsss--;
            }

        }




    }else if(option==4){
        cout<<"Server is offline :(";
    }else if(option==5){
        cout<<"Server is offline :(";
    }
    else{
        cout<<"choose valid option please!!!!!!"<<endl;
    }
}