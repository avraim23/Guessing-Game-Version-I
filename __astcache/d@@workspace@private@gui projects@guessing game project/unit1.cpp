//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TGuessingGame *GuessingGame;
//---------------------------------------------------------------------------

bool isNumberEntered = false ;
int guessNumber ;
int attempsCounter = 0 ;

__fastcall TGuessingGame::TGuessingGame(TComponent* Owner)
	: TForm(Owner)
{
	TitleLabel->Text = "Please Enter The Number" ;
	CounterLabel->Text = "" ;
	HelpingMessage->Text = "" ;
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TGuessingGame::ConfirmButtonClick(TObject *Sender)
{
	if (!isNumberEntered)
	{
		guessNumber = NumbersEdit->Text.ToInt();
		isNumberEntered = true ;
		TitleLabel->Text = "Now You Can Guess The Number" ;
		WrongAttempsLabel->Text = "Wrong Attemps" ;
		NumbersEdit->Text = "" ;
	}
	else
	{
		int secondUsersNumber = NumbersEdit->Text.ToInt();
		if (secondUsersNumber == guessNumber )
		{
			HelpingMessage->Text = "YOU WON ! CONGRATULATIONS !" ;
			ConfirmButton->Enabled = false ;
			return ;
		}
		else if (secondUsersNumber > guessNumber)
			{
				HelpingMessage->Text = "Too Big Number" ;
				attempsCounter++ ;
				CounterLabel->Text = attempsCounter ;
			}
		else if (secondUsersNumber < guessNumber)
			{
				HelpingMessage->Text = "Too Small Number" ;
				attempsCounter++ ;
                CounterLabel->Text = attempsCounter ;
			}
	}
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
