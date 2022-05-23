#include <iostream>
using namespace std;


//CODE FOR CAFE STARTS HERE
int cafe();
int bakery(int total);
int tuckshop(int total);
int icecream(int total);
int juice_shop(int total);


//CODE FOR TIC TAC TOE STARTS HERE
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice;
int row,column;
char turn = 'X';
bool draw = false;

void display_board();
void player_turn();
bool gameover();

int main()
{
	int x;
	cout<<"\t\t\tUNIVERSITY MANANGEMENT SYSTEM\n\n\n";
	
	cout<<"PRESS 1 TO INITIALIZE TEACHER PORTAL\n\n";
	cout<<"PRESS 2 TO INITIALIZE CAFE SYSTEM\n\n";
	cout<<"PRESS 3 TO INITIALIZE GAMING ZONE\n\n";
	cout<<" ----------------------------------"<<endl;
	cout<<"| PRESS 0 TO TERMINATE THE PROGRAM |\n";
	cout<<" ----------------------------------\n";
	do
	{
		cin>>x;
			if(x == 2)
				{
					cafe();
				}
			if(x == 3)
				{
				    while(gameover())
					{
				        display_board();
				        player_turn();
				        gameover();	
					}
				    if(turn == 'X' && draw == false){
				        cout<<"\n\nCONGRATULATIONS! PLAYER 2 WITH 'O' HAS WON THE GAME";
				    }
				    else if(turn == 'O' && draw == false){
				        cout<<"\n\nCONGRATULATIONS! PLAYER 1 WITH 'X' HAS WON THE GAME";
				    }
				    else
				    cout<<"\n\nGAME DRAW!!!\n\n";
				}
	}while(x!=0);
}

int cafe()
{
	int check;
	int total;
	char choice;
	char a;
			cout<<"\t\t\t\t\tUNIVERSITY CAFE\n\n";
		cout<<"PRESS 1 TO ENTER BAKERY PRODUCTS\n";
		cout<<"PRESS 2 TO ENTER TUCKSHOP\n";
		cout<<"PRESS 3 TO ENTER ICE CREAM SHOP\n";
		cout<<"PRESS 4 TO ENTER JUICE SHOP\n";
		cout<<"PRESS 5 IN ORDER TO PROCEED TO CHECKOUT\n";
		cout<<" --------------- \n";
		cout<<"|PRESS 0 TO EXIT|\n";
		cout<<" --------------- \n";
		cin>>check;
		system("cls");
	do
	{
		
		if (check==1)
		{
			total=bakery(total);
			
		}
		if (check==2)
		{
			total=tuckshop(total);
		}
		if (check==3)
		{
			total=icecream(total);
		}
		if (check==4)
		{
			total=juice_shop(total);
		}
		if (check==5)
			{
				cout<<"TOTAL PAYABLE AMOUNT: "<<total<<endl<<endl;
				cout<<"DO YOU WISH TO CONTINUE BUYING? (PRESS Y TO PROCEED): \n";
				cin>>choice;
				if(choice=='Y'||choice=='y')
				{}
			}
	}while(check!=0);

}
//FOR BAKERY
int bakery(int total)
{
		int check; 
		float quantity;
		cout<<"\t\tYOU ENTERED THE BAKERY SECTION\n\n";
		cout<<"PRESS 1 TO BUY SANDWICH (Rs 100)\n\n";
		cout<<"PRESS 2 TO BUY CLUB SANDWICH (RS 150)\n\n";
		cout<<"PRESS 3 TO BUY ZINGER BURGER (RS 250)\n\n";
		cout<<"PRESS 4 TO BUY DONUT (RS 150)\n\n";
		cout<<"PRESS 5 TO BUY AALOO PATTIE (RS 40)\n\n";
		cout<<"PRESS 6 TO BUY CHICKEN PATTIE (RS 60)\n\n";
		cout<<"PRESS 7 TO BUY CHICKEN DRUM STICKS (RS 100)\n\n";
		cout<<"PRESS 8 TO BUY DONOR SHWARMA (RS 150)\n\n";
		cout<<"PRESS 9 TO BUY BUY MIX BISCUITS (RS 500 PER KG)\n\n";
		cout<<"PRESS 10 TO CHECK YOUR BILL\n\n";
		cout<<" --------------- \n";
		cout<<"|PRESS 0 TO EXIT|\n";
		cout<<" ---------------\n";
		
		do
		{
		cin>>check;
			if(check==1)
				{
					cout<<" HOW MANY OF THIS ITEM?\n";
					cin>>quantity;
					total=total+(quantity*100);
					cout<<quantity<<" SANDWICH ADDED TO YOUR CART\n";			
				}
			if(check==2)
				{
					cout<<" HOW MANY OF THIS ITEM?\n";
					cin>>quantity;
					total=total+(quantity*150);
					cout<<quantity<<" CLUB SANDWICH ADDED TO YOUR CART\n";
				}
			if(check==3)
				{
					cout<<" HOW MANY OF THIS ITEM?\n";
					cin>>quantity;
					total=total+(quantity*250);
					cout<<quantity<<" ZINGER BURGER ADDED TO YOUR CART\n";
				}
			if(check==4)
				{
					cout<<" HOW MANY OF THIS ITEM?\n";
					cin>>quantity;
					total=total+(quantity*150);
					cout<<quantity<<" DONUT ADDED TO YOUR CART\n";
				}	
			if(check==5)
				{
					cout<<" HOW MANY OF THIS ITEM?\n";
					cin>>quantity;
					total=total+(quantity*40);
					cout<<quantity<<" AALOO PATTIE ADDED TO YOUR CART\n";
				}
			if(check==6)
				{
					cout<<" HOW MANY OF THIS ITEM?\n";
					cin>>quantity;
					total=total+(quantity*60);
					cout<<quantity<<" CHICKEN PATTIE ADDED TO YOUR CART\n";
				}
			if(check==7)
				{
					cout<<" HOW MANY OF THIS ITEM?\n";
					cin>>quantity;
					total=total+(quantity*100);
					cout<<quantity<<" CHICKEN DRUM STICK ADDED TO YOUR CART\n";
				}
			if(check==8)
				{
					cout<<" HOW MANY OF THIS ITEM?\n";
					cin>>quantity;
					total=total+(quantity*150);
					cout<<quantity<<" DONOR SHWARMA ADDED TO YOUR CART\n";
				}
			if(check==9)
				{
					cout<<" HOW MANY OF THIS ITEM?\n";
					cin>>quantity;
					total=total+(quantity*500);
					cout<<quantity<<" KG BISCUITS ADDED TO YOUR CART\n";
				}
			if(check==10)
				{
					cout<<"YOUR TOTAL BILL IS: "<<total;
					cout<<endl;
				}
		}
		while(check!=0);
	return total;
}
//FOR TUCKSHOP
int tuckshop(int total)
{
	int check, quantity;
	cout<<"\t\tYOU ENTERED THE TUCK SHOP\n";
	cout<<"PRESS 1 FOR REGULAR COLD DRINK (RS 35)\n";
	cout<<"PRESS 2 FOR HALF ltr. COLD DRINK (RS 60)\n";
	cout<<"PRESS 3 FOR 1 ltr. JUICE (RS 120)\n";
	cout<<"PRESS 4 FOR NESTLE NESFRUTA (RS 40)\n";
	cout<<"PRESS 5 FOR MASALA LAYS (RS 50)\n";
	cout<<"PRESS 6 FOR PAPRIKA LAYS (RS 50)\n";
	cout<<"PRESS 7 FOR DAIRY MILK BUBLY (RS 100)\n";
	cout<<"PRESS 8 FOR A WATER BOTTLE 1.5 Ltr. (RS 60)\n";
	cout<<"PRESS 9 FOR BUBBLE GUM (RS 20)\n";
	cout<<"PRESS 10 TO CHECK YOUR BILL\n";
	cout<<" --------------- \n";
	cout<<"|PRESS 0 TO EXIT|\n";
	cout<<" --------------- \n";
do
{
	cin>>check;
			if(check==1)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*35);
					cout<<quantity<<" REGULAR COLD DRINK ADDED TO YOUR CART\n";
				}
			if(check==2)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*60);
					cout<<quantity<<" HALF ltr. COLD DRINK ADDED TO YOUR CART\n";
				}
			if(check==3)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*120);
					cout<<quantity<<" 1 ltr. JUICE ADDED TO YOUR CART\n";
				}
			if(check==4)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*40);
					cout<<quantity<<" NESTLE NESFRUTA ADDED TO YOUR CART\n";
				}
			if(check==5)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*50);
					cout<<quantity<<" MASALA LAYS ADDED TO YOUR CART\n";
				}
			if(check==6)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*50);
					cout<<quantity<<" PAPRIKA LAYS ADDED TO YOUR CART\n";
				}
			if(check==7)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*100);
					cout<<quantity<<" DAIRY MILK BUBLY ADDED TO YOUR CART\n";
				}
			if(check==8)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*60);
					cout<<quantity<<" A WATER BOTTLE 1.5 Ltr. ADDED TO YOUR CART\n";
				}
			if(check==9)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*20);
					cout<<quantity<<" BUBBLE GUM ADDED TO YOUR CART\n";
				}		
			if(check==10)
				{
					cout<<"YOUR TOTAL BILL IS: "<<total<<endl;
				}
	}
	while(check!=0);
	
	return total;
}
//FOR ICECREAM SHOP
int icecream(int total)
{
	int check, quantity;
	cout<<"\t\tYOU ENTERED THE ICECREAM SHOP\n\n";
	cout<<"\t\t\t\t~~EACH ICE CREAM COSTS 80 RS~~\n\n";
	cout<<"PRESS 1 FOR MANGO FLAVOR ICECREAM\n\n";
	cout<<"PRESS 2 FOR CHOCOLATE FLAVOR ICECREAM\n\n";
	cout<<"PRESS 3 FOR STRAWBERRY FLAVOR ICECREAM\n\n";
	cout<<"PRESS 4 FOR VANILLA FLAVOR ICECREAM\n\n";
	cout<<"PRESS 5 FOR TUTTI FRUTTI FLAVOR ICECREAM\n\n";
	cout<<"PRESS 6 FOR CRUNCH FLAVOR ICECREAM\n\n";
	cout<<"PRESS 7 FOR COCONUT FLAVOR ICECREAM\n\n";
	cout<<"PRESS 8 FOR ALMOND FLAVOR ICECREAM\n\n";
	cout<<"PRESS 9 FOR KULFA FLAVOR ICECREAM\n";
	cout<<" --------------- \n";
	cout<<"|PRESS 0 TO EXIT|\n";
	cout<<" --------------- \n";
do
{
	cin>>check;
			if(check==1)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*80);
					cout<<quantity<<" MANGO FLAVOR ICECREAM ADDED TO YOUR CART\n";
				}
			if(check==2)
				{ 
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*80);
					cout<<quantity<<" CHOCOLATE FLAVOR ICECREAM ADDED TO YOUR CART\n";
				}
			if(check==3)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*80);
					cout<<quantity<<" STRAWBERRY FLAVOR ICECREAM ADDED TO YOUR CART\n";
				}
			if(check==4)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*80);
					cout<<quantity<<" VANILLA FLAVOR ICECREAM ADDED TO YOUR CART\n";
				}
			if(check==5)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*80);
					cout<<quantity<<" TUTTI FRUTTI FLAVOR ICECREAM ADDED TO YOUR CART\n";
				}
			if(check==6)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*80);
					cout<<quantity<<" CRUNCH FLAVOR ICECREAM ADDED TO YOUR CART\n";
				}
			if(check==7)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*80);
					cout<<quantity<<" COCONUT FLAVOR ICECREAM ADDED TO YOUR CART\n";
				}
			if(check==8)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*80);
					cout<<quantity<<" ALMOND FLAVOR ICECREAM ADDED TO YOUR CART\n";
				}
			if(check==9)
				{
					cout<<" HOW MANY OF THIS? : ";
					cin>>quantity;
					total=total+(quantity*80);
					cout<<quantity<<" KULFA FLAVOR ICECREAM ADDED TO YOUR CART\n";
				}	
			if(check==10)
				{
					cout<<"YOUR TOTAL BILL IS: "<<total<<endl;
				}
	}
	while(check!=0);
	
	return total;
}
//FOR JUICE SHOP
int juice_shop(int total)
{
	int check, quantity;
	cout<<"\t\tYOU ENTERED JUICE SHOP\n\n";
	cout<<"\t\t~~HERE WE OFFER FRESH JUICE~~\n\n";
	cout<<"PRESS 1 FOR MANGO JUICE (RS 150)\n\n";
	cout<<"PRESS 2 FOR APPLE JUICE (RS 100)\n\n";
	cout<<"PRESS 3 FOR STRAWBERRY JUICE (RS 150)\n\n";
	cout<<"PRESS 4 FOR POMEGRANATE JUICE (RS 300)\n\n";
	cout<<"PRESS 5 FOR GUAVA JUICE (RS 150)\n\n";
	cout<<"PRESS 6 FOR ORANGE JUICE (RS 100)\n\n";
	cout<<"PRESS 7 FOR PEACH JUICE (RS 150)\n\n";
	cout<<"PRESS 8 FOR FALSA JUICE (RS 100)\n\n";
	cout<<"PRESS 9 FOR LYCHEE JUICE (RS 150)\n\n";
	cout<<" --------------- \n";
	cout<<"|PRESS 0 TO EXIT|\n";
	cout<<" --------------- \n";
do
{
	cin>>check;
			if(check==1)
			{
				cout<<" HOW MANY OF THIS? : ";
				cin>>quantity;
				total=total+(quantity*150);
				cout<<quantity<<" MANGO JUICE ADDED TO YOUR CART\n";
			}
			if(check==2)
			{
				cout<<" HOW MANY OF THIS? : ";
				cin>>quantity;
				total=total+(quantity*100);
				cout<<quantity<<" APPLE JUICE ADDED TO YOUR CART\n";
			}	
			if(check==3)
			{
				cout<<" HOW MANY OF THIS? : ";
				cin>>quantity;
				total=total+(quantity*150);
				cout<<quantity<<" STRAWBERRY JUICE ADDED TO YOUR CART\n";
			}	
			if(check==4)
			{
				cout<<" HOW MANY OF THIS? : ";
				cin>>quantity;
				total=total+(quantity*300);
				cout<<quantity<<" POMEGRANATE JUICE ADDED TO YOUR CART\n";
			}	
			if(check==5)
			{
				cout<<" HOW MANY OF THIS? : ";
				cin>>quantity;
				total=total+(quantity*150);
				cout<<quantity<<" GUAVA JUICE ADDED TO YOUR CART\n";
			}	
			if(check==6)
			{
				cout<<" HOW MANY OF THIS? : ";
				cin>>quantity;
				total=total+(quantity*100);
				cout<<quantity<<" ORANGE JUICE ADDED TO YOUR CART\n";
			}	
			if(check==7)
			{
				cout<<" HOW MANY OF THIS? : ";
				cin>>quantity;
				total=total+(quantity*150);
				cout<<quantity<<" PEACH JUICE ADDED TO YOUR CART\n";
			}	
			if(check==8)
			{
				cout<<" HOW MANY OF THIS? : ";
				cin>>quantity;
				total=total+(quantity*100);
				cout<<quantity<<" FALSA JUICE ADDED TO YOUR CART\n";
			}	
			if(check==9)
			{
				cout<<" HOW MANY OF THIS? : ";
				cin>>quantity;
				total=total+(quantity*150);
				cout<<quantity<<" LYCHEE JUICE ADDED TO YOUR CART\n";
			}	
			if(check==10)
			{
				cout<<"YOUR TOTAL BILL IS: "<<total<<endl;
			}
	}
	while(check!=0);
	
	return total;
}

//THE FUNCTION FOR CAFE ENDS HERE


//FUNCTION TO DISPLAY THE GAME BOARD
void display_board()
{
	system("cls");
	cout<<"\t\t\tT I C K -- T A C -- T O E -- G A M E\t\t\t";
    cout<<"\n\t\t\t\tFOR 2 PLAYERS\n";
    cout<<"PLAYER - 1 = [X]\nPLAYER - 2 = [O]\n\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<" \n";
    cout<<"\t\t     |     |     \n";
}

//FUNCTION TO TAKE INPUT FROM THE USERS
void player_turn()
{
    if(turn == 'X')
	{
        cout<<"\n\tPlayer - 1 [X] turn : ";
    }
    else if(turn == 'O')
	{
        cout<<"\n\tPlayer - 2 [O] turn : ";
    }
    cin>> choice;
    
//TO UPDATE THE ROWS AND COLOUMNS IN GAME OUTLOOK
    switch(choice)
	{
    	case 1: row=0; column=0; break;
    	case 2: row=0; column=1; break;
    	case 3: row=0; column=2; break;
    	case 4: row=1; column=0; break;
    	case 5: row=1; column=1; break;
    	case 6: row=1; column=2; break;
    	case 7: row=2; column=0; break;
    	case 8: row=2; column=1; break;
    	case 9: row=2; column=2; break;
		
		default:
            cout<<"INVALID INPUT";
    }

	//UPDATING SPOT FOR PLAYER X IF IT IS NOT FILLED
	if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O')
	{
        board[row][column] = 'X';
        turn = 'O';
    }
	//UPDATING SPOT FOR PLAYER O IF IT IS NOT FILLED
	else if(turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O')
	{
        board[row][column] = 'O';
        turn = 'X';
    }
	//IF THE INPUT SPOT IS ALREADY FILLED
	else 
	{
        cout<<"SPOT IS ALREADY FILLED!\n PLEASE CHOOSE ANOTHER!!\n\n";
        player_turn();
    }
}

//FUNCTION FOR GAME STATUS SUCH THAT GAME IS WON, GAME IS DRAW GAME OR IN CONTINUE MODE
bool gameover()
{
    //CHECKING THE VERTICAL AND HORIZONTAL LINE IF ANYBODY WON
    for(int i=0; i<3; i++)
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
    return false;

    //CHECKING BOTH DIAGONALS TO SEE IF ANYBODY WON
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return false;

    //CHECKING THE GAME IF IT IS IN CONTINUE MOD
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(board[i][j] != 'X' && board[i][j] != 'O')
    return true;

	//TO CHECK DRAW
    draw = true;
    return false;
}
