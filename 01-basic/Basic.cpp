//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Basic.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	
}



//---------------------------------------------------------------------------
void __fastcall TForm1::calcBtnClick(TObject *Sender)
{
	float usd;
	float k;
	float rub;

	usd = StrToFloat(inputCurrency->Text);
	k = StrToFloat(outputCurrency->Text);

	rub = usd * k;

	resultLabel->Caption = FloatToStrF(usd, ffGeneral, 7, 2) + "$ = " +
		FloatToStrF(rub, ffCurrency, 7, 2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::exitBtnClick(TObject *Sender)
{
	Form1 -> Close();


}
//---------------------------------------------------------------------------

