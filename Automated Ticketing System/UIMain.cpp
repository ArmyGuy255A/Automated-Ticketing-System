#include "stdafx.h"
#include "UIMain.h"


//#include "Classes\Database\ATSIController.cpp"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AutomatedTicketingSystem::UIMain form;
	Application::Run(%form);
}


