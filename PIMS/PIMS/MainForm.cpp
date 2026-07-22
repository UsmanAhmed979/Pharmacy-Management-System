//#include "MainForm.h"

#include"LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

//[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    PIMS::LoginForm^ loginForm = gcnew PIMS::LoginForm();
    Application::Run(loginForm);
    //PIMS::MainForm^ form = gcnew PIMS::MainForm();
    //Application::Run(form);

 //   if (loginForm->isAuthenticated) {
//        Application::Run(gcnew PMS::Main());
 ///   }

    ////return 0;
}



