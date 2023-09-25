//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TGuessingGame : public TForm
{
__published:	// IDE-managed Components
	TButton *ConfirmButton;
	TEdit *NumbersEdit;
	TLabel *HelpingMessage;
	TLabel *WrongAttempsLabel;
	TLabel *CounterLabel;
	TLabel *TitleLabel;
	void __fastcall ConfirmButtonClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TGuessingGame(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGuessingGame *GuessingGame;
//---------------------------------------------------------------------------
#endif
