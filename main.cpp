#include <iostream.h>
#include <lvp\string.h>
/* GUI main class
 Must create a Win 32 Application */

#include <lvp\gui_top.h>

class GuiClass 
{
	public:
	GuiClass();
	void GuiMouseClick(int x, int y); // Action if mouse click
	void GuiPaint();  // Repaint the entire window
	String Title(); // Return the title for the Window
	private:
};
//--------------------------------------------------------------------------------
GuiClass::GuiClass()
{
}
//--------------------------------------------------------------------------------
String GuiClass::Title()
{
	return "Title of OutPut Screen";
}
//--------------------------------------------------------------------------------
void GuiClass::GuiMouseClick(int x, int y)
{
}
//--------------------------------------------------------------------------------
void GuiClass::GuiPaint()
{
	SetThickness(10);//Handle
	SetColor(BLACK);
	SetFillColor(WHITE);
	FilledCircle(GetMaxX()/2-600, GetMaxY()/2-400,50);
	Circle(GetMaxX()/2-600,GetMaxY()/2-400,50);
	SetFillColor(GRAY);//BriefCase
	FilledRectangle(GetMaxX()/2-500, GetMaxY()/2-300, 20, 30);
	Rectangle(GetMaxX()/2-500, GetMaxY()/2-300, 20, 30);	
}
//--------------------------------------------------------------------------------
#include <lvp\gui_bot.h>


//---------------------------------------------------------------------------
//---------------------------------------------------------------------------


/* Implements a button which can be clicked on
            Modified to add default constructor! */
 

class ButtonClass {
            public:
            ButtonClass(String Text, int X1,int Y1, int X2, int Y2);
            /* Creates a button with upper left corner at X1,Y1 and lower
            right corner at X2,Y2 with Text centered in box */
            ButtonClass();
            void SetButton(String Text, int X1,int Y1, int X2, int Y2);
            void Paint();
            bool IsHit(int x, int y);
            /* Returns true if and only if (x,y) is on the button */
            private:
                        int MyX1, MyY1, MyX2, MyY2;
                        String MyText;
            };
//-------------------------------------------------------------------
ButtonClass::ButtonClass()
{}
//-------------------------------------------------------------------
ButtonClass::ButtonClass(String Text, int X1,int Y1, int X2, int Y2):
            MyText(Text), MyX1(X1), MyY1(Y1), MyX2(X2), MyY2(Y2)
/* Creates a button with upper left corner at X1,Y1 and lower
            right corner at X2,Y2 with Text centered in box */
{}
//-------------------------------------------------------------------
void ButtonClass::SetButton(String Text, int X1,int Y1, int X2, int Y2)
/* Sets button with upper left corner at X1,Y1 and lower
            right corner at X2,Y2 with Text centered in box */
{
            MyText = Text;
            MyX1 = X1;
            MyY1 = Y1;
            MyX2 = X2;
            MyY2 = Y2;
}
//-------------------------------------------------------------------
void ButtonClass::Paint()
{
            SetColor(BLACK);
   SetThickness(2);
            Rectangle(MyX1,MyY1,MyX2,MyY2);
            gotoxy((MyX1+MyX2)/2, 5+(MyY1+MyY2)/2);
            DrawCenteredText(MyText);
}
//-------------------------------------------------------------------
bool ButtonClass::IsHit(int x, int y)
/* Returns true if and only if point (x,y) is on the button */
{
            return (x >= MyX1 && x <= MyX2 && y >= MyY1 && y <= MyY2);
}
//-------------------------------------------------------------------
//-------------------------------------------------------------------
//-------------------------------------------------------------------
//=------------------------------------------------TEMP
#include <lvp\vector.h>

class PanelClass
{
	public:
		DisplayPanel(int lr, double value);
		DelPanel();
	private: 



};
PanelClass::DisplayPanel(int lr, double value)
{

}
//-------------------------------TEMP
class BriefcaseClass
{
	public:
		DrawCase();//Main function
	private:
};

class GameplayClass
{
	public:
		GameplayClass();
		SetModel();
	private
		vector<String>model(26);
		vector<int>money(26);
};
GameplayClass::SetModel()
{
	model[0] = "Lily Aldridge";
	model[1] = "Alessandra Ambrosio";
	model[2] = "Tyra Banks";
	model[3] = "Gisele Bündchen";
	model[4] = "Laetitia Casta";
	model[5] = "Helena Christensen";
	model[6] = "Selita Ebanks";
	model[7] = "Lindsay Ellingson";
	model[8] = "Izabel Goulart";
	model[9] = "Kate Grigorieva";
	model[10] = "Erin Heatherton";
	model[11] = "Taylor Marie Hill";
	model[12] = "Elsa Hosk";
	model[13] = "Martha Hunt";
	model[14] = "Chanel Iman";
	model[15] = "Jac Jagaciak";
	model[16] = "Miranda Kerr";
	model[17] = "Karlie Kloss";
	model[18] = "Heidi Klum";
	model[19] = "Doutzen Kroes";
	model[20] = "Adriana Lima";
	model[21] = "Stella Maxwell";
	model[22] = "Marisa Miller";
	model[23] = "Karen Mulder";
	model[24] = "Chandra North";
	model[25] = "Stephanie Seymour";
}
