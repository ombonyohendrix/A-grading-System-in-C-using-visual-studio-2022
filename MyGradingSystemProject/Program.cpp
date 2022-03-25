
#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	///MyGradingSystemProject::LoginForm loginForm;
	///loginForm.ShowDialog();
	///User^ user = loginForm.user;
	 
	User^ user = nullptr;
	while (true) {
		MyGradingSystemProject::LoginForm loginForm;
		loginForm.ShowDialog();
		if (loginForm.switchToRegister) {
			MyGradingSystemProject::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}

		}
		else {
			user = loginForm.user;
			break;

		}
	}


	if (user != nullptr) {
		///MessageBox::Show("Successfull Authentication of " + user->name,
			///"Program.cpp", MessageBoxButtons::OK);
		MyGradingSystemProject::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("Authentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}
}

