#include "TicTacToe.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//winform is your project name
	TicTacToe::TicTacToe form;
	Application::Run(% form);
}