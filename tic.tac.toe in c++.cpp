#include <iostream>

using namespace std;
char square[9] = {'0','1','2','3','4','5','6','7','8'};
int checkwin()
{
    if (square[0] == square [1]  && square[1] == square[2] )
		{	
	              if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}		
		else
		if (square[3] == square [4]  && square[4] == square[5] )
		{	
			if ( square [3] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (square[6] == square [7]  && square[7] == square[8] )
		{	
			if ( square [6] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else if (square[0] == square [3]  && square[3] == square[6] )
		{	
			if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else if (square[1] == square [4]  && square[4] == square[7] )
		{
			if ( square [1] == 'X' )			
			return 1;
			else
			return 2; 
		}
	      else if (square[2] == square [5]  && square[5] == square[8] )
	      {
		      if ( square [2] == 'X' )			
			return 1;
			else
			return 2; 
		}
         else if (square[0] == square [4]  && square[4] == square[8] )
			{	if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else if (square[2] == square [4]  && square[4] == square[6] )
			{	if ( square [2] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else if (square[0] == square [3]  && square[3] == square[6] )
			{	if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
    else if (square[0] != '0'&&square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8'  )

        return -1;
    else
        return 0;
}


void mark(int player, int box)
{
	if(player == 1 && square[box]!= 'X' && square[box] != 'O')
	{
        	square[box] = 'X';

        }
	else if(player == 2 && square[box] != 'X' && square[box] != 'O')
	{
        
        	square[box] = 'O';
        
        }
	else 
	{
        
       	 cout<<"Box already filled!n Please choose another!!nn";
       	 cout<< "\n Player " << player << "Enter ";
	 cin>> box;
	 mark( player, box);
       
    }
}

void display()
{
    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[0] << "  |  " << square[1] << "  |  " << square[2] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[3] << "  |  " << square[4] << "  |  " << square[5] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[6] << "  |  " << square[7] << "  |  " << square[8] << endl;

    cout << "     |     |     " << endl << endl;


}
int main()
{
    string n1,n2;
    cout<<"enter player 1 name"<<"\n";
    cin>>n1;
    cout<<"enter player 2 name"<<"\n";
    cin>>n2;
	int player1 = 1, player2 =2 ;
		
	int box, result = 0, flag = 0;
	display();
		
	while(result==0)
	{

		cout<< "\n Player " << player1 << "Enter ";
		cin>> box;
		mark( player1, box);
		display();

		result =checkwin();	
		if (result == 1 )
		{	cout<<"\n Congratualtions! player " << player1 << " has Won ";
			flag = 1;			
			break;
		}
		else
		if (result == 2 )
		{	cout<<"\n Congratualtions! player " << player2 << " has Won ";
			flag = 1;			
			break;
		}
		if(result!=0)
		{
		    
		    break;
		}

		cout<< "\n Player " << player2 << "Enter  ";
		cin>> box;
		mark ( player2, box);
		display();
		
		result =checkwin();	
		if (result == 1 )
		{	cout<<"\n Congratualtions! player " << player1 <<n1<< " has Won ";
			flag = 1;
			break;
		}
		else if (result == 2 )
		{	cout<<"\n Congratualtions! player " << player2<<n2 << " has Won ";
			flag = 1;
			break;
		}
    }
		if (flag == 0 )
		   cout<<" \n The game is a draw ";
	
	return 0;
}
