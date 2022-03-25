#pragma once

namespace MyGradingSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ResetPasswordForm
	/// </summary>
	public ref class ResetPasswordForm : public System::Windows::Forms::Form
	{
	public:
		ResetPasswordForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ResetPasswordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtResetPassword;
	private: System::Windows::Forms::TextBox^ txtResetPasswordVerified;
	private: System::Windows::Forms::Button^ btnReset;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtResetPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtResetPasswordVerified = (gcnew System::Windows::Forms::TextBox());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Reset Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(247, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Reset Password Verified";
			// 
			// txtResetPassword
			// 
			this->txtResetPassword->Location = System::Drawing::Point(216, 30);
			this->txtResetPassword->Name = L"txtResetPassword";
			this->txtResetPassword->Size = System::Drawing::Size(331, 31);
			this->txtResetPassword->TabIndex = 2;
			// 
			// txtResetPasswordVerified
			// 
			this->txtResetPasswordVerified->Location = System::Drawing::Point(253, 106);
			this->txtResetPasswordVerified->Name = L"txtResetPasswordVerified";
			this->txtResetPasswordVerified->Size = System::Drawing::Size(294, 31);
			this->txtResetPasswordVerified->TabIndex = 3;
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(216, 225);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(182, 53);
			this->btnReset->TabIndex = 4;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			// 
			// ResetPasswordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(568, 502);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->txtResetPasswordVerified);
			this->Controls->Add(this->txtResetPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"ResetPasswordForm";
			this->Text = L"ResetPasswordForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
