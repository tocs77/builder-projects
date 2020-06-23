//---------------------------------------------------------------------------

#ifndef BasicH
#define BasicH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *inputCurrency;
	TEdit *outputCurrency;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *resultLabel;
	TButton *calcBtn;
	TButton *exitBtn;
	void __fastcall calcBtnClick(TObject *Sender);
	void __fastcall exitBtnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
