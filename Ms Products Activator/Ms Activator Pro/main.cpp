#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

void title_main(){//main title fuction

    system("color 0A");
    cout << "/------------------------------------------------------------------------------------------------------------\\" << endl;
    cout << "******************************************DEVELOPED BY CALCULUS-GUY*******************************************\n";
    cout << "\\------------------------------------------------------------------------------------------------------------/\n";
    cout << " Hi There!\n";
    cout << "  You are strongly welcome to..\n";
    cout << "  ##       ##                ##       ##   \n";
    cout << "  ####   ####                ##       ##  ####  ##   ##      #####   ###### ######  ####   ######  ######\n";
    cout << "  ##### #####  ########      ##   #   ##   ##   ###  ##     #     #  ##     ##       ##   ##       ##\n";
    cout << "  ##  ##   ## ###        ##  ##  ###  ##   ##   #### ## ### #     #  ##     ##       ##  ##        #####\n";
    cout << "  ##  #    ##  #######       ##### #####   ##   ## ####     #     #  #####  #####    ##  ##        ##\n";
    cout << "  ##       ##       ###      ###     ###   ##   ##  ###     #     #  ##     ##       ##   ##       ##\n";
    cout << "  ##       ## ########       ##       ##  ####  ##   ##      #####   ##     ##      ####    #####  ######\n\n";

    cout << "\t\t           ##     \n";
    cout << "\t\t          ####        ######  ######## #### ##     ##     ##     ########   #####   #######\n";
    cout << "\t\t         ##  ##     ##           ##     ##  ##     ##    ####       ##     #     #  ##    ## \n";
    cout << "\t\t        ##    ##   ##            ##     ##  ##     ##   ##  ##      ##     #     #  ## ####\n";
    cout << "\t\t       ##########  ##            ##     ##   ##   ##   ########     ##     #     #  ## ##\n";
    cout << "\t\t       ##      ##   ##           ##     ##     ####    ##    ##     ##     #     #  ##  ##\n";
    cout << "\t\t       ##      ##    ######      ##    ####     ##     ##    ##     ##      #####   ##   ##\n";
    cout << "/------------------------------------------------------------------------------------------------------------\\" << endl;
    cout << "*************************************************************************************************************\n";
    cout << "\\------------------------------------------------------------------------------------------------------------/\n\n";




}//void title_main ends here

void title_win(){//Win title fuction

    cout << "/--------------------------------------------------------------------------------------------------\\" << endl;
    cout << "******************************************DEVELOPED BY CALCULUS-GUY********************************\n";
    cout << "\\-------------------------------------------------------------------------------------------------/\n";
    cout << " Alright you are about to activate your windows!\n";
    cout << "  Kindly Following the instructions to continue\n";
    cout << "  ##       ##                ##       ##                           ##     \n";
    cout << "  ####   ####                ##       ##  ####  ##   ##           ####        ######  ######## \n";
    cout << "  ##### #####  ########      ##   #   ##   ##   ###  ##          ##  ##     ##           ##    \n";
    cout << "  ##  ##   ## ###        ##  ##  ###  ##   ##   #### ## ###     ##    ##   ##            ##    \n";
    cout << "  ##  #    ##  #######       ##### #####   ##   ## ####        ##########  ##            ##    \n";
    cout << "  ##       ##       ###      ###     ###   ##   ##  ###        ##      ##   ##           ##    \n";
    cout << "  ##       ## ########       ##       ##  ####  ##   ##        ##      ##    ######      ##    \n\n";
    cout << "/------------------------------------------------------------------------------------------------------\\" << endl;
    cout << "********************************************************************************************************\n";
    cout << "\\------------------------------------------------------------------------------------------------------/\n\n";

    }//void title_win ends here



void title_office(){//office title fuction

    cout << "/--------------------------------------------------------------------------------------------------\\" << endl;
    cout << "******************************************DEVELOPED BY CALCULUS-GUY********************************\n";
    cout << "\\-------------------------------------------------------------------------------------------------/\n";
    cout << " Alright you are about to activate your Office!\n";
    cout << "  Kindly Following the instructions to continue\n";
    cout << "  ##       ##                \n";
    cout << "  ####   ####                #####   ###### ######  ####   ######  ######\n";
    cout << "  ##### #####  ########     #     #  ##     ##       ##   ##       ##    \n";
    cout << "  ##  ##   ## ###        ## #     #  ##     ##       ##  ##        #####    \n";
    cout << "  ##  #    ##  #######      #     #  #####  #####    ##  ##        ##\n";
    cout << "  ##       ##       ###     #     #  ##     ##       ##   ##       ##\n";
    cout << "  ##       ## ########       #####   ##     ##      ####    #####  ######\n\n";
    cout << "/------------------------------------------------------------------------------------------------------\\" << endl;
    cout << "********************************************************************************************************\n";
    cout << "\\------------------------------------------------------------------------------------------------------/\n\n";

    }//void title_office ends here

    void win_options(){//win option starts here

    int win_option_c =0;
    int win_result;
    int retry;
     win_o:
        cout << "Choose an option to continue\n";
        cout << "[1] WINDOWS 1O \n";
        cout << "[2] WINDOWS 11 \n";
        cout << "[Input here]=> ";
        cin >>win_option_c;


        //win function starts here

        if(win_option_c == 1){
                cout << "\nActivating your WINDOWS 1O for you so sit tight.\n";
                win_result = system("w10.bat");
                cout << "Choose an option to continue\n";
                cout << " 1. Retry    2. Quit\n";
                cout << "[Input here]=> ";
                cin >> retry;
                if (retry ==1){
                    goto win_o;
                }


        }
        else if(win_option_c ==2){
                cout << "\nActivating your WINDOWS 11 for you so sit tight.\n";
                win_result = system("w11.bat");
                cout << "Choose an option to continue\n";
                cout << " 1. Retry    2. Quit\n";
                cout << "[Input here]=> ";
                cin >> retry;
                if (retry ==1){
                    goto win_o;
                }



        }//else if ends here

      //win function starts here


}//win option ends here

//win function ends here





    void office_options(){//win option starts here

    int office_option_c = 0;
    int office_result;
    int retry;
    office_o:
        cout << "Choose an option to continue\n";
        cout << "[1] OFFICE 2016 \n";
        cout << "[2] OFFICE 2019 \n";
        cout << "[3] OFFICE 2021 \n";
        cout << "[Input here]=> ";
        cin >> office_option_c;


        //office function starts here

        if(office_option_c == 1){
                cout << "\nActivating your OFFICE 2016 for you so sit tight.\n";
                office_result = system("O16.bat");
                cout << "Choose an option to continue\n";
                cout << " 1. Retry    2. Quit\n";
                cout << "[Input here]=> ";
                cin >> retry;
                if (retry ==1){
                    goto office_o;
                }


        }
        else if(office_option_c ==2){
                cout << "\nActivating your OFFICE 19 for you so sit tight.\n";
                office_result = system("O19.bat");
                cout << "Choose an option to continue\n";
                cout << " 1. Retry    2. Quit\n";
                cout << "[Input here]=> ";
                cin >> retry;
                if (retry ==1){
                    goto office_o;
                }



        }//else if 1 ends here
        else if(office_option_c ==3){
                cout << "\nActivating your OFFICE 21 for you so sit tight.\n";
                office_result = system("O21.bat");
                cout << "Choose an option to continue\n";
                cout << " 1. Retry    2. Quit\n";
                cout << "[Input here]=> ";
                cin >> retry;
                if (retry ==1){
                    goto office_o;
                }
        }



}//win option ends here

//win function starts here

int main()
{
    title_main();//calls the title void

    //Declaring variable here
    int option;
    int comp;

    cout << " What do you want to do now?\n";
    cout << "  1. Activate windows   2. Activate Office\n";
    cout << " Choose an option to continue:: ";
    cin >> option;

    //Function after choosing an option above

    if (option == 1){
            system("cls");
            system("color 03");
            title_win();cout <<"\n";
            win_options();
    }
    else if (option == 2 ){
            system("cls");
            system("color 04");
            title_office();cout <<"\n";
            office_options();


    }
        else if (option = 0){
        system("color 0D");

    }
    else{
        system("color 0E");
    }
    return 0;
}
